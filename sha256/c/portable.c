#include <stdint.h>
#include <verse.h>
#define XOR ^
void verse_sha256_c_portable(uint32_t(*bPtr)[16], uint64_t cTr, uint32_t v0[8])
{
	auto uint32_t v1;
	auto uint32_t v2;
	auto uint32_t v3;
	auto uint32_t v4;
	auto uint32_t v5;
	auto uint32_t v6;
	auto uint32_t v7;
	auto uint32_t v8;
	auto uint32_t v9;
	auto uint32_t v10;
	auto uint32_t v11;
	auto uint32_t v12;
	auto uint32_t v13;
	auto uint32_t v14;
	auto uint32_t v15;
	auto uint32_t v16;
	auto uint32_t v17;
	auto uint32_t v18;
	auto uint32_t v19;
	auto uint32_t v20;
	auto uint32_t v21;
	auto uint32_t v22;
	auto uint32_t v23;
	auto uint32_t v24;
	auto uint32_t v25;
	v17 = v0[0];
	v18 = v0[1];
	v19 = v0[2];
	v20 = v0[3];
	v21 = v0[4];
	v22 = v0[5];
	v23 = v0[6];
	v24 = v0[7];
	while (cTr > 0) {
		v1 = verse_from_be32((*bPtr)[0]);
		v2 = verse_from_be32((*bPtr)[1]);
		v3 = verse_from_be32((*bPtr)[2]);
		v4 = verse_from_be32((*bPtr)[3]);
		v5 = verse_from_be32((*bPtr)[4]);
		v6 = verse_from_be32((*bPtr)[5]);
		v7 = verse_from_be32((*bPtr)[6]);
		v8 = verse_from_be32((*bPtr)[7]);
		v9 = verse_from_be32((*bPtr)[8]);
		v10 = verse_from_be32((*bPtr)[9]);
		v11 = verse_from_be32((*bPtr)[10]);
		v12 = verse_from_be32((*bPtr)[11]);
		v13 = verse_from_be32((*bPtr)[12]);
		v14 = verse_from_be32((*bPtr)[13]);
		v15 = verse_from_be32((*bPtr)[14]);
		v16 = verse_from_be32((*bPtr)[15]);
		v25 =
		    v24 + 0x428a2f98UL + v1 + (v23 XOR v21 & (v22 XOR v23)) +
		    (verse_rotR32(v21, 25) XOR verse_rotR32(v21, 11)
		     XOR verse_rotR32(v21, 6));
		v20 += v25;
		v24 = v25 + (verse_rotR32(v17, 22) XOR verse_rotR32(v17, 13)
			     XOR verse_rotR32(v17,
					      2)) +
		    (v17 & v18 | v19 & (v18 | v17));
		v1 +=
		    v10 +
		    (verse_rotR32(v2, 18) XOR verse_rotR32(v2, 7) XOR v2 >> 3) +
		    (verse_rotR32(v15, 19) XOR verse_rotR32(v15, 17) XOR v15 >>
		     10);
		v25 =
		    v23 + 0x71374491UL + v2 + (v22 XOR v20 & (v21 XOR v22)) +
		    (verse_rotR32(v20, 25) XOR verse_rotR32(v20, 11)
		     XOR verse_rotR32(v20, 6));
		v19 += v25;
		v23 = v25 + (verse_rotR32(v24, 22) XOR verse_rotR32(v24, 13)
			     XOR verse_rotR32(v24,
					      2)) +
		    (v24 & v17 | v18 & (v17 | v24));
		v2 +=
		    v11 +
		    (verse_rotR32(v3, 18) XOR verse_rotR32(v3, 7) XOR v3 >> 3) +
		    (verse_rotR32(v16, 19) XOR verse_rotR32(v16, 17) XOR v16 >>
		     10);
		v25 =
		    v22 + 0xb5c0fbcfUL + v3 + (v21 XOR v19 & (v20 XOR v21)) +
		    (verse_rotR32(v19, 25) XOR verse_rotR32(v19, 11)
		     XOR verse_rotR32(v19, 6));
		v18 += v25;
		v22 = v25 + (verse_rotR32(v23, 22) XOR verse_rotR32(v23, 13)
			     XOR verse_rotR32(v23,
					      2)) +
		    (v23 & v24 | v17 & (v24 | v23));
		v3 +=
		    v12 +
		    (verse_rotR32(v4, 18) XOR verse_rotR32(v4, 7) XOR v4 >> 3) +
		    (verse_rotR32(v1, 19) XOR verse_rotR32(v1, 17) XOR v1 >>
		     10);
		v25 =
		    v21 + 0xe9b5dba5UL + v4 + (v20 XOR v18 & (v19 XOR v20)) +
		    (verse_rotR32(v18, 25) XOR verse_rotR32(v18, 11)
		     XOR verse_rotR32(v18, 6));
		v17 += v25;
		v21 = v25 + (verse_rotR32(v22, 22) XOR verse_rotR32(v22, 13)
			     XOR verse_rotR32(v22,
					      2)) +
		    (v22 & v23 | v24 & (v23 | v22));
		v4 +=
		    v13 +
		    (verse_rotR32(v5, 18) XOR verse_rotR32(v5, 7) XOR v5 >> 3) +
		    (verse_rotR32(v2, 19) XOR verse_rotR32(v2, 17) XOR v2 >>
		     10);
		v25 =
		    v20 + 0x3956c25bUL + v5 + (v19 XOR v17 & (v18 XOR v19)) +
		    (verse_rotR32(v17, 25) XOR verse_rotR32(v17, 11)
		     XOR verse_rotR32(v17, 6));
		v24 += v25;
		v20 = v25 + (verse_rotR32(v21, 22) XOR verse_rotR32(v21, 13)
			     XOR verse_rotR32(v21,
					      2)) +
		    (v21 & v22 | v23 & (v22 | v21));
		v5 +=
		    v14 +
		    (verse_rotR32(v6, 18) XOR verse_rotR32(v6, 7) XOR v6 >> 3) +
		    (verse_rotR32(v3, 19) XOR verse_rotR32(v3, 17) XOR v3 >>
		     10);
		v25 =
		    v19 + 0x59f111f1UL + v6 + (v18 XOR v24 & (v17 XOR v18)) +
		    (verse_rotR32(v24, 25) XOR verse_rotR32(v24, 11)
		     XOR verse_rotR32(v24, 6));
		v23 += v25;
		v19 = v25 + (verse_rotR32(v20, 22) XOR verse_rotR32(v20, 13)
			     XOR verse_rotR32(v20,
					      2)) +
		    (v20 & v21 | v22 & (v21 | v20));
		v6 +=
		    v15 +
		    (verse_rotR32(v7, 18) XOR verse_rotR32(v7, 7) XOR v7 >> 3) +
		    (verse_rotR32(v4, 19) XOR verse_rotR32(v4, 17) XOR v4 >>
		     10);
		v25 =
		    v18 + 0x923f82a4UL + v7 + (v17 XOR v23 & (v24 XOR v17)) +
		    (verse_rotR32(v23, 25) XOR verse_rotR32(v23, 11)
		     XOR verse_rotR32(v23, 6));
		v22 += v25;
		v18 = v25 + (verse_rotR32(v19, 22) XOR verse_rotR32(v19, 13)
			     XOR verse_rotR32(v19,
					      2)) +
		    (v19 & v20 | v21 & (v20 | v19));
		v7 +=
		    v16 +
		    (verse_rotR32(v8, 18) XOR verse_rotR32(v8, 7) XOR v8 >> 3) +
		    (verse_rotR32(v5, 19) XOR verse_rotR32(v5, 17) XOR v5 >>
		     10);
		v25 =
		    v17 + 0xab1c5ed5UL + v8 + (v24 XOR v22 & (v23 XOR v24)) +
		    (verse_rotR32(v22, 25) XOR verse_rotR32(v22, 11)
		     XOR verse_rotR32(v22, 6));
		v21 += v25;
		v17 = v25 + (verse_rotR32(v18, 22) XOR verse_rotR32(v18, 13)
			     XOR verse_rotR32(v18,
					      2)) +
		    (v18 & v19 | v20 & (v19 | v18));
		v8 +=
		    v1 +
		    (verse_rotR32(v9, 18) XOR verse_rotR32(v9, 7) XOR v9 >> 3) +
		    (verse_rotR32(v6, 19) XOR verse_rotR32(v6, 17) XOR v6 >>
		     10);
		v25 =
		    v24 + 0xd807aa98UL + v9 + (v23 XOR v21 & (v22 XOR v23)) +
		    (verse_rotR32(v21, 25) XOR verse_rotR32(v21, 11)
		     XOR verse_rotR32(v21, 6));
		v20 += v25;
		v24 = v25 + (verse_rotR32(v17, 22) XOR verse_rotR32(v17, 13)
			     XOR verse_rotR32(v17,
					      2)) +
		    (v17 & v18 | v19 & (v18 | v17));
		v9 +=
		    v2 +
		    (verse_rotR32(v10, 18) XOR verse_rotR32(v10, 7) XOR v10 >>
		     3) + (verse_rotR32(v7, 19) XOR verse_rotR32(v7,
								 17) XOR v7 >>
			   10);
		v25 =
		    v23 + 0x12835b01UL + v10 + (v22 XOR v20 & (v21 XOR v22)) +
		    (verse_rotR32(v20, 25) XOR verse_rotR32(v20, 11)
		     XOR verse_rotR32(v20, 6));
		v19 += v25;
		v23 = v25 + (verse_rotR32(v24, 22) XOR verse_rotR32(v24, 13)
			     XOR verse_rotR32(v24,
					      2)) +
		    (v24 & v17 | v18 & (v17 | v24));
		v10 +=
		    v3 +
		    (verse_rotR32(v11, 18) XOR verse_rotR32(v11, 7) XOR v11 >>
		     3) + (verse_rotR32(v8, 19) XOR verse_rotR32(v8,
								 17) XOR v8 >>
			   10);
		v25 =
		    v22 + 0x243185beUL + v11 + (v21 XOR v19 & (v20 XOR v21)) +
		    (verse_rotR32(v19, 25) XOR verse_rotR32(v19, 11)
		     XOR verse_rotR32(v19, 6));
		v18 += v25;
		v22 = v25 + (verse_rotR32(v23, 22) XOR verse_rotR32(v23, 13)
			     XOR verse_rotR32(v23,
					      2)) +
		    (v23 & v24 | v17 & (v24 | v23));
		v11 +=
		    v4 +
		    (verse_rotR32(v12, 18) XOR verse_rotR32(v12, 7) XOR v12 >>
		     3) + (verse_rotR32(v9, 19) XOR verse_rotR32(v9,
								 17) XOR v9 >>
			   10);
		v25 =
		    v21 + 0x550c7dc3UL + v12 + (v20 XOR v18 & (v19 XOR v20)) +
		    (verse_rotR32(v18, 25) XOR verse_rotR32(v18, 11)
		     XOR verse_rotR32(v18, 6));
		v17 += v25;
		v21 = v25 + (verse_rotR32(v22, 22) XOR verse_rotR32(v22, 13)
			     XOR verse_rotR32(v22,
					      2)) +
		    (v22 & v23 | v24 & (v23 | v22));
		v12 +=
		    v5 +
		    (verse_rotR32(v13, 18) XOR verse_rotR32(v13, 7) XOR v13 >>
		     3) + (verse_rotR32(v10, 19) XOR verse_rotR32(v10,
								  17) XOR v10 >>
			   10);
		v25 =
		    v20 + 0x72be5d74UL + v13 + (v19 XOR v17 & (v18 XOR v19)) +
		    (verse_rotR32(v17, 25) XOR verse_rotR32(v17, 11)
		     XOR verse_rotR32(v17, 6));
		v24 += v25;
		v20 = v25 + (verse_rotR32(v21, 22) XOR verse_rotR32(v21, 13)
			     XOR verse_rotR32(v21,
					      2)) +
		    (v21 & v22 | v23 & (v22 | v21));
		v13 +=
		    v6 +
		    (verse_rotR32(v14, 18) XOR verse_rotR32(v14, 7) XOR v14 >>
		     3) + (verse_rotR32(v11, 19) XOR verse_rotR32(v11,
								  17) XOR v11 >>
			   10);
		v25 =
		    v19 + 0x80deb1feUL + v14 + (v18 XOR v24 & (v17 XOR v18)) +
		    (verse_rotR32(v24, 25) XOR verse_rotR32(v24, 11)
		     XOR verse_rotR32(v24, 6));
		v23 += v25;
		v19 = v25 + (verse_rotR32(v20, 22) XOR verse_rotR32(v20, 13)
			     XOR verse_rotR32(v20,
					      2)) +
		    (v20 & v21 | v22 & (v21 | v20));
		v14 +=
		    v7 +
		    (verse_rotR32(v15, 18) XOR verse_rotR32(v15, 7) XOR v15 >>
		     3) + (verse_rotR32(v12, 19) XOR verse_rotR32(v12,
								  17) XOR v12 >>
			   10);
		v25 =
		    v18 + 0x9bdc06a7UL + v15 + (v17 XOR v23 & (v24 XOR v17)) +
		    (verse_rotR32(v23, 25) XOR verse_rotR32(v23, 11)
		     XOR verse_rotR32(v23, 6));
		v22 += v25;
		v18 = v25 + (verse_rotR32(v19, 22) XOR verse_rotR32(v19, 13)
			     XOR verse_rotR32(v19,
					      2)) +
		    (v19 & v20 | v21 & (v20 | v19));
		v15 +=
		    v8 +
		    (verse_rotR32(v16, 18) XOR verse_rotR32(v16, 7) XOR v16 >>
		     3) + (verse_rotR32(v13, 19) XOR verse_rotR32(v13,
								  17) XOR v13 >>
			   10);
		v25 =
		    v17 + 0xc19bf174UL + v16 + (v24 XOR v22 & (v23 XOR v24)) +
		    (verse_rotR32(v22, 25) XOR verse_rotR32(v22, 11)
		     XOR verse_rotR32(v22, 6));
		v21 += v25;
		v17 = v25 + (verse_rotR32(v18, 22) XOR verse_rotR32(v18, 13)
			     XOR verse_rotR32(v18,
					      2)) +
		    (v18 & v19 | v20 & (v19 | v18));
		v16 +=
		    v9 +
		    (verse_rotR32(v1, 18) XOR verse_rotR32(v1, 7) XOR v1 >> 3) +
		    (verse_rotR32(v14, 19) XOR verse_rotR32(v14, 17) XOR v14 >>
		     10);
		v25 =
		    v24 + 0xe49b69c1UL + v1 + (v23 XOR v21 & (v22 XOR v23)) +
		    (verse_rotR32(v21, 25) XOR verse_rotR32(v21, 11)
		     XOR verse_rotR32(v21, 6));
		v20 += v25;
		v24 = v25 + (verse_rotR32(v17, 22) XOR verse_rotR32(v17, 13)
			     XOR verse_rotR32(v17,
					      2)) +
		    (v17 & v18 | v19 & (v18 | v17));
		v1 +=
		    v10 +
		    (verse_rotR32(v2, 18) XOR verse_rotR32(v2, 7) XOR v2 >> 3) +
		    (verse_rotR32(v15, 19) XOR verse_rotR32(v15, 17) XOR v15 >>
		     10);
		v25 =
		    v23 + 0xefbe4786UL + v2 + (v22 XOR v20 & (v21 XOR v22)) +
		    (verse_rotR32(v20, 25) XOR verse_rotR32(v20, 11)
		     XOR verse_rotR32(v20, 6));
		v19 += v25;
		v23 = v25 + (verse_rotR32(v24, 22) XOR verse_rotR32(v24, 13)
			     XOR verse_rotR32(v24,
					      2)) +
		    (v24 & v17 | v18 & (v17 | v24));
		v2 +=
		    v11 +
		    (verse_rotR32(v3, 18) XOR verse_rotR32(v3, 7) XOR v3 >> 3) +
		    (verse_rotR32(v16, 19) XOR verse_rotR32(v16, 17) XOR v16 >>
		     10);
		v25 =
		    v22 + 0x0fc19dc6UL + v3 + (v21 XOR v19 & (v20 XOR v21)) +
		    (verse_rotR32(v19, 25) XOR verse_rotR32(v19, 11)
		     XOR verse_rotR32(v19, 6));
		v18 += v25;
		v22 = v25 + (verse_rotR32(v23, 22) XOR verse_rotR32(v23, 13)
			     XOR verse_rotR32(v23,
					      2)) +
		    (v23 & v24 | v17 & (v24 | v23));
		v3 +=
		    v12 +
		    (verse_rotR32(v4, 18) XOR verse_rotR32(v4, 7) XOR v4 >> 3) +
		    (verse_rotR32(v1, 19) XOR verse_rotR32(v1, 17) XOR v1 >>
		     10);
		v25 =
		    v21 + 0x240ca1ccUL + v4 + (v20 XOR v18 & (v19 XOR v20)) +
		    (verse_rotR32(v18, 25) XOR verse_rotR32(v18, 11)
		     XOR verse_rotR32(v18, 6));
		v17 += v25;
		v21 = v25 + (verse_rotR32(v22, 22) XOR verse_rotR32(v22, 13)
			     XOR verse_rotR32(v22,
					      2)) +
		    (v22 & v23 | v24 & (v23 | v22));
		v4 +=
		    v13 +
		    (verse_rotR32(v5, 18) XOR verse_rotR32(v5, 7) XOR v5 >> 3) +
		    (verse_rotR32(v2, 19) XOR verse_rotR32(v2, 17) XOR v2 >>
		     10);
		v25 =
		    v20 + 0x2de92c6fUL + v5 + (v19 XOR v17 & (v18 XOR v19)) +
		    (verse_rotR32(v17, 25) XOR verse_rotR32(v17, 11)
		     XOR verse_rotR32(v17, 6));
		v24 += v25;
		v20 = v25 + (verse_rotR32(v21, 22) XOR verse_rotR32(v21, 13)
			     XOR verse_rotR32(v21,
					      2)) +
		    (v21 & v22 | v23 & (v22 | v21));
		v5 +=
		    v14 +
		    (verse_rotR32(v6, 18) XOR verse_rotR32(v6, 7) XOR v6 >> 3) +
		    (verse_rotR32(v3, 19) XOR verse_rotR32(v3, 17) XOR v3 >>
		     10);
		v25 =
		    v19 + 0x4a7484aaUL + v6 + (v18 XOR v24 & (v17 XOR v18)) +
		    (verse_rotR32(v24, 25) XOR verse_rotR32(v24, 11)
		     XOR verse_rotR32(v24, 6));
		v23 += v25;
		v19 = v25 + (verse_rotR32(v20, 22) XOR verse_rotR32(v20, 13)
			     XOR verse_rotR32(v20,
					      2)) +
		    (v20 & v21 | v22 & (v21 | v20));
		v6 +=
		    v15 +
		    (verse_rotR32(v7, 18) XOR verse_rotR32(v7, 7) XOR v7 >> 3) +
		    (verse_rotR32(v4, 19) XOR verse_rotR32(v4, 17) XOR v4 >>
		     10);
		v25 =
		    v18 + 0x5cb0a9dcUL + v7 + (v17 XOR v23 & (v24 XOR v17)) +
		    (verse_rotR32(v23, 25) XOR verse_rotR32(v23, 11)
		     XOR verse_rotR32(v23, 6));
		v22 += v25;
		v18 = v25 + (verse_rotR32(v19, 22) XOR verse_rotR32(v19, 13)
			     XOR verse_rotR32(v19,
					      2)) +
		    (v19 & v20 | v21 & (v20 | v19));
		v7 +=
		    v16 +
		    (verse_rotR32(v8, 18) XOR verse_rotR32(v8, 7) XOR v8 >> 3) +
		    (verse_rotR32(v5, 19) XOR verse_rotR32(v5, 17) XOR v5 >>
		     10);
		v25 =
		    v17 + 0x76f988daUL + v8 + (v24 XOR v22 & (v23 XOR v24)) +
		    (verse_rotR32(v22, 25) XOR verse_rotR32(v22, 11)
		     XOR verse_rotR32(v22, 6));
		v21 += v25;
		v17 = v25 + (verse_rotR32(v18, 22) XOR verse_rotR32(v18, 13)
			     XOR verse_rotR32(v18,
					      2)) +
		    (v18 & v19 | v20 & (v19 | v18));
		v8 +=
		    v1 +
		    (verse_rotR32(v9, 18) XOR verse_rotR32(v9, 7) XOR v9 >> 3) +
		    (verse_rotR32(v6, 19) XOR verse_rotR32(v6, 17) XOR v6 >>
		     10);
		v25 =
		    v24 + 0x983e5152UL + v9 + (v23 XOR v21 & (v22 XOR v23)) +
		    (verse_rotR32(v21, 25) XOR verse_rotR32(v21, 11)
		     XOR verse_rotR32(v21, 6));
		v20 += v25;
		v24 = v25 + (verse_rotR32(v17, 22) XOR verse_rotR32(v17, 13)
			     XOR verse_rotR32(v17,
					      2)) +
		    (v17 & v18 | v19 & (v18 | v17));
		v9 +=
		    v2 +
		    (verse_rotR32(v10, 18) XOR verse_rotR32(v10, 7) XOR v10 >>
		     3) + (verse_rotR32(v7, 19) XOR verse_rotR32(v7,
								 17) XOR v7 >>
			   10);
		v25 =
		    v23 + 0xa831c66dUL + v10 + (v22 XOR v20 & (v21 XOR v22)) +
		    (verse_rotR32(v20, 25) XOR verse_rotR32(v20, 11)
		     XOR verse_rotR32(v20, 6));
		v19 += v25;
		v23 = v25 + (verse_rotR32(v24, 22) XOR verse_rotR32(v24, 13)
			     XOR verse_rotR32(v24,
					      2)) +
		    (v24 & v17 | v18 & (v17 | v24));
		v10 +=
		    v3 +
		    (verse_rotR32(v11, 18) XOR verse_rotR32(v11, 7) XOR v11 >>
		     3) + (verse_rotR32(v8, 19) XOR verse_rotR32(v8,
								 17) XOR v8 >>
			   10);
		v25 =
		    v22 + 0xb00327c8UL + v11 + (v21 XOR v19 & (v20 XOR v21)) +
		    (verse_rotR32(v19, 25) XOR verse_rotR32(v19, 11)
		     XOR verse_rotR32(v19, 6));
		v18 += v25;
		v22 = v25 + (verse_rotR32(v23, 22) XOR verse_rotR32(v23, 13)
			     XOR verse_rotR32(v23,
					      2)) +
		    (v23 & v24 | v17 & (v24 | v23));
		v11 +=
		    v4 +
		    (verse_rotR32(v12, 18) XOR verse_rotR32(v12, 7) XOR v12 >>
		     3) + (verse_rotR32(v9, 19) XOR verse_rotR32(v9,
								 17) XOR v9 >>
			   10);
		v25 =
		    v21 + 0xbf597fc7UL + v12 + (v20 XOR v18 & (v19 XOR v20)) +
		    (verse_rotR32(v18, 25) XOR verse_rotR32(v18, 11)
		     XOR verse_rotR32(v18, 6));
		v17 += v25;
		v21 = v25 + (verse_rotR32(v22, 22) XOR verse_rotR32(v22, 13)
			     XOR verse_rotR32(v22,
					      2)) +
		    (v22 & v23 | v24 & (v23 | v22));
		v12 +=
		    v5 +
		    (verse_rotR32(v13, 18) XOR verse_rotR32(v13, 7) XOR v13 >>
		     3) + (verse_rotR32(v10, 19) XOR verse_rotR32(v10,
								  17) XOR v10 >>
			   10);
		v25 =
		    v20 + 0xc6e00bf3UL + v13 + (v19 XOR v17 & (v18 XOR v19)) +
		    (verse_rotR32(v17, 25) XOR verse_rotR32(v17, 11)
		     XOR verse_rotR32(v17, 6));
		v24 += v25;
		v20 = v25 + (verse_rotR32(v21, 22) XOR verse_rotR32(v21, 13)
			     XOR verse_rotR32(v21,
					      2)) +
		    (v21 & v22 | v23 & (v22 | v21));
		v13 +=
		    v6 +
		    (verse_rotR32(v14, 18) XOR verse_rotR32(v14, 7) XOR v14 >>
		     3) + (verse_rotR32(v11, 19) XOR verse_rotR32(v11,
								  17) XOR v11 >>
			   10);
		v25 =
		    v19 + 0xd5a79147UL + v14 + (v18 XOR v24 & (v17 XOR v18)) +
		    (verse_rotR32(v24, 25) XOR verse_rotR32(v24, 11)
		     XOR verse_rotR32(v24, 6));
		v23 += v25;
		v19 = v25 + (verse_rotR32(v20, 22) XOR verse_rotR32(v20, 13)
			     XOR verse_rotR32(v20,
					      2)) +
		    (v20 & v21 | v22 & (v21 | v20));
		v14 +=
		    v7 +
		    (verse_rotR32(v15, 18) XOR verse_rotR32(v15, 7) XOR v15 >>
		     3) + (verse_rotR32(v12, 19) XOR verse_rotR32(v12,
								  17) XOR v12 >>
			   10);
		v25 =
		    v18 + 0x06ca6351UL + v15 + (v17 XOR v23 & (v24 XOR v17)) +
		    (verse_rotR32(v23, 25) XOR verse_rotR32(v23, 11)
		     XOR verse_rotR32(v23, 6));
		v22 += v25;
		v18 = v25 + (verse_rotR32(v19, 22) XOR verse_rotR32(v19, 13)
			     XOR verse_rotR32(v19,
					      2)) +
		    (v19 & v20 | v21 & (v20 | v19));
		v15 +=
		    v8 +
		    (verse_rotR32(v16, 18) XOR verse_rotR32(v16, 7) XOR v16 >>
		     3) + (verse_rotR32(v13, 19) XOR verse_rotR32(v13,
								  17) XOR v13 >>
			   10);
		v25 =
		    v17 + 0x14292967UL + v16 + (v24 XOR v22 & (v23 XOR v24)) +
		    (verse_rotR32(v22, 25) XOR verse_rotR32(v22, 11)
		     XOR verse_rotR32(v22, 6));
		v21 += v25;
		v17 = v25 + (verse_rotR32(v18, 22) XOR verse_rotR32(v18, 13)
			     XOR verse_rotR32(v18,
					      2)) +
		    (v18 & v19 | v20 & (v19 | v18));
		v16 +=
		    v9 +
		    (verse_rotR32(v1, 18) XOR verse_rotR32(v1, 7) XOR v1 >> 3) +
		    (verse_rotR32(v14, 19) XOR verse_rotR32(v14, 17) XOR v14 >>
		     10);
		v25 =
		    v24 + 0x27b70a85UL + v1 + (v23 XOR v21 & (v22 XOR v23)) +
		    (verse_rotR32(v21, 25) XOR verse_rotR32(v21, 11)
		     XOR verse_rotR32(v21, 6));
		v20 += v25;
		v24 = v25 + (verse_rotR32(v17, 22) XOR verse_rotR32(v17, 13)
			     XOR verse_rotR32(v17,
					      2)) +
		    (v17 & v18 | v19 & (v18 | v17));
		v1 +=
		    v10 +
		    (verse_rotR32(v2, 18) XOR verse_rotR32(v2, 7) XOR v2 >> 3) +
		    (verse_rotR32(v15, 19) XOR verse_rotR32(v15, 17) XOR v15 >>
		     10);
		v25 =
		    v23 + 0x2e1b2138UL + v2 + (v22 XOR v20 & (v21 XOR v22)) +
		    (verse_rotR32(v20, 25) XOR verse_rotR32(v20, 11)
		     XOR verse_rotR32(v20, 6));
		v19 += v25;
		v23 = v25 + (verse_rotR32(v24, 22) XOR verse_rotR32(v24, 13)
			     XOR verse_rotR32(v24,
					      2)) +
		    (v24 & v17 | v18 & (v17 | v24));
		v2 +=
		    v11 +
		    (verse_rotR32(v3, 18) XOR verse_rotR32(v3, 7) XOR v3 >> 3) +
		    (verse_rotR32(v16, 19) XOR verse_rotR32(v16, 17) XOR v16 >>
		     10);
		v25 =
		    v22 + 0x4d2c6dfcUL + v3 + (v21 XOR v19 & (v20 XOR v21)) +
		    (verse_rotR32(v19, 25) XOR verse_rotR32(v19, 11)
		     XOR verse_rotR32(v19, 6));
		v18 += v25;
		v22 = v25 + (verse_rotR32(v23, 22) XOR verse_rotR32(v23, 13)
			     XOR verse_rotR32(v23,
					      2)) +
		    (v23 & v24 | v17 & (v24 | v23));
		v3 +=
		    v12 +
		    (verse_rotR32(v4, 18) XOR verse_rotR32(v4, 7) XOR v4 >> 3) +
		    (verse_rotR32(v1, 19) XOR verse_rotR32(v1, 17) XOR v1 >>
		     10);
		v25 =
		    v21 + 0x53380d13UL + v4 + (v20 XOR v18 & (v19 XOR v20)) +
		    (verse_rotR32(v18, 25) XOR verse_rotR32(v18, 11)
		     XOR verse_rotR32(v18, 6));
		v17 += v25;
		v21 = v25 + (verse_rotR32(v22, 22) XOR verse_rotR32(v22, 13)
			     XOR verse_rotR32(v22,
					      2)) +
		    (v22 & v23 | v24 & (v23 | v22));
		v4 +=
		    v13 +
		    (verse_rotR32(v5, 18) XOR verse_rotR32(v5, 7) XOR v5 >> 3) +
		    (verse_rotR32(v2, 19) XOR verse_rotR32(v2, 17) XOR v2 >>
		     10);
		v25 =
		    v20 + 0x650a7354UL + v5 + (v19 XOR v17 & (v18 XOR v19)) +
		    (verse_rotR32(v17, 25) XOR verse_rotR32(v17, 11)
		     XOR verse_rotR32(v17, 6));
		v24 += v25;
		v20 = v25 + (verse_rotR32(v21, 22) XOR verse_rotR32(v21, 13)
			     XOR verse_rotR32(v21,
					      2)) +
		    (v21 & v22 | v23 & (v22 | v21));
		v5 +=
		    v14 +
		    (verse_rotR32(v6, 18) XOR verse_rotR32(v6, 7) XOR v6 >> 3) +
		    (verse_rotR32(v3, 19) XOR verse_rotR32(v3, 17) XOR v3 >>
		     10);
		v25 =
		    v19 + 0x766a0abbUL + v6 + (v18 XOR v24 & (v17 XOR v18)) +
		    (verse_rotR32(v24, 25) XOR verse_rotR32(v24, 11)
		     XOR verse_rotR32(v24, 6));
		v23 += v25;
		v19 = v25 + (verse_rotR32(v20, 22) XOR verse_rotR32(v20, 13)
			     XOR verse_rotR32(v20,
					      2)) +
		    (v20 & v21 | v22 & (v21 | v20));
		v6 +=
		    v15 +
		    (verse_rotR32(v7, 18) XOR verse_rotR32(v7, 7) XOR v7 >> 3) +
		    (verse_rotR32(v4, 19) XOR verse_rotR32(v4, 17) XOR v4 >>
		     10);
		v25 =
		    v18 + 0x81c2c92eUL + v7 + (v17 XOR v23 & (v24 XOR v17)) +
		    (verse_rotR32(v23, 25) XOR verse_rotR32(v23, 11)
		     XOR verse_rotR32(v23, 6));
		v22 += v25;
		v18 = v25 + (verse_rotR32(v19, 22) XOR verse_rotR32(v19, 13)
			     XOR verse_rotR32(v19,
					      2)) +
		    (v19 & v20 | v21 & (v20 | v19));
		v7 +=
		    v16 +
		    (verse_rotR32(v8, 18) XOR verse_rotR32(v8, 7) XOR v8 >> 3) +
		    (verse_rotR32(v5, 19) XOR verse_rotR32(v5, 17) XOR v5 >>
		     10);
		v25 =
		    v17 + 0x92722c85UL + v8 + (v24 XOR v22 & (v23 XOR v24)) +
		    (verse_rotR32(v22, 25) XOR verse_rotR32(v22, 11)
		     XOR verse_rotR32(v22, 6));
		v21 += v25;
		v17 = v25 + (verse_rotR32(v18, 22) XOR verse_rotR32(v18, 13)
			     XOR verse_rotR32(v18,
					      2)) +
		    (v18 & v19 | v20 & (v19 | v18));
		v8 +=
		    v1 +
		    (verse_rotR32(v9, 18) XOR verse_rotR32(v9, 7) XOR v9 >> 3) +
		    (verse_rotR32(v6, 19) XOR verse_rotR32(v6, 17) XOR v6 >>
		     10);
		v25 =
		    v24 + 0xa2bfe8a1UL + v9 + (v23 XOR v21 & (v22 XOR v23)) +
		    (verse_rotR32(v21, 25) XOR verse_rotR32(v21, 11)
		     XOR verse_rotR32(v21, 6));
		v20 += v25;
		v24 = v25 + (verse_rotR32(v17, 22) XOR verse_rotR32(v17, 13)
			     XOR verse_rotR32(v17,
					      2)) +
		    (v17 & v18 | v19 & (v18 | v17));
		v9 +=
		    v2 +
		    (verse_rotR32(v10, 18) XOR verse_rotR32(v10, 7) XOR v10 >>
		     3) + (verse_rotR32(v7, 19) XOR verse_rotR32(v7,
								 17) XOR v7 >>
			   10);
		v25 =
		    v23 + 0xa81a664bUL + v10 + (v22 XOR v20 & (v21 XOR v22)) +
		    (verse_rotR32(v20, 25) XOR verse_rotR32(v20, 11)
		     XOR verse_rotR32(v20, 6));
		v19 += v25;
		v23 = v25 + (verse_rotR32(v24, 22) XOR verse_rotR32(v24, 13)
			     XOR verse_rotR32(v24,
					      2)) +
		    (v24 & v17 | v18 & (v17 | v24));
		v10 +=
		    v3 +
		    (verse_rotR32(v11, 18) XOR verse_rotR32(v11, 7) XOR v11 >>
		     3) + (verse_rotR32(v8, 19) XOR verse_rotR32(v8,
								 17) XOR v8 >>
			   10);
		v25 =
		    v22 + 0xc24b8b70UL + v11 + (v21 XOR v19 & (v20 XOR v21)) +
		    (verse_rotR32(v19, 25) XOR verse_rotR32(v19, 11)
		     XOR verse_rotR32(v19, 6));
		v18 += v25;
		v22 = v25 + (verse_rotR32(v23, 22) XOR verse_rotR32(v23, 13)
			     XOR verse_rotR32(v23,
					      2)) +
		    (v23 & v24 | v17 & (v24 | v23));
		v11 +=
		    v4 +
		    (verse_rotR32(v12, 18) XOR verse_rotR32(v12, 7) XOR v12 >>
		     3) + (verse_rotR32(v9, 19) XOR verse_rotR32(v9,
								 17) XOR v9 >>
			   10);
		v25 =
		    v21 + 0xc76c51a3UL + v12 + (v20 XOR v18 & (v19 XOR v20)) +
		    (verse_rotR32(v18, 25) XOR verse_rotR32(v18, 11)
		     XOR verse_rotR32(v18, 6));
		v17 += v25;
		v21 = v25 + (verse_rotR32(v22, 22) XOR verse_rotR32(v22, 13)
			     XOR verse_rotR32(v22,
					      2)) +
		    (v22 & v23 | v24 & (v23 | v22));
		v12 +=
		    v5 +
		    (verse_rotR32(v13, 18) XOR verse_rotR32(v13, 7) XOR v13 >>
		     3) + (verse_rotR32(v10, 19) XOR verse_rotR32(v10,
								  17) XOR v10 >>
			   10);
		v25 =
		    v20 + 0xd192e819UL + v13 + (v19 XOR v17 & (v18 XOR v19)) +
		    (verse_rotR32(v17, 25) XOR verse_rotR32(v17, 11)
		     XOR verse_rotR32(v17, 6));
		v24 += v25;
		v20 = v25 + (verse_rotR32(v21, 22) XOR verse_rotR32(v21, 13)
			     XOR verse_rotR32(v21,
					      2)) +
		    (v21 & v22 | v23 & (v22 | v21));
		v13 +=
		    v6 +
		    (verse_rotR32(v14, 18) XOR verse_rotR32(v14, 7) XOR v14 >>
		     3) + (verse_rotR32(v11, 19) XOR verse_rotR32(v11,
								  17) XOR v11 >>
			   10);
		v25 =
		    v19 + 0xd6990624UL + v14 + (v18 XOR v24 & (v17 XOR v18)) +
		    (verse_rotR32(v24, 25) XOR verse_rotR32(v24, 11)
		     XOR verse_rotR32(v24, 6));
		v23 += v25;
		v19 = v25 + (verse_rotR32(v20, 22) XOR verse_rotR32(v20, 13)
			     XOR verse_rotR32(v20,
					      2)) +
		    (v20 & v21 | v22 & (v21 | v20));
		v14 +=
		    v7 +
		    (verse_rotR32(v15, 18) XOR verse_rotR32(v15, 7) XOR v15 >>
		     3) + (verse_rotR32(v12, 19) XOR verse_rotR32(v12,
								  17) XOR v12 >>
			   10);
		v25 =
		    v18 + 0xf40e3585UL + v15 + (v17 XOR v23 & (v24 XOR v17)) +
		    (verse_rotR32(v23, 25) XOR verse_rotR32(v23, 11)
		     XOR verse_rotR32(v23, 6));
		v22 += v25;
		v18 = v25 + (verse_rotR32(v19, 22) XOR verse_rotR32(v19, 13)
			     XOR verse_rotR32(v19,
					      2)) +
		    (v19 & v20 | v21 & (v20 | v19));
		v15 +=
		    v8 +
		    (verse_rotR32(v16, 18) XOR verse_rotR32(v16, 7) XOR v16 >>
		     3) + (verse_rotR32(v13, 19) XOR verse_rotR32(v13,
								  17) XOR v13 >>
			   10);
		v25 =
		    v17 + 0x106aa070UL + v16 + (v24 XOR v22 & (v23 XOR v24)) +
		    (verse_rotR32(v22, 25) XOR verse_rotR32(v22, 11)
		     XOR verse_rotR32(v22, 6));
		v21 += v25;
		v17 = v25 + (verse_rotR32(v18, 22) XOR verse_rotR32(v18, 13)
			     XOR verse_rotR32(v18,
					      2)) +
		    (v18 & v19 | v20 & (v19 | v18));
		v16 +=
		    v9 +
		    (verse_rotR32(v1, 18) XOR verse_rotR32(v1, 7) XOR v1 >> 3) +
		    (verse_rotR32(v14, 19) XOR verse_rotR32(v14, 17) XOR v14 >>
		     10);
		v25 =
		    v24 + 0x19a4c116UL + v1 + (v23 XOR v21 & (v22 XOR v23)) +
		    (verse_rotR32(v21, 25) XOR verse_rotR32(v21, 11)
		     XOR verse_rotR32(v21, 6));
		v20 += v25;
		v24 = v25 + (verse_rotR32(v17, 22) XOR verse_rotR32(v17, 13)
			     XOR verse_rotR32(v17,
					      2)) +
		    (v17 & v18 | v19 & (v18 | v17));
		v25 =
		    v23 + 0x1e376c08UL + v2 + (v22 XOR v20 & (v21 XOR v22)) +
		    (verse_rotR32(v20, 25) XOR verse_rotR32(v20, 11)
		     XOR verse_rotR32(v20, 6));
		v19 += v25;
		v23 = v25 + (verse_rotR32(v24, 22) XOR verse_rotR32(v24, 13)
			     XOR verse_rotR32(v24,
					      2)) +
		    (v24 & v17 | v18 & (v17 | v24));
		v25 =
		    v22 + 0x2748774cUL + v3 + (v21 XOR v19 & (v20 XOR v21)) +
		    (verse_rotR32(v19, 25) XOR verse_rotR32(v19, 11)
		     XOR verse_rotR32(v19, 6));
		v18 += v25;
		v22 = v25 + (verse_rotR32(v23, 22) XOR verse_rotR32(v23, 13)
			     XOR verse_rotR32(v23,
					      2)) +
		    (v23 & v24 | v17 & (v24 | v23));
		v25 =
		    v21 + 0x34b0bcb5UL + v4 + (v20 XOR v18 & (v19 XOR v20)) +
		    (verse_rotR32(v18, 25) XOR verse_rotR32(v18, 11)
		     XOR verse_rotR32(v18, 6));
		v17 += v25;
		v21 = v25 + (verse_rotR32(v22, 22) XOR verse_rotR32(v22, 13)
			     XOR verse_rotR32(v22,
					      2)) +
		    (v22 & v23 | v24 & (v23 | v22));
		v25 =
		    v20 + 0x391c0cb3UL + v5 + (v19 XOR v17 & (v18 XOR v19)) +
		    (verse_rotR32(v17, 25) XOR verse_rotR32(v17, 11)
		     XOR verse_rotR32(v17, 6));
		v24 += v25;
		v20 = v25 + (verse_rotR32(v21, 22) XOR verse_rotR32(v21, 13)
			     XOR verse_rotR32(v21,
					      2)) +
		    (v21 & v22 | v23 & (v22 | v21));
		v25 =
		    v19 + 0x4ed8aa4aUL + v6 + (v18 XOR v24 & (v17 XOR v18)) +
		    (verse_rotR32(v24, 25) XOR verse_rotR32(v24, 11)
		     XOR verse_rotR32(v24, 6));
		v23 += v25;
		v19 = v25 + (verse_rotR32(v20, 22) XOR verse_rotR32(v20, 13)
			     XOR verse_rotR32(v20,
					      2)) +
		    (v20 & v21 | v22 & (v21 | v20));
		v25 =
		    v18 + 0x5b9cca4fUL + v7 + (v17 XOR v23 & (v24 XOR v17)) +
		    (verse_rotR32(v23, 25) XOR verse_rotR32(v23, 11)
		     XOR verse_rotR32(v23, 6));
		v22 += v25;
		v18 = v25 + (verse_rotR32(v19, 22) XOR verse_rotR32(v19, 13)
			     XOR verse_rotR32(v19,
					      2)) +
		    (v19 & v20 | v21 & (v20 | v19));
		v25 =
		    v17 + 0x682e6ff3UL + v8 + (v24 XOR v22 & (v23 XOR v24)) +
		    (verse_rotR32(v22, 25) XOR verse_rotR32(v22, 11)
		     XOR verse_rotR32(v22, 6));
		v21 += v25;
		v17 = v25 + (verse_rotR32(v18, 22) XOR verse_rotR32(v18, 13)
			     XOR verse_rotR32(v18,
					      2)) +
		    (v18 & v19 | v20 & (v19 | v18));
		v25 =
		    v24 + 0x748f82eeUL + v9 + (v23 XOR v21 & (v22 XOR v23)) +
		    (verse_rotR32(v21, 25) XOR verse_rotR32(v21, 11)
		     XOR verse_rotR32(v21, 6));
		v20 += v25;
		v24 = v25 + (verse_rotR32(v17, 22) XOR verse_rotR32(v17, 13)
			     XOR verse_rotR32(v17,
					      2)) +
		    (v17 & v18 | v19 & (v18 | v17));
		v25 =
		    v23 + 0x78a5636fUL + v10 + (v22 XOR v20 & (v21 XOR v22)) +
		    (verse_rotR32(v20, 25) XOR verse_rotR32(v20, 11)
		     XOR verse_rotR32(v20, 6));
		v19 += v25;
		v23 = v25 + (verse_rotR32(v24, 22) XOR verse_rotR32(v24, 13)
			     XOR verse_rotR32(v24,
					      2)) +
		    (v24 & v17 | v18 & (v17 | v24));
		v25 =
		    v22 + 0x84c87814UL + v11 + (v21 XOR v19 & (v20 XOR v21)) +
		    (verse_rotR32(v19, 25) XOR verse_rotR32(v19, 11)
		     XOR verse_rotR32(v19, 6));
		v18 += v25;
		v22 = v25 + (verse_rotR32(v23, 22) XOR verse_rotR32(v23, 13)
			     XOR verse_rotR32(v23,
					      2)) +
		    (v23 & v24 | v17 & (v24 | v23));
		v25 =
		    v21 + 0x8cc70208UL + v12 + (v20 XOR v18 & (v19 XOR v20)) +
		    (verse_rotR32(v18, 25) XOR verse_rotR32(v18, 11)
		     XOR verse_rotR32(v18, 6));
		v17 += v25;
		v21 = v25 + (verse_rotR32(v22, 22) XOR verse_rotR32(v22, 13)
			     XOR verse_rotR32(v22,
					      2)) +
		    (v22 & v23 | v24 & (v23 | v22));
		v25 =
		    v20 + 0x90befffaUL + v13 + (v19 XOR v17 & (v18 XOR v19)) +
		    (verse_rotR32(v17, 25) XOR verse_rotR32(v17, 11)
		     XOR verse_rotR32(v17, 6));
		v24 += v25;
		v20 = v25 + (verse_rotR32(v21, 22) XOR verse_rotR32(v21, 13)
			     XOR verse_rotR32(v21,
					      2)) +
		    (v21 & v22 | v23 & (v22 | v21));
		v25 =
		    v19 + 0xa4506cebUL + v14 + (v18 XOR v24 & (v17 XOR v18)) +
		    (verse_rotR32(v24, 25) XOR verse_rotR32(v24, 11)
		     XOR verse_rotR32(v24, 6));
		v23 += v25;
		v19 = v25 + (verse_rotR32(v20, 22) XOR verse_rotR32(v20, 13)
			     XOR verse_rotR32(v20,
					      2)) +
		    (v20 & v21 | v22 & (v21 | v20));
		v25 =
		    v18 + 0xbef9a3f7UL + v15 + (v17 XOR v23 & (v24 XOR v17)) +
		    (verse_rotR32(v23, 25) XOR verse_rotR32(v23, 11)
		     XOR verse_rotR32(v23, 6));
		v22 += v25;
		v18 = v25 + (verse_rotR32(v19, 22) XOR verse_rotR32(v19, 13)
			     XOR verse_rotR32(v19,
					      2)) +
		    (v19 & v20 | v21 & (v20 | v19));
		v25 =
		    v17 + 0xc67178f2UL + v16 + (v24 XOR v22 & (v23 XOR v24)) +
		    (verse_rotR32(v22, 25) XOR verse_rotR32(v22, 11)
		     XOR verse_rotR32(v22, 6));
		v21 += v25;
		v17 = v25 + (verse_rotR32(v18, 22) XOR verse_rotR32(v18, 13)
			     XOR verse_rotR32(v18,
					      2)) +
		    (v18 & v19 | v20 & (v19 | v18));
		v17 += v0[0];
		v18 += v0[1];
		v19 += v0[2];
		v20 += v0[3];
		v21 += v0[4];
		v22 += v0[5];
		v23 += v0[6];
		v24 += v0[7];
		v0[0] = v17;
		v0[1] = v18;
		v0[2] = v19;
		v0[3] = v20;
		v0[4] = v21;
		v0[5] = v22;
		v0[6] = v23;
		v0[7] = v24;
		++bPtr;
		--cTr;
	};
}
