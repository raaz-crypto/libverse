#pragma once
#include <stdint.h>

/*
 *         Byte swapping. Use platform specific ones when we know it.
 */

# pragma GCC optimize "tree-vectorize" /* Enable vectorisation for gcc */
#ifdef PLATFORM_OSX
#include <libkern/OSByteOrder.h> /* For PLATFORM OSX */

static inline uint16_t verse_bswap16(uint16_t x) { return OSSwapInt16(x); }
static inline uint32_t verse_bswap32(uint32_t x) { return OSSwapInt32(x); }
static inline uint64_t verse_bswap64(uint64_t x) { return OSSwapInt64(x); }

#elif defined(PLATFORM_WINDOWS)
#include <stdlib.h>
static inline uint16_t verse_bswap16(uint16_t x) { return _byteswap_ushort(x); }
static inline uint32_t verse_bswap32(uint32_t x) { return _byteswap_ulong(x); }
static inline uint64_t verse_bswap64(uint64_t x) { return _byteswap_uint64(x); }

#elif defined(PLATFORM_OPENBSD)
#include <endian.h>
static inline uint16_t verse_bswap16(uint16_t x) { return swap16(x); }
static inline uint32_t verse_bswap32(uint32_t x) { return swap32(x); }
static inline uint64_t verse_bswap64(uint64_t x) { return swap64(x); }

#elif defined(PLATFORM_LINUX) /* All other platforms */
#include <byteswap.h>
static inline uint16_t verse_bswap16(uint16_t x) { return bswap_16(x); }
static inline uint32_t verse_bswap32(uint32_t x) { return bswap_32(x); }
static inline uint64_t verse_bswap64(uint64_t x) { return bswap_64(x); }
#else

/* We do not have platform specific byte swap */
#define __VERSE_REQUIRE_PORTABLE_SWAP__

extern uint16_t verse_bswap16(uint16_t x);
extern uint32_t verse_bswap32(uint32_t x);
extern uint64_t verse_bswap64(uint64_t x);

#endif

#ifdef __GNUC__

/* For GNUC compiler use byte order checks to define efficient endian
 * conversion */

#if __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__

static inline uint16_t verse_to_be16(uint16_t x) { return verse_bswap16(x); }
static inline uint32_t verse_to_be32(uint32_t x) { return verse_bswap32(x); }
static inline uint64_t verse_to_be64(uint64_t x) { return verse_bswap64(x); }
static inline uint16_t verse_from_be16(uint16_t x) { return verse_bswap16(x); }
static inline uint32_t verse_from_be32(uint32_t x) { return verse_bswap32(x); }
static inline uint64_t verse_from_be64(uint64_t x) { return verse_bswap64(x); }

static inline uint16_t verse_to_le16(uint16_t x) { return x; }
static inline uint32_t verse_to_le32(uint32_t x) { return x; }
static inline uint64_t verse_to_le64(uint64_t x) { return x; }
static inline uint16_t verse_from_le16(uint16_t x) { return x; }
static inline uint32_t verse_from_le32(uint32_t x) { return x; }
static inline uint64_t verse_from_le64(uint64_t x) { return x; }

#else

static inline uint16_t verse_to_be16(uint16_t x) { return x; }
static inline uint32_t verse_to_be32(uint32_t x) { return x; }
static inline uint64_t verse_to_be64(uint64_t x) { return x; }
static inline uint16_t verse_from_be16(uint16_t x) { return x; }
static inline uint32_t verse_from_be32(uint32_t x) { return x; }
static inline uint64_t verse_from_be64(uint64_t x) { return x; }

static inline uint16_t verse_to_le16(uint16_t x) { return verse_bswap16(x); }
static inline uint32_t verse_to_le32(uint32_t x) { return verse_bswap32(x); }
static inline uint64_t verse_to_le64(uint64_t x) { return verse_bswap64(x); }
static inline uint16_t verse_from_le16(uint16_t x) { return verse_bswap16(x); }
static inline uint32_t verse_from_le32(uint32_t x) { return verse_bswap32(x); }
static inline uint64_t verse_from_le64(uint64_t x) { return verse_bswap64(x); }

