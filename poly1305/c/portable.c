#include <stdint.h>
#include <verse.h>
#define XOR ^
void verse_poly1305_c_portable_incremental(uint64_t(*blockPtr)[2],
					   uint64_t nBlocks,
					   uint64_t AArray[3],
					   uint64_t RArray[2])
{
	auto uint64_t a0;
	auto uint64_t a1;
	auto uint64_t a2;
	auto uint64_t a3;
	auto uint64_t a4;
	auto uint64_t r0;
	auto uint64_t r1;
	auto uint64_t r2;
	auto uint64_t r3;
	auto uint64_t p1;
	auto uint64_t p2;
	auto uint64_t p3;
	auto uint64_t p4;
	auto uint64_t T0;
	auto uint64_t T1;
	a1 = AArray[0];
	a0 = a1 & 0x00000000ffffffffULL;
	a1 >>= 32;
	a3 = AArray[1];
	a2 = a3 & 0x00000000ffffffffULL;
	a3 >>= 32;
	a4 = AArray[2];
	r1 = RArray[0];
	r0 = r1 & 0x00000000ffffffffULL;
	r1 >>= 32;
	r3 = RArray[1];
	r2 = r3 & 0x00000000ffffffffULL;
	r3 >>= 32;
	while (nBlocks > 0) {
		T1 = verse_from_le64((*blockPtr)[0]);
		T0 = T1 & 0x00000000ffffffffULL;
		T1 >>= 32;
		a0 += T0;
		a1 += T1;
		T1 = verse_from_le64((*blockPtr)[1]);
		T0 = T1 & 0x00000000ffffffffULL;
		T1 >>= 32;
		a2 += T0;
		a3 += T1;
		++a4;
		p3 = a0 * r3;
		T0 = a1 * r2;
		p3 += T0;
		T0 = a2 * r1;
		p3 += T0;
		T0 = a3 * r0;
		p3 += T0;
		p2 = a0 * r2;
		T0 = a1 * r1;
		p2 += T0;
		T0 = a2 * r0;
		p2 += T0;
		p1 = a0 * r1;
		T0 = a1 * r0;
		p1 += T0;
		a0 *= r0;
		T0 = r3 >> 2;
		T0 += r3;
		T1 = a1 * T0;
		a0 += T1;
		T1 = a2 * T0;
		a1 = p1 + T1;
		T1 = a3 * T0;
		p2 += T1;
		T1 = a4 * T0;
		p3 += T1;
		T0 = r2 >> 2;
		T0 += r2;
		T1 = a2 * T0;
		a0 += T1;
		T1 = a3 * T0;
		a1 += T1;
		T1 = a4 * T0;
		a2 = p2 + T1;
		T0 = r1 >> 2;
		T0 += r1;
		T1 = a3 * T0;
		a0 += T1;
		T1 = a4 * T0;
		a1 += T1;
		T0 = r0 >> 2;
		T0 *= 0x0000000000000005ULL;
		T1 = a4 * T0;
		a0 += T1;
		a3 = p3;
		p4 = r0 & 0x0000000000000003ULL;
		a4 *= p4;
		T0 = a3 >> 32;
		a3 &= 0x00000000ffffffffULL;
		a4 += T0;
		T0 = a4 >> 2;
		a4 &= 0x0000000000000003ULL;
		T0 *= 0x0000000000000005ULL;
		a0 += T0;
		T0 = a0 >> 32;
		a0 &= 0x00000000ffffffffULL;
		a1 += T0;
		T0 = a1 >> 32;
		a1 &= 0x00000000ffffffffULL;
		a2 += T0;
		T0 = a2 >> 32;
		a2 &= 0x00000000ffffffffULL;
		a3 += T0;
		T0 = a3 >> 32;
		a3 &= 0x00000000ffffffffULL;
		a4 += T0;
		++blockPtr;
		--nBlocks;
	};
	a1 <<= 32;
	a1 |= a0;
	AArray[0] = a1;
	a3 <<= 32;
	a3 |= a2;
	AArray[1] = a3;
	AArray[2] = a4;
}

