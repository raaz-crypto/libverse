#include <stdint.h>
#include <verse.h>
#define XOR ^
void verse_curve25519_c_portable_clamp(uint64_t(*bPtr)[4], uint64_t cTr)
{
	auto uint64_t v0;
	while (cTr > 0) {
		v0 = verse_from_le64((*bPtr)[0]);
		v0 &= 0xfffffffffffffff8ULL;
		(*bPtr)[0] = verse_to_le64(v0);
		v0 = verse_from_le64((*bPtr)[3]);
		v0 &= 0x7fffffffffffffffULL;
		v0 |= 0x4000000000000000ULL;
		(*bPtr)[3] = verse_to_le64(v0);
		++bPtr;
		--cTr;
	};
}