#endif /* Byte order */

#else /* Not __GNUC__ use portable implementations */
#define __VERSE_REQUIRE_PORTABLE_ENDIAN__

extern uint16_t verse_to_be16(uint16_t x);
extern uint32_t verse_to_be32(uint32_t x);
extern uint64_t verse_to_be64(uint64_t x);
extern uint16_t verse_to_le16(uint16_t x);
extern uint32_t verse_to_le32(uint32_t x);
extern uint64_t verse_to_le64(uint64_t x);

extern uint16_t verse_from_be16(uint16_t x);
extern uint32_t verse_from_be32(uint32_t x);
extern uint64_t verse_from_be64(uint64_t x);
extern uint16_t verse_from_le16(uint16_t x);
extern uint32_t verse_from_le32(uint32_t x);
extern uint64_t verse_from_le64(uint64_t x);

#endif

/*
 *         Rotation functions.
 */


static inline uint8_t verse_rotL8(uint8_t w, int c) {
	return (w << c) | (w >> (8 - c));
}

static inline uint16_t verse_rotL16(uint16_t w, int c) {
	return (w << c) | (w >> (16 - c));
}

static inline uint32_t verse_rotL32(uint32_t w, int c) {
	return (w << c) | (w >> (32 - c));
}

static inline uint64_t verse_rotL64(uint64_t w, int c) {
	return (w << c) | (w >> (64 - c));
}


static inline uint16_t verse_rotR8(uint8_t w, int c) {
	return (w >> c) | (w << (8 - c));
}

static inline uint16_t verse_rotR16(uint16_t w, int c) {
	return (w >> c) | (w << (16 - c));
}

static inline uint32_t verse_rotR32(uint32_t w, int c) {
	return (w >> c) | (w << (32 - c));
}

static inline uint64_t verse_rotR64(uint64_t w, int c) {
	return (w >> c) | (w << (64 - c));
}

/*
  Yeah, I know the next few functions definitions are lame if you see
  libverse as a C library, but makes generation of C constants using
  Coq's notation mechanism. Given the nibbles that make up a value,
  these function returns the associated value.

*/

static inline uint8_t verse_u8( const uint8_t a,
				const uint8_t b)
{
    return a << 4
	|  b
	;
}

static inline uint16_t verse_u16(const uint16_t a,
				 const uint16_t b,
				 const uint16_t c,
				 const uint16_t d)

{
    return a << 12
	|  b << 8
	|  c << 4
	|  d
	;
}

static inline uint32_t verse_u32( const uint32_t a,
				  const uint32_t b,
				  const uint32_t c,
				  const uint32_t d,
				  const uint32_t e,
				  const uint32_t f,
				  const uint32_t g,
				  const uint32_t h)
{
    return a << 28
	|  b << 24
	|  c << 20
	|  d << 16
	|  e << 12
	|  f << 8
	|  g << 4
	|  h
	;
}
static inline uint64_t verse_u64( const uint64_t a,
				  const uint64_t b,
				  const uint64_t c,
				  const uint64_t d,
				  const uint64_t e,
				  const uint64_t f,
				  const uint64_t g,
				  const uint64_t h,
				  const uint64_t i,
				  const uint64_t j,
				  const uint64_t k,
				  const uint64_t l,
				  const uint64_t m,
				  const uint64_t n,
				  const uint64_t o,
				  const uint64_t p
    )

{
    return a << 60
	|  b << 56
	|  c << 52
	|  d << 48
	|  e << 44
	|  f << 40
	|  g << 36
	|  h << 32
	|  i << 28
	|  j << 24
	|  k << 20
	|  l << 16
	|  m << 12
	|  n << 8
	|  o << 4
	|  p
	;

}