void verse_poly1305_c_portable_blockmac(uint64_t(*blockPtr)[2],
					uint64_t nBlocks, uint64_t AArray[3],
					uint64_t RArray[2], uint64_t SArray[2])
{
	auto uint64_t a0;
	auto uint64_t a1;
	auto uint64_t a2;
	auto uint64_t a3;
	auto uint64_t a4;
	auto uint64_t r0;
	auto uint64_t r1;
	auto uint64_t r2;
	auto uint64_t r3;
	auto uint64_t p1;
	auto uint64_t p2;
	auto uint64_t p3;
	auto uint64_t p4;
	auto uint64_t T0;
	auto uint64_t T1;
	a1 = AArray[0];
	a0 = a1 & 0x00000000ffffffffULL;
	a1 >>= 32;
	a3 = AArray[1];
	a2 = a3 & 0x00000000ffffffffULL;
	a3 >>= 32;
	a4 = AArray[2];
	r1 = RArray[0];
	r0 = r1 & 0x00000000ffffffffULL;
	r1 >>= 32;
	r3 = RArray[1];
	r2 = r3 & 0x00000000ffffffffULL;
	r3 >>= 32;
	while (nBlocks > 0) {
		T1 = verse_from_le64((*blockPtr)[0]);
		T0 = T1 & 0x00000000ffffffffULL;
		T1 >>= 32;
		a0 += T0;
		a1 += T1;
		T1 = verse_from_le64((*blockPtr)[1]);
		T0 = T1 & 0x00000000ffffffffULL;
		T1 >>= 32;
		a2 += T0;
		a3 += T1;
		++a4;
		p3 = a0 * r3;
		T0 = a1 * r2;
		p3 += T0;
		T0 = a2 * r1;
		p3 += T0;
		T0 = a3 * r0;
		p3 += T0;
		p2 = a0 * r2;
		T0 = a1 * r1;
		p2 += T0;
		T0 = a2 * r0;
		p2 += T0;
		p1 = a0 * r1;
		T0 = a1 * r0;
		p1 += T0;
		a0 *= r0;
		T0 = r3 >> 2;
		T0 += r3;
		T1 = a1 * T0;
		a0 += T1;
		T1 = a2 * T0;
		a1 = p1 + T1;
		T1 = a3 * T0;
		p2 += T1;
		T1 = a4 * T0;
		p3 += T1;
		T0 = r2 >> 2;
		T0 += r2;
		T1 = a2 * T0;
		a0 += T1;
		T1 = a3 * T0;
		a1 += T1;
		T1 = a4 * T0;
		a2 = p2 + T1;
		T0 = r1 >> 2;
		T0 += r1;
		T1 = a3 * T0;
		a0 += T1;
		T1 = a4 * T0;
		a1 += T1;
		T0 = r0 >> 2;
		T0 *= 0x0000000000000005ULL;
		T1 = a4 * T0;
		a0 += T1;
		a3 = p3;
		p4 = r0 & 0x0000000000000003ULL;
		a4 *= p4;
		T0 = a3 >> 32;
		a3 &= 0x00000000ffffffffULL;
		a4 += T0;
		T0 = a4 >> 2;
		a4 &= 0x0000000000000003ULL;
		T0 *= 0x0000000000000005ULL;
		a0 += T0;
		T0 = a0 >> 32;
		a0 &= 0x00000000ffffffffULL;
		a1 += T0;
		T0 = a1 >> 32;
		a1 &= 0x00000000ffffffffULL;
		a2 += T0;
		T0 = a2 >> 32;
		a2 &= 0x00000000ffffffffULL;
		a3 += T0;
		T0 = a3 >> 32;
		a3 &= 0x00000000ffffffffULL;
		a4 += T0;
		++blockPtr;
		--nBlocks;
	};
	T0 = a4 >> 2;
	a4 &= 0x0000000000000003ULL;
	T0 *= 0x0000000000000005ULL;
	a0 += T0;
	T0 = a0 + 0x0000000000000005ULL;
	T0 >>= 32;
	T0 += a1;
	T0 >>= 32;
	T0 += a2;
	T0 >>= 32;
	T0 += a3;
	T0 >>= 32;
	T0 += a4;
	T0 >>= 2;
	T0 = T0 * 0x0000000000000005ULL;
	a0 += T0;
	T0 = a0 >> 32;
	a0 &= 0x00000000ffffffffULL;
	a1 += T0;
	T0 = a1 >> 32;
	a1 &= 0x00000000ffffffffULL;
	a2 += T0;
	T0 = a2 >> 32;
	a2 &= 0x00000000ffffffffULL;
	a3 += T0;
	T0 = a3 >> 32;
	a3 &= 0x00000000ffffffffULL;
	a4 += T0;
	T1 = SArray[0];
	T0 = T1 & 0x00000000ffffffffULL;
	T1 >>= 32;
	a0 += T0;
	a1 += T1;
	T1 = SArray[1];
	T0 = T1 & 0x00000000ffffffffULL;
	T1 >>= 32;
	a2 += T0;
	a3 += T1;
	T0 = a0 >> 32;
	a0 &= 0x00000000ffffffffULL;
	a1 += T0;
	T0 = a1 >> 32;
	a1 &= 0x00000000ffffffffULL;
	a2 += T0;
	T0 = a2 >> 32;
	a2 &= 0x00000000ffffffffULL;
	a3 += T0;
	T0 = a3 >> 32;
	a3 &= 0x00000000ffffffffULL;
	a4 += T0;
	a1 <<= 32;
	a1 |= a0;
	AArray[0] = a1;
	a3 <<= 32;
	a3 |= a2;
	AArray[1] = a3;
	AArray[2] = a4;
}

