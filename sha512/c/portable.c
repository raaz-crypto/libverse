#include <stdint.h>
#include <verse.h>
#define XOR ^
void verse_sha512_c_portable(uint64_t(*bPtr)[16], uint64_t cTr, uint64_t v0[8])
{
	auto uint64_t v1;
	auto uint64_t v2;
	auto uint64_t v3;
	auto uint64_t v4;
	auto uint64_t v5;
	auto uint64_t v6;
	auto uint64_t v7;
	auto uint64_t v8;
	auto uint64_t v9;
	auto uint64_t v10;
	auto uint64_t v11;
	auto uint64_t v12;
	auto uint64_t v13;
	auto uint64_t v14;
	auto uint64_t v15;
	auto uint64_t v16;
	auto uint64_t v17;
	auto uint64_t v18;
	auto uint64_t v19;
	auto uint64_t v20;
	auto uint64_t v21;
	auto uint64_t v22;
	auto uint64_t v23;
	auto uint64_t v24;
	auto uint64_t v25;
	v17 = v0[0];
	v18 = v0[1];
	v19 = v0[2];
	v20 = v0[3];
	v21 = v0[4];
	v22 = v0[5];
	v23 = v0[6];
	v24 = v0[7];
	while (cTr > 0) {
		v1 = verse_from_be64((*bPtr)[0]);
		v2 = verse_from_be64((*bPtr)[1]);
		v3 = verse_from_be64((*bPtr)[2]);
		v4 = verse_from_be64((*bPtr)[3]);
		v5 = verse_from_be64((*bPtr)[4]);
		v6 = verse_from_be64((*bPtr)[5]);
		v7 = verse_from_be64((*bPtr)[6]);
		v8 = verse_from_be64((*bPtr)[7]);
		v9 = verse_from_be64((*bPtr)[8]);
		v10 = verse_from_be64((*bPtr)[9]);
		v11 = verse_from_be64((*bPtr)[10]);
		v12 = verse_from_be64((*bPtr)[11]);
		v13 = verse_from_be64((*bPtr)[12]);
		v14 = verse_from_be64((*bPtr)[13]);
		v15 = verse_from_be64((*bPtr)[14]);
		v16 = verse_from_be64((*bPtr)[15]);
		v25 =
		    v24 + 0x428a2f98d728ae22ULL + v1 +
		    (v23 XOR v21 & (v22 XOR v23)) +
		    (verse_rotR64(v21, 41) XOR verse_rotR64(v21, 18)
		     XOR verse_rotR64(v21, 14));
		v20 += v25;
		v24 = v25 + (verse_rotR64(v17, 39) XOR verse_rotR64(v17, 34)
			     XOR verse_rotR64(v17,
					      28)) +
		    (v17 & v18 | v19 & (v18 | v17));
		v1 +=
		    v10 +
		    (verse_rotR64(v2, 8) XOR verse_rotR64(v2, 1) XOR v2 >> 7) +
		    (verse_rotR64(v15, 61) XOR verse_rotR64(v15, 19) XOR v15 >>
		     6);
		v25 =
		    v23 + 0x7137449123ef65cdULL + v2 +
		    (v22 XOR v20 & (v21 XOR v22)) +
		    (verse_rotR64(v20, 41) XOR verse_rotR64(v20, 18)
		     XOR verse_rotR64(v20, 14));
		v19 += v25;
		v23 = v25 + (verse_rotR64(v24, 39) XOR verse_rotR64(v24, 34)
			     XOR verse_rotR64(v24,
					      28)) +
		    (v24 & v17 | v18 & (v17 | v24));
		v2 +=
		    v11 +
		    (verse_rotR64(v3, 8) XOR verse_rotR64(v3, 1) XOR v3 >> 7) +
		    (verse_rotR64(v16, 61) XOR verse_rotR64(v16, 19) XOR v16 >>
		     6);
		v25 =
		    v22 + 0xb5c0fbcfec4d3b2fULL + v3 +
		    (v21 XOR v19 & (v20 XOR v21)) +
		    (verse_rotR64(v19, 41) XOR verse_rotR64(v19, 18)
		     XOR verse_rotR64(v19, 14));
		v18 += v25;
		v22 = v25 + (verse_rotR64(v23, 39) XOR verse_rotR64(v23, 34)
			     XOR verse_rotR64(v23,
					      28)) +
		    (v23 & v24 | v17 & (v24 | v23));
		v3 +=
		    v12 +
		    (verse_rotR64(v4, 8) XOR verse_rotR64(v4, 1) XOR v4 >> 7) +
		    (verse_rotR64(v1, 61) XOR verse_rotR64(v1, 19) XOR v1 >> 6);
		v25 =
		    v21 + 0xe9b5dba58189dbbcULL + v4 +
		    (v20 XOR v18 & (v19 XOR v20)) +
		    (verse_rotR64(v18, 41) XOR verse_rotR64(v18, 18)
		     XOR verse_rotR64(v18, 14));
		v17 += v25;
		v21 = v25 + (verse_rotR64(v22, 39) XOR verse_rotR64(v22, 34)
			     XOR verse_rotR64(v22,
					      28)) +
		    (v22 & v23 | v24 & (v23 | v22));
		v4 +=
		    v13 +
		    (verse_rotR64(v5, 8) XOR verse_rotR64(v5, 1) XOR v5 >> 7) +
		    (verse_rotR64(v2, 61) XOR verse_rotR64(v2, 19) XOR v2 >> 6);
		v25 =
		    v20 + 0x3956c25bf348b538ULL + v5 +
		    (v19 XOR v17 & (v18 XOR v19)) +
		    (verse_rotR64(v17, 41) XOR verse_rotR64(v17, 18)
		     XOR verse_rotR64(v17, 14));
		v24 += v25;
		v20 = v25 + (verse_rotR64(v21, 39) XOR verse_rotR64(v21, 34)
			     XOR verse_rotR64(v21,
					      28)) +
		    (v21 & v22 | v23 & (v22 | v21));
		v5 +=
		    v14 +
		    (verse_rotR64(v6, 8) XOR verse_rotR64(v6, 1) XOR v6 >> 7) +
		    (verse_rotR64(v3, 61) XOR verse_rotR64(v3, 19) XOR v3 >> 6);
		v25 =
		    v19 + 0x59f111f1b605d019ULL + v6 +
		    (v18 XOR v24 & (v17 XOR v18)) +
		    (verse_rotR64(v24, 41) XOR verse_rotR64(v24, 18)
		     XOR verse_rotR64(v24, 14));
		v23 += v25;
		v19 = v25 + (verse_rotR64(v20, 39) XOR verse_rotR64(v20, 34)
			     XOR verse_rotR64(v20,
					      28)) +
		    (v20 & v21 | v22 & (v21 | v20));
		v6 +=
		    v15 +
		    (verse_rotR64(v7, 8) XOR verse_rotR64(v7, 1) XOR v7 >> 7) +
		    (verse_rotR64(v4, 61) XOR verse_rotR64(v4, 19) XOR v4 >> 6);
		v25 =
		    v18 + 0x923f82a4af194f9bULL + v7 +
		    (v17 XOR v23 & (v24 XOR v17)) +
		    (verse_rotR64(v23, 41) XOR verse_rotR64(v23, 18)
		     XOR verse_rotR64(v23, 14));
		v22 += v25;
		v18 = v25 + (verse_rotR64(v19, 39) XOR verse_rotR64(v19, 34)
			     XOR verse_rotR64(v19,
					      28)) +
		    (v19 & v20 | v21 & (v20 | v19));
		v7 +=
		    v16 +
		    (verse_rotR64(v8, 8) XOR verse_rotR64(v8, 1) XOR v8 >> 7) +
		    (verse_rotR64(v5, 61) XOR verse_rotR64(v5, 19) XOR v5 >> 6);
		v25 =
		    v17 + 0xab1c5ed5da6d8118ULL + v8 +
		    (v24 XOR v22 & (v23 XOR v24)) +
		    (verse_rotR64(v22, 41) XOR verse_rotR64(v22, 18)
		     XOR verse_rotR64(v22, 14));
		v21 += v25;
		v17 = v25 + (verse_rotR64(v18, 39) XOR verse_rotR64(v18, 34)
			     XOR verse_rotR64(v18,
					      28)) +
		    (v18 & v19 | v20 & (v19 | v18));
		v8 +=
		    v1 +
		    (verse_rotR64(v9, 8) XOR verse_rotR64(v9, 1) XOR v9 >> 7) +
		    (verse_rotR64(v6, 61) XOR verse_rotR64(v6, 19) XOR v6 >> 6);
		v25 =
		    v24 + 0xd807aa98a3030242ULL + v9 +
		    (v23 XOR v21 & (v22 XOR v23)) +
		    (verse_rotR64(v21, 41) XOR verse_rotR64(v21, 18)
		     XOR verse_rotR64(v21, 14));
		v20 += v25;
		v24 = v25 + (verse_rotR64(v17, 39) XOR verse_rotR64(v17, 34)
			     XOR verse_rotR64(v17,
					      28)) +
		    (v17 & v18 | v19 & (v18 | v17));
		v9 +=
		    v2 +
		    (verse_rotR64(v10, 8) XOR verse_rotR64(v10, 1) XOR v10 >> 7)
		    +
		    (verse_rotR64(v7, 61) XOR verse_rotR64(v7, 19) XOR v7 >> 6);
		v25 =
		    v23 + 0x12835b0145706fbeULL + v10 +
		    (v22 XOR v20 & (v21 XOR v22)) +
		    (verse_rotR64(v20, 41) XOR verse_rotR64(v20, 18)
		     XOR verse_rotR64(v20, 14));
		v19 += v25;
		v23 = v25 + (verse_rotR64(v24, 39) XOR verse_rotR64(v24, 34)
			     XOR verse_rotR64(v24,
					      28)) +
		    (v24 & v17 | v18 & (v17 | v24));
		v10 +=
		    v3 +
		    (verse_rotR64(v11, 8) XOR verse_rotR64(v11, 1) XOR v11 >> 7)
		    +
		    (verse_rotR64(v8, 61) XOR verse_rotR64(v8, 19) XOR v8 >> 6);
		v25 =
		    v22 + 0x243185be4ee4b28cULL + v11 +
		    (v21 XOR v19 & (v20 XOR v21)) +
		    (verse_rotR64(v19, 41) XOR verse_rotR64(v19, 18)
		     XOR verse_rotR64(v19, 14));
		v18 += v25;
		v22 = v25 + (verse_rotR64(v23, 39) XOR verse_rotR64(v23, 34)
			     XOR verse_rotR64(v23,
					      28)) +
		    (v23 & v24 | v17 & (v24 | v23));
		v11 +=
		    v4 +
		    (verse_rotR64(v12, 8) XOR verse_rotR64(v12, 1) XOR v12 >> 7)
		    +
		    (verse_rotR64(v9, 61) XOR verse_rotR64(v9, 19) XOR v9 >> 6);
		v25 =
		    v21 + 0x550c7dc3d5ffb4e2ULL + v12 +
		    (v20 XOR v18 & (v19 XOR v20)) +
		    (verse_rotR64(v18, 41) XOR verse_rotR64(v18, 18)
		     XOR verse_rotR64(v18, 14));
		v17 += v25;
		v21 = v25 + (verse_rotR64(v22, 39) XOR verse_rotR64(v22, 34)
			     XOR verse_rotR64(v22,
					      28)) +
		    (v22 & v23 | v24 & (v23 | v22));
		v12 +=
		    v5 +
		    (verse_rotR64(v13, 8) XOR verse_rotR64(v13, 1) XOR v13 >> 7)
		    +
		    (verse_rotR64(v10, 61) XOR verse_rotR64(v10, 19) XOR v10 >>
		     6);
		v25 =
		    v20 + 0x72be5d74f27b896fULL + v13 +
		    (v19 XOR v17 & (v18 XOR v19)) +
		    (verse_rotR64(v17, 41) XOR verse_rotR64(v17, 18)
		     XOR verse_rotR64(v17, 14));
		v24 += v25;
		v20 = v25 + (verse_rotR64(v21, 39) XOR verse_rotR64(v21, 34)
			     XOR verse_rotR64(v21,
					      28)) +
		    (v21 & v22 | v23 & (v22 | v21));
		v13 +=
		    v6 +
		    (verse_rotR64(v14, 8) XOR verse_rotR64(v14, 1) XOR v14 >> 7)
		    +
		    (verse_rotR64(v11, 61) XOR verse_rotR64(v11, 19) XOR v11 >>
		     6);
		v25 =
		    v19 + 0x80deb1fe3b1696b1ULL + v14 +
		    (v18 XOR v24 & (v17 XOR v18)) +
		    (verse_rotR64(v24, 41) XOR verse_rotR64(v24, 18)
		     XOR verse_rotR64(v24, 14));
		v23 += v25;
		v19 = v25 + (verse_rotR64(v20, 39) XOR verse_rotR64(v20, 34)
			     XOR verse_rotR64(v20,
					      28)) +
		    (v20 & v21 | v22 & (v21 | v20));
		v14 +=
		    v7 +
		    (verse_rotR64(v15, 8) XOR verse_rotR64(v15, 1) XOR v15 >> 7)
		    +
		    (verse_rotR64(v12, 61) XOR verse_rotR64(v12, 19) XOR v12 >>
		     6);
		v25 =
		    v18 + 0x9bdc06a725c71235ULL + v15 +
		    (v17 XOR v23 & (v24 XOR v17)) +
		    (verse_rotR64(v23, 41) XOR verse_rotR64(v23, 18)
		     XOR verse_rotR64(v23, 14));
		v22 += v25;
		v18 = v25 + (verse_rotR64(v19, 39) XOR verse_rotR64(v19, 34)
			     XOR verse_rotR64(v19,
					      28)) +
		    (v19 & v20 | v21 & (v20 | v19));
		v15 +=
		    v8 +
		    (verse_rotR64(v16, 8) XOR verse_rotR64(v16, 1) XOR v16 >> 7)
		    +
		    (verse_rotR64(v13, 61) XOR verse_rotR64(v13, 19) XOR v13 >>
		     6);
		v25 =
		    v17 + 0xc19bf174cf692694ULL + v16 +
		    (v24 XOR v22 & (v23 XOR v24)) +
		    (verse_rotR64(v22, 41) XOR verse_rotR64(v22, 18)
		     XOR verse_rotR64(v22, 14));
		v21 += v25;
		v17 = v25 + (verse_rotR64(v18, 39) XOR verse_rotR64(v18, 34)
			     XOR verse_rotR64(v18,
					      28)) +
		    (v18 & v19 | v20 & (v19 | v18));
		v16 +=
		    v9 +
		    (verse_rotR64(v1, 8) XOR verse_rotR64(v1, 1) XOR v1 >> 7) +
		    (verse_rotR64(v14, 61) XOR verse_rotR64(v14, 19) XOR v14 >>
		     6);
		v25 =
		    v24 + 0xe49b69c19ef14ad2ULL + v1 +
		    (v23 XOR v21 & (v22 XOR v23)) +
		    (verse_rotR64(v21, 41) XOR verse_rotR64(v21, 18)
		     XOR verse_rotR64(v21, 14));
		v20 += v25;
		v24 = v25 + (verse_rotR64(v17, 39) XOR verse_rotR64(v17, 34)
			     XOR verse_rotR64(v17,
					      28)) +
		    (v17 & v18 | v19 & (v18 | v17));
		v1 +=
		    v10 +
		    (verse_rotR64(v2, 8) XOR verse_rotR64(v2, 1) XOR v2 >> 7) +
		    (verse_rotR64(v15, 61) XOR verse_rotR64(v15, 19) XOR v15 >>
		     6);
		v25 =
		    v23 + 0xefbe4786384f25e3ULL + v2 +
		    (v22 XOR v20 & (v21 XOR v22)) +
		    (verse_rotR64(v20, 41) XOR verse_rotR64(v20, 18)
		     XOR verse_rotR64(v20, 14));
		v19 += v25;
		v23 = v25 + (verse_rotR64(v24, 39) XOR verse_rotR64(v24, 34)
			     XOR verse_rotR64(v24,
					      28)) +
		    (v24 & v17 | v18 & (v17 | v24));
		v2 +=
		    v11 +
		    (verse_rotR64(v3, 8) XOR verse_rotR64(v3, 1) XOR v3 >> 7) +
		    (verse_rotR64(v16, 61) XOR verse_rotR64(v16, 19) XOR v16 >>
		     6);
		v25 =
		    v22 + 0x0fc19dc68b8cd5b5ULL + v3 +
		    (v21 XOR v19 & (v20 XOR v21)) +
		    (verse_rotR64(v19, 41) XOR verse_rotR64(v19, 18)
		     XOR verse_rotR64(v19, 14));
		v18 += v25;
		v22 = v25 + (verse_rotR64(v23, 39) XOR verse_rotR64(v23, 34)
			     XOR verse_rotR64(v23,
					      28)) +
		    (v23 & v24 | v17 & (v24 | v23));
		v3 +=
		    v12 +
		    (verse_rotR64(v4, 8) XOR verse_rotR64(v4, 1) XOR v4 >> 7) +
		    (verse_rotR64(v1, 61) XOR verse_rotR64(v1, 19) XOR v1 >> 6);
		v25 =
		    v21 + 0x240ca1cc77ac9c65ULL + v4 +
		    (v20 XOR v18 & (v19 XOR v20)) +
		    (verse_rotR64(v18, 41) XOR verse_rotR64(v18, 18)
		     XOR verse_rotR64(v18, 14));
		v17 += v25;
		v21 = v25 + (verse_rotR64(v22, 39) XOR verse_rotR64(v22, 34)
			     XOR verse_rotR64(v22,
					      28)) +
		    (v22 & v23 | v24 & (v23 | v22));
		v4 +=
		    v13 +
		    (verse_rotR64(v5, 8) XOR verse_rotR64(v5, 1) XOR v5 >> 7) +
		    (verse_rotR64(v2, 61) XOR verse_rotR64(v2, 19) XOR v2 >> 6);
		v25 =
		    v20 + 0x2de92c6f592b0275ULL + v5 +
		    (v19 XOR v17 & (v18 XOR v19)) +
		    (verse_rotR64(v17, 41) XOR verse_rotR64(v17, 18)
		     XOR verse_rotR64(v17, 14));
		v24 += v25;
		v20 = v25 + (verse_rotR64(v21, 39) XOR verse_rotR64(v21, 34)
			     XOR verse_rotR64(v21,
					      28)) +
		    (v21 & v22 | v23 & (v22 | v21));
		v5 +=
		    v14 +
		    (verse_rotR64(v6, 8) XOR verse_rotR64(v6, 1) XOR v6 >> 7) +
		    (verse_rotR64(v3, 61) XOR verse_rotR64(v3, 19) XOR v3 >> 6);
		v25 =
		    v19 + 0x4a7484aa6ea6e483ULL + v6 +
		    (v18 XOR v24 & (v17 XOR v18)) +
		    (verse_rotR64(v24, 41) XOR verse_rotR64(v24, 18)
		     XOR verse_rotR64(v24, 14));
		v23 += v25;
		v19 = v25 + (verse_rotR64(v20, 39) XOR verse_rotR64(v20, 34)
			     XOR verse_rotR64(v20,
					      28)) +
		    (v20 & v21 | v22 & (v21 | v20));
		v6 +=
		    v15 +
		    (verse_rotR64(v7, 8) XOR verse_rotR64(v7, 1) XOR v7 >> 7) +
		    (verse_rotR64(v4, 61) XOR verse_rotR64(v4, 19) XOR v4 >> 6);
		v25 =
		    v18 + 0x5cb0a9dcbd41fbd4ULL + v7 +
		    (v17 XOR v23 & (v24 XOR v17)) +
		    (verse_rotR64(v23, 41) XOR verse_rotR64(v23, 18)
		     XOR verse_rotR64(v23, 14));
		v22 += v25;
		v18 = v25 + (verse_rotR64(v19, 39) XOR verse_rotR64(v19, 34)
			     XOR verse_rotR64(v19,
					      28)) +
		    (v19 & v20 | v21 & (v20 | v19));
		v7 +=
		    v16 +
		    (verse_rotR64(v8, 8) XOR verse_rotR64(v8, 1) XOR v8 >> 7) +
		    (verse_rotR64(v5, 61) XOR verse_rotR64(v5, 19) XOR v5 >> 6);
		v25 =
		    v17 + 0x76f988da831153b5ULL + v8 +
		    (v24 XOR v22 & (v23 XOR v24)) +
		    (verse_rotR64(v22, 41) XOR verse_rotR64(v22, 18)
		     XOR verse_rotR64(v22, 14));
		v21 += v25;
		v17 = v25 + (verse_rotR64(v18, 39) XOR verse_rotR64(v18, 34)
			     XOR verse_rotR64(v18,
					      28)) +
		    (v18 & v19 | v20 & (v19 | v18));
		v8 +=
		    v1 +
		    (verse_rotR64(v9, 8) XOR verse_rotR64(v9, 1) XOR v9 >> 7) +
		    (verse_rotR64(v6, 61) XOR verse_rotR64(v6, 19) XOR v6 >> 6);
		v25 =
		    v24 + 0x983e5152ee66dfabULL + v9 +
		    (v23 XOR v21 & (v22 XOR v23)) +
		    (verse_rotR64(v21, 41) XOR verse_rotR64(v21, 18)
		     XOR verse_rotR64(v21, 14));
		v20 += v25;
		v24 = v25 + (verse_rotR64(v17, 39) XOR verse_rotR64(v17, 34)
			     XOR verse_rotR64(v17,
					      28)) +
		    (v17 & v18 | v19 & (v18 | v17));
		v9 +=
		    v2 +
		    (verse_rotR64(v10, 8) XOR verse_rotR64(v10, 1) XOR v10 >> 7)
		    +
		    (verse_rotR64(v7, 61) XOR verse_rotR64(v7, 19) XOR v7 >> 6);
		v25 =
		    v23 + 0xa831c66d2db43210ULL + v10 +
		    (v22 XOR v20 & (v21 XOR v22)) +
		    (verse_rotR64(v20, 41) XOR verse_rotR64(v20, 18)
		     XOR verse_rotR64(v20, 14));
		v19 += v25;
		v23 = v25 + (verse_rotR64(v24, 39) XOR verse_rotR64(v24, 34)
			     XOR verse_rotR64(v24,
					      28)) +
		    (v24 & v17 | v18 & (v17 | v24));
		v10 +=
		    v3 +
		    (verse_rotR64(v11, 8) XOR verse_rotR64(v11, 1) XOR v11 >> 7)
		    +
		    (verse_rotR64(v8, 61) XOR verse_rotR64(v8, 19) XOR v8 >> 6);
		v25 =
		    v22 + 0xb00327c898fb213fULL + v11 +
		    (v21 XOR v19 & (v20 XOR v21)) +
		    (verse_rotR64(v19, 41) XOR verse_rotR64(v19, 18)
		     XOR verse_rotR64(v19, 14));
		v18 += v25;
		v22 = v25 + (verse_rotR64(v23, 39) XOR verse_rotR64(v23, 34)
			     XOR verse_rotR64(v23,
					      28)) +
		    (v23 & v24 | v17 & (v24 | v23));
		v11 +=
		    v4 +
		    (verse_rotR64(v12, 8) XOR verse_rotR64(v12, 1) XOR v12 >> 7)
		    +
		    (verse_rotR64(v9, 61) XOR verse_rotR64(v9, 19) XOR v9 >> 6);
		v25 =
		    v21 + 0xbf597fc7beef0ee4ULL + v12 +
		    (v20 XOR v18 & (v19 XOR v20)) +
		    (verse_rotR64(v18, 41) XOR verse_rotR64(v18, 18)
		     XOR verse_rotR64(v18, 14));
		v17 += v25;
		v21 = v25 + (verse_rotR64(v22, 39) XOR verse_rotR64(v22, 34)
			     XOR verse_rotR64(v22,
					      28)) +
		    (v22 & v23 | v24 & (v23 | v22));
		v12 +=
		    v5 +
		    (verse_rotR64(v13, 8) XOR verse_rotR64(v13, 1) XOR v13 >> 7)
		    +
		    (verse_rotR64(v10, 61) XOR verse_rotR64(v10, 19) XOR v10 >>
		     6);
		v25 =
		    v20 + 0xc6e00bf33da88fc2ULL + v13 +
		    (v19 XOR v17 & (v18 XOR v19)) +
		    (verse_rotR64(v17, 41) XOR verse_rotR64(v17, 18)
		     XOR verse_rotR64(v17, 14));
		v24 += v25;
		v20 = v25 + (verse_rotR64(v21, 39) XOR verse_rotR64(v21, 34)
			     XOR verse_rotR64(v21,
					      28)) +
		    (v21 & v22 | v23 & (v22 | v21));
		v13 +=
		    v6 +
		    (verse_rotR64(v14, 8) XOR verse_rotR64(v14, 1) XOR v14 >> 7)
		    +
		    (verse_rotR64(v11, 61) XOR verse_rotR64(v11, 19) XOR v11 >>
		     6);
		v25 =
		    v19 + 0xd5a79147930aa725ULL + v14 +
		    (v18 XOR v24 & (v17 XOR v18)) +
		    (verse_rotR64(v24, 41) XOR verse_rotR64(v24, 18)
		     XOR verse_rotR64(v24, 14));
		v23 += v25;
		v19 = v25 + (verse_rotR64(v20, 39) XOR verse_rotR64(v20, 34)
			     XOR verse_rotR64(v20,
					      28)) +
		    (v20 & v21 | v22 & (v21 | v20));
		v14 +=
		    v7 +
		    (verse_rotR64(v15, 8) XOR verse_rotR64(v15, 1) XOR v15 >> 7)
		    +
		    (verse_rotR64(v12, 61) XOR verse_rotR64(v12, 19) XOR v12 >>
		     6);
		v25 =
		    v18 + 0x06ca6351e003826fULL + v15 +
		    (v17 XOR v23 & (v24 XOR v17)) +
		    (verse_rotR64(v23, 41) XOR verse_rotR64(v23, 18)
		     XOR verse_rotR64(v23, 14));
		v22 += v25;
		v18 = v25 + (verse_rotR64(v19, 39) XOR verse_rotR64(v19, 34)
			     XOR verse_rotR64(v19,
					      28)) +
		    (v19 & v20 | v21 & (v20 | v19));
		v15 +=
		    v8 +
		    (verse_rotR64(v16, 8) XOR verse_rotR64(v16, 1) XOR v16 >> 7)
		    +
		    (verse_rotR64(v13, 61) XOR verse_rotR64(v13, 19) XOR v13 >>
		     6);
		v25 =
		    v17 + 0x142929670a0e6e70ULL + v16 +
		    (v24 XOR v22 & (v23 XOR v24)) +
		    (verse_rotR64(v22, 41) XOR verse_rotR64(v22, 18)
		     XOR verse_rotR64(v22, 14));
		v21 += v25;
		v17 = v25 + (verse_rotR64(v18, 39) XOR verse_rotR64(v18, 34)
			     XOR verse_rotR64(v18,
					      28)) +
		    (v18 & v19 | v20 & (v19 | v18));
		v16 +=
		    v9 +
		    (verse_rotR64(v1, 8) XOR verse_rotR64(v1, 1) XOR v1 >> 7) +
		    (verse_rotR64(v14, 61) XOR verse_rotR64(v14, 19) XOR v14 >>
		     6);
		v25 =
		    v24 + 0x27b70a8546d22ffcULL + v1 +
		    (v23 XOR v21 & (v22 XOR v23)) +
		    (verse_rotR64(v21, 41) XOR verse_rotR64(v21, 18)
		     XOR verse_rotR64(v21, 14));
		v20 += v25;
		v24 = v25 + (verse_rotR64(v17, 39) XOR verse_rotR64(v17, 34)
			     XOR verse_rotR64(v17,
					      28)) +
		    (v17 & v18 | v19 & (v18 | v17));
		v1 +=
		    v10 +
		    (verse_rotR64(v2, 8) XOR verse_rotR64(v2, 1) XOR v2 >> 7) +
		    (verse_rotR64(v15, 61) XOR verse_rotR64(v15, 19) XOR v15 >>
		     6);
		v25 =
		    v23 + 0x2e1b21385c26c926ULL + v2 +
		    (v22 XOR v20 & (v21 XOR v22)) +
		    (verse_rotR64(v20, 41) XOR verse_rotR64(v20, 18)
		     XOR verse_rotR64(v20, 14));
		v19 += v25;
		v23 = v25 + (verse_rotR64(v24, 39) XOR verse_rotR64(v24, 34)
			     XOR verse_rotR64(v24,
					      28)) +
		    (v24 & v17 | v18 & (v17 | v24));
		v2 +=
		    v11 +
		    (verse_rotR64(v3, 8) XOR verse_rotR64(v3, 1) XOR v3 >> 7) +
		    (verse_rotR64(v16, 61) XOR verse_rotR64(v16, 19) XOR v16 >>
		     6);
		v25 =
		    v22 + 0x4d2c6dfc5ac42aedULL + v3 +
		    (v21 XOR v19 & (v20 XOR v21)) +
		    (verse_rotR64(v19, 41) XOR verse_rotR64(v19, 18)
		     XOR verse_rotR64(v19, 14));
		v18 += v25;
		v22 = v25 + (verse_rotR64(v23, 39) XOR verse_rotR64(v23, 34)
			     XOR verse_rotR64(v23,
					      28)) +
		    (v23 & v24 | v17 & (v24 | v23));
		v3 +=
		    v12 +
		    (verse_rotR64(v4, 8) XOR verse_rotR64(v4, 1) XOR v4 >> 7) +
		    (verse_rotR64(v1, 61) XOR verse_rotR64(v1, 19) XOR v1 >> 6);
		v25 =
		    v21 + 0x53380d139d95b3dfULL + v4 +
		    (v20 XOR v18 & (v19 XOR v20)) +
		    (verse_rotR64(v18, 41) XOR verse_rotR64(v18, 18)
		     XOR verse_rotR64(v18, 14));
		v17 += v25;
		v21 = v25 + (verse_rotR64(v22, 39) XOR verse_rotR64(v22, 34)
			     XOR verse_rotR64(v22,
					      28)) +
		    (v22 & v23 | v24 & (v23 | v22));
		v4 +=
		    v13 +
		    (verse_rotR64(v5, 8) XOR verse_rotR64(v5, 1) XOR v5 >> 7) +
		    (verse_rotR64(v2, 61) XOR verse_rotR64(v2, 19) XOR v2 >> 6);
		v25 =
		    v20 + 0x650a73548baf63deULL + v5 +
		    (v19 XOR v17 & (v18 XOR v19)) +
		    (verse_rotR64(v17, 41) XOR verse_rotR64(v17, 18)
		     XOR verse_rotR64(v17, 14));
		v24 += v25;
		v20 = v25 + (verse_rotR64(v21, 39) XOR verse_rotR64(v21, 34)
			     XOR verse_rotR64(v21,
					      28)) +
		    (v21 & v22 | v23 & (v22 | v21));
		v5 +=
		    v14 +
		    (verse_rotR64(v6, 8) XOR verse_rotR64(v6, 1) XOR v6 >> 7) +
		    (verse_rotR64(v3, 61) XOR verse_rotR64(v3, 19) XOR v3 >> 6);
		v25 =
		    v19 + 0x766a0abb3c77b2a8ULL + v6 +
		    (v18 XOR v24 & (v17 XOR v18)) +
		    (verse_rotR64(v24, 41) XOR verse_rotR64(v24, 18)
		     XOR verse_rotR64(v24, 14));
		v23 += v25;
		v19 = v25 + (verse_rotR64(v20, 39) XOR verse_rotR64(v20, 34)
			     XOR verse_rotR64(v20,
					      28)) +
		    (v20 & v21 | v22 & (v21 | v20));
		v6 +=
		    v15 +
		    (verse_rotR64(v7, 8) XOR verse_rotR64(v7, 1) XOR v7 >> 7) +
		    (verse_rotR64(v4, 61) XOR verse_rotR64(v4, 19) XOR v4 >> 6);
		v25 =
		    v18 + 0x81c2c92e47edaee6ULL + v7 +
		    (v17 XOR v23 & (v24 XOR v17)) +
		    (verse_rotR64(v23, 41) XOR verse_rotR64(v23, 18)
		     XOR verse_rotR64(v23, 14));
		v22 += v25;
		v18 = v25 + (verse_rotR64(v19, 39) XOR verse_rotR64(v19, 34)
			     XOR verse_rotR64(v19,
					      28)) +
		    (v19 & v20 | v21 & (v20 | v19));
		v7 +=
		    v16 +
		    (verse_rotR64(v8, 8) XOR verse_rotR64(v8, 1) XOR v8 >> 7) +
		    (verse_rotR64(v5, 61) XOR verse_rotR64(v5, 19) XOR v5 >> 6);
		v25 =
		    v17 + 0x92722c851482353bULL + v8 +
		    (v24 XOR v22 & (v23 XOR v24)) +
		    (verse_rotR64(v22, 41) XOR verse_rotR64(v22, 18)
		     XOR verse_rotR64(v22, 14));
		v21 += v25;
		v17 = v25 + (verse_rotR64(v18, 39) XOR verse_rotR64(v18, 34)
			     XOR verse_rotR64(v18,
					      28)) +
		    (v18 & v19 | v20 & (v19 | v18));
		v8 +=
		    v1 +
		    (verse_rotR64(v9, 8) XOR verse_rotR64(v9, 1) XOR v9 >> 7) +
		    (verse_rotR64(v6, 61) XOR verse_rotR64(v6, 19) XOR v6 >> 6);
		v25 =
		    v24 + 0xa2bfe8a14cf10364ULL + v9 +
		    (v23 XOR v21 & (v22 XOR v23)) +
		    (verse_rotR64(v21, 41) XOR verse_rotR64(v21, 18)
		     XOR verse_rotR64(v21, 14));
		v20 += v25;
		v24 = v25 + (verse_rotR64(v17, 39) XOR verse_rotR64(v17, 34)
			     XOR verse_rotR64(v17,
					      28)) +
		    (v17 & v18 | v19 & (v18 | v17));
		v9 +=
		    v2 +
		    (verse_rotR64(v10, 8) XOR verse_rotR64(v10, 1) XOR v10 >> 7)
		    +
		    (verse_rotR64(v7, 61) XOR verse_rotR64(v7, 19) XOR v7 >> 6);
		v25 =
		    v23 + 0xa81a664bbc423001ULL + v10 +
		    (v22 XOR v20 & (v21 XOR v22)) +
		    (verse_rotR64(v20, 41) XOR verse_rotR64(v20, 18)
		     XOR verse_rotR64(v20, 14));
		v19 += v25;
		v23 = v25 + (verse_rotR64(v24, 39) XOR verse_rotR64(v24, 34)
			     XOR verse_rotR64(v24,
					      28)) +
		    (v24 & v17 | v18 & (v17 | v24));
		v10 +=
		    v3 +
		    (verse_rotR64(v11, 8) XOR verse_rotR64(v11, 1) XOR v11 >> 7)
		    +
		    (verse_rotR64(v8, 61) XOR verse_rotR64(v8, 19) XOR v8 >> 6);
		v25 =
		    v22 + 0xc24b8b70d0f89791ULL + v11 +
		    (v21 XOR v19 & (v20 XOR v21)) +
		    (verse_rotR64(v19, 41) XOR verse_rotR64(v19, 18)
		     XOR verse_rotR64(v19, 14));
		v18 += v25;
		v22 = v25 + (verse_rotR64(v23, 39) XOR verse_rotR64(v23, 34)
			     XOR verse_rotR64(v23,
					      28)) +
		    (v23 & v24 | v17 & (v24 | v23));
		v11 +=
		    v4 +
		    (verse_rotR64(v12, 8) XOR verse_rotR64(v12, 1) XOR v12 >> 7)
		    +
		    (verse_rotR64(v9, 61) XOR verse_rotR64(v9, 19) XOR v9 >> 6);
		v25 =
		    v21 + 0xc76c51a30654be30ULL + v12 +
		    (v20 XOR v18 & (v19 XOR v20)) +
		    (verse_rotR64(v18, 41) XOR verse_rotR64(v18, 18)
		     XOR verse_rotR64(v18, 14));
		v17 += v25;
		v21 = v25 + (verse_rotR64(v22, 39) XOR verse_rotR64(v22, 34)
			     XOR verse_rotR64(v22,
					      28)) +
		    (v22 & v23 | v24 & (v23 | v22));
		v12 +=
		    v5 +
		    (verse_rotR64(v13, 8) XOR verse_rotR64(v13, 1) XOR v13 >> 7)
		    +
		    (verse_rotR64(v10, 61) XOR verse_rotR64(v10, 19) XOR v10 >>
		     6);
		v25 =
		    v20 + 0xd192e819d6ef5218ULL + v13 +
		    (v19 XOR v17 & (v18 XOR v19)) +
		    (verse_rotR64(v17, 41) XOR verse_rotR64(v17, 18)
		     XOR verse_rotR64(v17, 14));
		v24 += v25;
		v20 = v25 + (verse_rotR64(v21, 39) XOR verse_rotR64(v21, 34)
			     XOR verse_rotR64(v21,
					      28)) +
		    (v21 & v22 | v23 & (v22 | v21));
		v13 +=
		    v6 +
		    (verse_rotR64(v14, 8) XOR verse_rotR64(v14, 1) XOR v14 >> 7)
		    +
		    (verse_rotR64(v11, 61) XOR verse_rotR64(v11, 19) XOR v11 >>
		     6);
		v25 =
		    v19 + 0xd69906245565a910ULL + v14 +
		    (v18 XOR v24 & (v17 XOR v18)) +
		    (verse_rotR64(v24, 41) XOR verse_rotR64(v24, 18)
		     XOR verse_rotR64(v24, 14));
		v23 += v25;
		v19 = v25 + (verse_rotR64(v20, 39) XOR verse_rotR64(v20, 34)
			     XOR verse_rotR64(v20,
					      28)) +
		    (v20 & v21 | v22 & (v21 | v20));
		v14 +=
		    v7 +
		    (verse_rotR64(v15, 8) XOR verse_rotR64(v15, 1) XOR v15 >> 7)
		    +
		    (verse_rotR64(v12, 61) XOR verse_rotR64(v12, 19) XOR v12 >>
		     6);
		v25 =
		    v18 + 0xf40e35855771202aULL + v15 +
		    (v17 XOR v23 & (v24 XOR v17)) +
		    (verse_rotR64(v23, 41) XOR verse_rotR64(v23, 18)
		     XOR verse_rotR64(v23, 14));
		v22 += v25;
		v18 = v25 + (verse_rotR64(v19, 39) XOR verse_rotR64(v19, 34)
			     XOR verse_rotR64(v19,
					      28)) +
		    (v19 & v20 | v21 & (v20 | v19));
		v15 +=
		    v8 +
		    (verse_rotR64(v16, 8) XOR verse_rotR64(v16, 1) XOR v16 >> 7)
		    +
		    (verse_rotR64(v13, 61) XOR verse_rotR64(v13, 19) XOR v13 >>
		     6);
		v25 =
		    v17 + 0x106aa07032bbd1b8ULL + v16 +
		    (v24 XOR v22 & (v23 XOR v24)) +
		    (verse_rotR64(v22, 41) XOR verse_rotR64(v22, 18)
		     XOR verse_rotR64(v22, 14));
		v21 += v25;
		v17 = v25 + (verse_rotR64(v18, 39) XOR verse_rotR64(v18, 34)
			     XOR verse_rotR64(v18,
					      28)) +
		    (v18 & v19 | v20 & (v19 | v18));
		v16 +=
		    v9 +
		    (verse_rotR64(v1, 8) XOR verse_rotR64(v1, 1) XOR v1 >> 7) +
		    (verse_rotR64(v14, 61) XOR verse_rotR64(v14, 19) XOR v14 >>
		     6);
		v25 =
		    v24 + 0x19a4c116b8d2d0c8ULL + v1 +
		    (v23 XOR v21 & (v22 XOR v23)) +
		    (verse_rotR64(v21, 41) XOR verse_rotR64(v21, 18)
		     XOR verse_rotR64(v21, 14));
		v20 += v25;
		v24 = v25 + (verse_rotR64(v17, 39) XOR verse_rotR64(v17, 34)
			     XOR verse_rotR64(v17,
					      28)) +
		    (v17 & v18 | v19 & (v18 | v17));
		v1 +=
		    v10 +
		    (verse_rotR64(v2, 8) XOR verse_rotR64(v2, 1) XOR v2 >> 7) +
		    (verse_rotR64(v15, 61) XOR verse_rotR64(v15, 19) XOR v15 >>
		     6);
		v25 =
		    v23 + 0x1e376c085141ab53ULL + v2 +
		    (v22 XOR v20 & (v21 XOR v22)) +
		    (verse_rotR64(v20, 41) XOR verse_rotR64(v20, 18)
		     XOR verse_rotR64(v20, 14));
		v19 += v25;
		v23 = v25 + (verse_rotR64(v24, 39) XOR verse_rotR64(v24, 34)
			     XOR verse_rotR64(v24,
					      28)) +
		    (v24 & v17 | v18 & (v17 | v24));
		v2 +=
		    v11 +
		    (verse_rotR64(v3, 8) XOR verse_rotR64(v3, 1) XOR v3 >> 7) +
		    (verse_rotR64(v16, 61) XOR verse_rotR64(v16, 19) XOR v16 >>
		     6);
		v25 =
		    v22 + 0x2748774cdf8eeb99ULL + v3 +
		    (v21 XOR v19 & (v20 XOR v21)) +
		    (verse_rotR64(v19, 41) XOR verse_rotR64(v19, 18)
		     XOR verse_rotR64(v19, 14));
		v18 += v25;
		v22 = v25 + (verse_rotR64(v23, 39) XOR verse_rotR64(v23, 34)
			     XOR verse_rotR64(v23,
					      28)) +
		    (v23 & v24 | v17 & (v24 | v23));
		v3 +=
		    v12 +
		    (verse_rotR64(v4, 8) XOR verse_rotR64(v4, 1) XOR v4 >> 7) +
		    (verse_rotR64(v1, 61) XOR verse_rotR64(v1, 19) XOR v1 >> 6);
		v25 =
		    v21 + 0x34b0bcb5e19b48a8ULL + v4 +
		    (v20 XOR v18 & (v19 XOR v20)) +
		    (verse_rotR64(v18, 41) XOR verse_rotR64(v18, 18)
		     XOR verse_rotR64(v18, 14));
		v17 += v25;
		v21 = v25 + (verse_rotR64(v22, 39) XOR verse_rotR64(v22, 34)
			     XOR verse_rotR64(v22,
					      28)) +
		    (v22 & v23 | v24 & (v23 | v22));
		v4 +=
		    v13 +
		    (verse_rotR64(v5, 8) XOR verse_rotR64(v5, 1) XOR v5 >> 7) +
		    (verse_rotR64(v2, 61) XOR verse_rotR64(v2, 19) XOR v2 >> 6);
		v25 =
		    v20 + 0x391c0cb3c5c95a63ULL + v5 +
		    (v19 XOR v17 & (v18 XOR v19)) +
		    (verse_rotR64(v17, 41) XOR verse_rotR64(v17, 18)
		     XOR verse_rotR64(v17, 14));
		v24 += v25;
		v20 = v25 + (verse_rotR64(v21, 39) XOR verse_rotR64(v21, 34)
			     XOR verse_rotR64(v21,
					      28)) +
		    (v21 & v22 | v23 & (v22 | v21));
		v5 +=
		    v14 +
		    (verse_rotR64(v6, 8) XOR verse_rotR64(v6, 1) XOR v6 >> 7) +
		    (verse_rotR64(v3, 61) XOR verse_rotR64(v3, 19) XOR v3 >> 6);
		v25 =
		    v19 + 0x4ed8aa4ae3418acbULL + v6 +
		    (v18 XOR v24 & (v17 XOR v18)) +
		    (verse_rotR64(v24, 41) XOR verse_rotR64(v24, 18)
		     XOR verse_rotR64(v24, 14));
		v23 += v25;
		v19 = v25 + (verse_rotR64(v20, 39) XOR verse_rotR64(v20, 34)
			     XOR verse_rotR64(v20,
					      28)) +
		    (v20 & v21 | v22 & (v21 | v20));
		v6 +=
		    v15 +
		    (verse_rotR64(v7, 8) XOR verse_rotR64(v7, 1) XOR v7 >> 7) +
		    (verse_rotR64(v4, 61) XOR verse_rotR64(v4, 19) XOR v4 >> 6);
		v25 =
		    v18 + 0x5b9cca4f7763e373ULL + v7 +
		    (v17 XOR v23 & (v24 XOR v17)) +
		    (verse_rotR64(v23, 41) XOR verse_rotR64(v23, 18)
		     XOR verse_rotR64(v23, 14));
		v22 += v25;
		v18 = v25 + (verse_rotR64(v19, 39) XOR verse_rotR64(v19, 34)
			     XOR verse_rotR64(v19,
					      28)) +
		    (v19 & v20 | v21 & (v20 | v19));
		v7 +=
		    v16 +
		    (verse_rotR64(v8, 8) XOR verse_rotR64(v8, 1) XOR v8 >> 7) +
		    (verse_rotR64(v5, 61) XOR verse_rotR64(v5, 19) XOR v5 >> 6);
		v25 =
		    v17 + 0x682e6ff3d6b2b8a3ULL + v8 +
		    (v24 XOR v22 & (v23 XOR v24)) +
		    (verse_rotR64(v22, 41) XOR verse_rotR64(v22, 18)
		     XOR verse_rotR64(v22, 14));
		v21 += v25;
		v17 = v25 + (verse_rotR64(v18, 39) XOR verse_rotR64(v18, 34)
			     XOR verse_rotR64(v18,
					      28)) +
		    (v18 & v19 | v20 & (v19 | v18));
		v8 +=
		    v1 +
		    (verse_rotR64(v9, 8) XOR verse_rotR64(v9, 1) XOR v9 >> 7) +
		    (verse_rotR64(v6, 61) XOR verse_rotR64(v6, 19) XOR v6 >> 6);
		v25 =
		    v24 + 0x748f82ee5defb2fcULL + v9 +
		    (v23 XOR v21 & (v22 XOR v23)) +
		    (verse_rotR64(v21, 41) XOR verse_rotR64(v21, 18)
		     XOR verse_rotR64(v21, 14));
		v20 += v25;
		v24 = v25 + (verse_rotR64(v17, 39) XOR verse_rotR64(v17, 34)
			     XOR verse_rotR64(v17,
					      28)) +
		    (v17 & v18 | v19 & (v18 | v17));
		v9 +=
		    v2 +
		    (verse_rotR64(v10, 8) XOR verse_rotR64(v10, 1) XOR v10 >> 7)
		    +
		    (verse_rotR64(v7, 61) XOR verse_rotR64(v7, 19) XOR v7 >> 6);
		v25 =
		    v23 + 0x78a5636f43172f60ULL + v10 +
		    (v22 XOR v20 & (v21 XOR v22)) +
		    (verse_rotR64(v20, 41) XOR verse_rotR64(v20, 18)
		     XOR verse_rotR64(v20, 14));
		v19 += v25;
		v23 = v25 + (verse_rotR64(v24, 39) XOR verse_rotR64(v24, 34)
			     XOR verse_rotR64(v24,
					      28)) +
		    (v24 & v17 | v18 & (v17 | v24));
		v10 +=
		    v3 +
		    (verse_rotR64(v11, 8) XOR verse_rotR64(v11, 1) XOR v11 >> 7)
		    +
		    (verse_rotR64(v8, 61) XOR verse_rotR64(v8, 19) XOR v8 >> 6);
		v25 =
		    v22 + 0x84c87814a1f0ab72ULL + v11 +
		    (v21 XOR v19 & (v20 XOR v21)) +
		    (verse_rotR64(v19, 41) XOR verse_rotR64(v19, 18)
		     XOR verse_rotR64(v19, 14));
		v18 += v25;
		v22 = v25 + (verse_rotR64(v23, 39) XOR verse_rotR64(v23, 34)
			     XOR verse_rotR64(v23,
					      28)) +
		    (v23 & v24 | v17 & (v24 | v23));
		v11 +=
		    v4 +
		    (verse_rotR64(v12, 8) XOR verse_rotR64(v12, 1) XOR v12 >> 7)
		    +
		    (verse_rotR64(v9, 61) XOR verse_rotR64(v9, 19) XOR v9 >> 6);
		v25 =
		    v21 + 0x8cc702081a6439ecULL + v12 +
		    (v20 XOR v18 & (v19 XOR v20)) +
		    (verse_rotR64(v18, 41) XOR verse_rotR64(v18, 18)
		     XOR verse_rotR64(v18, 14));
		v17 += v25;
		v21 = v25 + (verse_rotR64(v22, 39) XOR verse_rotR64(v22, 34)
			     XOR verse_rotR64(v22,
					      28)) +
		    (v22 & v23 | v24 & (v23 | v22));
		v12 +=
		    v5 +
		    (verse_rotR64(v13, 8) XOR verse_rotR64(v13, 1) XOR v13 >> 7)
		    +
		    (verse_rotR64(v10, 61) XOR verse_rotR64(v10, 19) XOR v10 >>
		     6);
		v25 =
		    v20 + 0x90befffa23631e28ULL + v13 +
		    (v19 XOR v17 & (v18 XOR v19)) +
		    (verse_rotR64(v17, 41) XOR verse_rotR64(v17, 18)
		     XOR verse_rotR64(v17, 14));
		v24 += v25;
		v20 = v25 + (verse_rotR64(v21, 39) XOR verse_rotR64(v21, 34)
			     XOR verse_rotR64(v21,
					      28)) +
		    (v21 & v22 | v23 & (v22 | v21));
		v13 +=
		    v6 +
		    (verse_rotR64(v14, 8) XOR verse_rotR64(v14, 1) XOR v14 >> 7)
		    +
		    (verse_rotR64(v11, 61) XOR verse_rotR64(v11, 19) XOR v11 >>
		     6);
		v25 =
		    v19 + 0xa4506cebde82bde9ULL + v14 +
		    (v18 XOR v24 & (v17 XOR v18)) +
		    (verse_rotR64(v24, 41) XOR verse_rotR64(v24, 18)
		     XOR verse_rotR64(v24, 14));
		v23 += v25;
		v19 = v25 + (verse_rotR64(v20, 39) XOR verse_rotR64(v20, 34)
			     XOR verse_rotR64(v20,
					      28)) +
		    (v20 & v21 | v22 & (v21 | v20));
		v14 +=
		    v7 +
		    (verse_rotR64(v15, 8) XOR verse_rotR64(v15, 1) XOR v15 >> 7)
		    +
		    (verse_rotR64(v12, 61) XOR verse_rotR64(v12, 19) XOR v12 >>
		     6);
		v25 =
		    v18 + 0xbef9a3f7b2c67915ULL + v15 +
		    (v17 XOR v23 & (v24 XOR v17)) +
		    (verse_rotR64(v23, 41) XOR verse_rotR64(v23, 18)
		     XOR verse_rotR64(v23, 14));
		v22 += v25;
		v18 = v25 + (verse_rotR64(v19, 39) XOR verse_rotR64(v19, 34)
			     XOR verse_rotR64(v19,
					      28)) +
		    (v19 & v20 | v21 & (v20 | v19));
		v15 +=
		    v8 +
		    (verse_rotR64(v16, 8) XOR verse_rotR64(v16, 1) XOR v16 >> 7)
		    +
		    (verse_rotR64(v13, 61) XOR verse_rotR64(v13, 19) XOR v13 >>
		     6);
		v25 =
		    v17 + 0xc67178f2e372532bULL + v16 +
		    (v24 XOR v22 & (v23 XOR v24)) +
		    (verse_rotR64(v22, 41) XOR verse_rotR64(v22, 18)
		     XOR verse_rotR64(v22, 14));
		v21 += v25;
		v17 = v25 + (verse_rotR64(v18, 39) XOR verse_rotR64(v18, 34)
			     XOR verse_rotR64(v18,
					      28)) +
		    (v18 & v19 | v20 & (v19 | v18));
		v16 +=
		    v9 +
		    (verse_rotR64(v1, 8) XOR verse_rotR64(v1, 1) XOR v1 >> 7) +
		    (verse_rotR64(v14, 61) XOR verse_rotR64(v14, 19) XOR v14 >>
		     6);
		v25 =
		    v24 + 0xca273eceea26619cULL + v1 +
		    (v23 XOR v21 & (v22 XOR v23)) +
		    (verse_rotR64(v21, 41) XOR verse_rotR64(v21, 18)
		     XOR verse_rotR64(v21, 14));
		v20 += v25;
		v24 = v25 + (verse_rotR64(v17, 39) XOR verse_rotR64(v17, 34)
			     XOR verse_rotR64(v17,
					      28)) +
		    (v17 & v18 | v19 & (v18 | v17));
		v25 =
		    v23 + 0xd186b8c721c0c207ULL + v2 +
		    (v22 XOR v20 & (v21 XOR v22)) +
		    (verse_rotR64(v20, 41) XOR verse_rotR64(v20, 18)
		     XOR verse_rotR64(v20, 14));
		v19 += v25;
		v23 = v25 + (verse_rotR64(v24, 39) XOR verse_rotR64(v24, 34)
			     XOR verse_rotR64(v24,
					      28)) +
		    (v24 & v17 | v18 & (v17 | v24));
		v25 =
		    v22 + 0xeada7dd6cde0eb1eULL + v3 +
		    (v21 XOR v19 & (v20 XOR v21)) +
		    (verse_rotR64(v19, 41) XOR verse_rotR64(v19, 18)
		     XOR verse_rotR64(v19, 14));
		v18 += v25;
		v22 = v25 + (verse_rotR64(v23, 39) XOR verse_rotR64(v23, 34)
			     XOR verse_rotR64(v23,
					      28)) +
		    (v23 & v24 | v17 & (v24 | v23));
		v25 =
		    v21 + 0xf57d4f7fee6ed178ULL + v4 +
		    (v20 XOR v18 & (v19 XOR v20)) +
		    (verse_rotR64(v18, 41) XOR verse_rotR64(v18, 18)
		     XOR verse_rotR64(v18, 14));
		v17 += v25;
		v21 = v25 + (verse_rotR64(v22, 39) XOR verse_rotR64(v22, 34)
			     XOR verse_rotR64(v22,
					      28)) +
		    (v22 & v23 | v24 & (v23 | v22));
		v25 =
		    v20 + 0x06f067aa72176fbaULL + v5 +
		    (v19 XOR v17 & (v18 XOR v19)) +
		    (verse_rotR64(v17, 41) XOR verse_rotR64(v17, 18)
		     XOR verse_rotR64(v17, 14));
		v24 += v25;
		v20 = v25 + (verse_rotR64(v21, 39) XOR verse_rotR64(v21, 34)
			     XOR verse_rotR64(v21,
					      28)) +
		    (v21 & v22 | v23 & (v22 | v21));
		v25 =
		    v19 + 0x0a637dc5a2c898a6ULL + v6 +
		    (v18 XOR v24 & (v17 XOR v18)) +
		    (verse_rotR64(v24, 41) XOR verse_rotR64(v24, 18)
		     XOR verse_rotR64(v24, 14));
		v23 += v25;
		v19 = v25 + (verse_rotR64(v20, 39) XOR verse_rotR64(v20, 34)
			     XOR verse_rotR64(v20,
					      28)) +
		    (v20 & v21 | v22 & (v21 | v20));
		v25 =
		    v18 + 0x113f9804bef90daeULL + v7 +
		    (v17 XOR v23 & (v24 XOR v17)) +
		    (verse_rotR64(v23, 41) XOR verse_rotR64(v23, 18)
		     XOR verse_rotR64(v23, 14));
		v22 += v25;
		v18 = v25 + (verse_rotR64(v19, 39) XOR verse_rotR64(v19, 34)
			     XOR verse_rotR64(v19,
					      28)) +
		    (v19 & v20 | v21 & (v20 | v19));
		v25 =
		    v17 + 0x1b710b35131c471bULL + v8 +
		    (v24 XOR v22 & (v23 XOR v24)) +
		    (verse_rotR64(v22, 41) XOR verse_rotR64(v22, 18)
		     XOR verse_rotR64(v22, 14));
		v21 += v25;
		v17 = v25 + (verse_rotR64(v18, 39) XOR verse_rotR64(v18, 34)
			     XOR verse_rotR64(v18,
					      28)) +
		    (v18 & v19 | v20 & (v19 | v18));
		v25 =
		    v24 + 0x28db77f523047d84ULL + v9 +
		    (v23 XOR v21 & (v22 XOR v23)) +
		    (verse_rotR64(v21, 41) XOR verse_rotR64(v21, 18)
		     XOR verse_rotR64(v21, 14));
		v20 += v25;
		v24 = v25 + (verse_rotR64(v17, 39) XOR verse_rotR64(v17, 34)
			     XOR verse_rotR64(v17,
					      28)) +
		    (v17 & v18 | v19 & (v18 | v17));
		v25 =
		    v23 + 0x32caab7b40c72493ULL + v10 +
		    (v22 XOR v20 & (v21 XOR v22)) +
		    (verse_rotR64(v20, 41) XOR verse_rotR64(v20, 18)
		     XOR verse_rotR64(v20, 14));
		v19 += v25;
		v23 = v25 + (verse_rotR64(v24, 39) XOR verse_rotR64(v24, 34)
			     XOR verse_rotR64(v24,
					      28)) +
		    (v24 & v17 | v18 & (v17 | v24));
		v25 =
		    v22 + 0x3c9ebe0a15c9bebcULL + v11 +
		    (v21 XOR v19 & (v20 XOR v21)) +
		    (verse_rotR64(v19, 41) XOR verse_rotR64(v19, 18)
		     XOR verse_rotR64(v19, 14));
		v18 += v25;
		v22 = v25 + (verse_rotR64(v23, 39) XOR verse_rotR64(v23, 34)
			     XOR verse_rotR64(v23,
					      28)) +
		    (v23 & v24 | v17 & (v24 | v23));
		v25 =
		    v21 + 0x431d67c49c100d4cULL + v12 +
		    (v20 XOR v18 & (v19 XOR v20)) +
		    (verse_rotR64(v18, 41) XOR verse_rotR64(v18, 18)
		     XOR verse_rotR64(v18, 14));
		v17 += v25;
		v21 = v25 + (verse_rotR64(v22, 39) XOR verse_rotR64(v22, 34)
			     XOR verse_rotR64(v22,
					      28)) +
		    (v22 & v23 | v24 & (v23 | v22));
		v25 =
		    v20 + 0x4cc5d4becb3e42b6ULL + v13 +
		    (v19 XOR v17 & (v18 XOR v19)) +
		    (verse_rotR64(v17, 41) XOR verse_rotR64(v17, 18)
		     XOR verse_rotR64(v17, 14));
		v24 += v25;
		v20 = v25 + (verse_rotR64(v21, 39) XOR verse_rotR64(v21, 34)
			     XOR verse_rotR64(v21,
					      28)) +
		    (v21 & v22 | v23 & (v22 | v21));
		v25 =
		    v19 + 0x597f299cfc657e2aULL + v14 +
		    (v18 XOR v24 & (v17 XOR v18)) +
		    (verse_rotR64(v24, 41) XOR verse_rotR64(v24, 18)
		     XOR verse_rotR64(v24, 14));
		v23 += v25;
		v19 = v25 + (verse_rotR64(v20, 39) XOR verse_rotR64(v20, 34)
			     XOR verse_rotR64(v20,
					      28)) +
		    (v20 & v21 | v22 & (v21 | v20));
		v25 =
		    v18 + 0x5fcb6fab3ad6faecULL + v15 +
		    (v17 XOR v23 & (v24 XOR v17)) +
		    (verse_rotR64(v23, 41) XOR verse_rotR64(v23, 18)
		     XOR verse_rotR64(v23, 14));
		v22 += v25;
		v18 = v25 + (verse_rotR64(v19, 39) XOR verse_rotR64(v19, 34)
			     XOR verse_rotR64(v19,
					      28)) +
		    (v19 & v20 | v21 & (v20 | v19));
		v25 =
		    v17 + 0x6c44198c4a475817ULL + v16 +
		    (v24 XOR v22 & (v23 XOR v24)) +
		    (verse_rotR64(v22, 41) XOR verse_rotR64(v22, 18)
		     XOR verse_rotR64(v22, 14));
		v21 += v25;
		v17 = v25 + (verse_rotR64(v18, 39) XOR verse_rotR64(v18, 34)
			     XOR verse_rotR64(v18,
					      28)) +
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