void verse_poly1305_c_portable_partialmac(uint64_t LastBlock[2],
					  uint64_t AArray[3],
					  uint64_t RArray[2],
					  uint64_t SArray[2])
{
	auto uint64_t a0;
	auto uint64_t a1;
	auto uint64_t a2;
	auto uint64_t a3;
	auto uint64_t a4;
	auto uint64_t r0;
	auto uint64_t r1;
	auto uint64_t r2;
	auto uint64_t r3;
	auto uint64_t p1;
	auto uint64_t p2;
	auto uint64_t p3;
	auto uint64_t p4;
	auto uint64_t T0;
	auto uint64_t T1;
	a1 = AArray[0];
	a0 = a1 & 0x00000000ffffffffULL;
	a1 >>= 32;
	a3 = AArray[1];
	a2 = a3 & 0x00000000ffffffffULL;
	a3 >>= 32;
	a4 = AArray[2];
	r1 = RArray[0];
	r0 = r1 & 0x00000000ffffffffULL;
	r1 >>= 32;
	r3 = RArray[1];
	r2 = r3 & 0x00000000ffffffffULL;
	r3 >>= 32;
	T1 = verse_from_le64(LastBlock[0]);
	T0 = T1 & 0x00000000ffffffffULL;
	T1 >>= 32;
	a0 += T0;
	a1 += T1;
	T1 = verse_from_le64(LastBlock[1]);
	T0 = T1 & 0x00000000ffffffffULL;
	T1 >>= 32;
	a2 += T0;
	a3 += T1;
	p3 = a0 * r3;
	T0 = a1 * r2;
	p3 += T0;
	T0 = a2 * r1;
	p3 += T0;
	T0 = a3 * r0;
	p3 += T0;
	p2 = a0 * r2;
	T0 = a1 * r1;
	p2 += T0;
	T0 = a2 * r0;
	p2 += T0;
	p1 = a0 * r1;
	T0 = a1 * r0;
	p1 += T0;
	a0 *= r0;
	T0 = r3 >> 2;
	T0 += r3;
	T1 = a1 * T0;
	a0 += T1;
	T1 = a2 * T0;
	a1 = p1 + T1;
	T1 = a3 * T0;
	p2 += T1;
	T1 = a4 * T0;
	p3 += T1;
	T0 = r2 >> 2;
	T0 += r2;
	T1 = a2 * T0;
	a0 += T1;
	T1 = a3 * T0;
	a1 += T1;
	T1 = a4 * T0;
	a2 = p2 + T1;
	T0 = r1 >> 2;
	T0 += r1;
	T1 = a3 * T0;
	a0 += T1;
	T1 = a4 * T0;
	a1 += T1;
	T0 = r0 >> 2;
	T0 *= 0x0000000000000005ULL;
	T1 = a4 * T0;
	a0 += T1;
	a3 = p3;
	p4 = r0 & 0x0000000000000003ULL;
	a4 *= p4;
	T0 = a3 >> 32;
	a3 &= 0x00000000ffffffffULL;
	a4 += T0;
	T0 = a4 >> 2;
	a4 &= 0x0000000000000003ULL;
	T0 *= 0x0000000000000005ULL;
	a0 += T0;
	T0 = a0 >> 32;
	a0 &= 0x00000000ffffffffULL;
	a1 += T0;
	T0 = a1 >> 32;
	a1 &= 0x00000000ffffffffULL;
	a2 += T0;
	T0 = a2 >> 32;
	a2 &= 0x00000000ffffffffULL;
	a3 += T0;
	T0 = a3 >> 32;
	a3 &= 0x00000000ffffffffULL;
	a4 += T0;
	T0 = a4 >> 2;
	a4 &= 0x0000000000000003ULL;
	T0 *= 0x0000000000000005ULL;
	a0 += T0;
	T0 = a0 + 0x0000000000000005ULL;
	T0 >>= 32;
	T0 += a1;
	T0 >>= 32;
	T0 += a2;
	T0 >>= 32;
	T0 += a3;
	T0 >>= 32;
	T0 += a4;
	T0 >>= 2;
	T0 = T0 * 0x0000000000000005ULL;
	a0 += T0;
	T0 = a0 >> 32;
	a0 &= 0x00000000ffffffffULL;
	a1 += T0;
	T0 = a1 >> 32;
	a1 &= 0x00000000ffffffffULL;
	a2 += T0;
	T0 = a2 >> 32;
	a2 &= 0x00000000ffffffffULL;
	a3 += T0;
	T0 = a3 >> 32;
	a3 &= 0x00000000ffffffffULL;
	a4 += T0;
	T1 = SArray[0];
	T0 = T1 & 0x00000000ffffffffULL;
	T1 >>= 32;
	a0 += T0;
	a1 += T1;
	T1 = SArray[1];
	T0 = T1 & 0x00000000ffffffffULL;
	T1 >>= 32;
	a2 += T0;
	a3 += T1;
	T0 = a0 >> 32;
	a0 &= 0x00000000ffffffffULL;
	a1 += T0;
	T0 = a1 >> 32;
	a1 &= 0x00000000ffffffffULL;
	a2 += T0;
	T0 = a2 >> 32;
	a2 &= 0x00000000ffffffffULL;
	a3 += T0;
	T0 = a3 >> 32;
	a3 &= 0x00000000ffffffffULL;
	a4 += T0;
	a1 <<= 32;
	a1 |= a0;
	AArray[0] = a1;
	a3 <<= 32;
	a3 |= a2;
	AArray[1] = a3;
	AArray[2] = a4;
}

void verse_poly1305_c_portable_clamp(uint64_t(*blockPtr)[2], uint64_t nBlocks)
{
	auto uint64_t Temp;
	while (nBlocks > 0) {
		Temp = (*blockPtr)[0];
		Temp &= 0x0ffffffc0fffffffULL;
		(*blockPtr)[0] = Temp;
		Temp = (*blockPtr)[1];
		Temp &= 0x0ffffffc0ffffffcULL;
		(*blockPtr)[1] = Temp;
		++blockPtr;
		--nBlocks;
	};
}
