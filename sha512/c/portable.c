#include <stdint.h>
#include <verse.h>
#define XOR ^
void verse_sha512_c_portable(uint64_t(*blockPtr)[16],
			     uint64_t nBlocks, uint64_t hash[8])
{
	auto uint64_t w0;
	auto uint64_t w1;
	auto uint64_t w2;
	auto uint64_t w3;
	auto uint64_t w4;
	auto uint64_t w5;
	auto uint64_t w6;
	auto uint64_t w7;
	auto uint64_t w8;
	auto uint64_t w9;
	auto uint64_t w10;
	auto uint64_t w11;
	auto uint64_t w12;
	auto uint64_t w13;
	auto uint64_t w14;
	auto uint64_t w15;
	auto uint64_t a;
	auto uint64_t b;
	auto uint64_t c;
	auto uint64_t d;
	auto uint64_t e;
	auto uint64_t f;
	auto uint64_t g;
	auto uint64_t h;
	auto uint64_t t;
	a = hash[0];
	b = hash[1];
	c = hash[2];
	d = hash[3];
	e = hash[4];
	f = hash[5];
	g = hash[6];
	h = hash[7];
	while (nBlocks > 0) {
		w0 = verse_from_be64((*blockPtr)[0]);
		w1 = verse_from_be64((*blockPtr)[1]);
		w2 = verse_from_be64((*blockPtr)[2]);
		w3 = verse_from_be64((*blockPtr)[3]);
		w4 = verse_from_be64((*blockPtr)[4]);
		w5 = verse_from_be64((*blockPtr)[5]);
		w6 = verse_from_be64((*blockPtr)[6]);
		w7 = verse_from_be64((*blockPtr)[7]);
		w8 = verse_from_be64((*blockPtr)[8]);
		w9 = verse_from_be64((*blockPtr)[9]);
		w10 = verse_from_be64((*blockPtr)[10]);
		w11 = verse_from_be64((*blockPtr)[11]);
		w12 = verse_from_be64((*blockPtr)[12]);
		w13 = verse_from_be64((*blockPtr)[13]);
		w14 = verse_from_be64((*blockPtr)[14]);
		w15 = verse_from_be64((*blockPtr)[15]);
		t = h + 0x428a2f98d728ae22ULL + w0 + (g XOR e & (f XOR g)) +
		    (verse_rotR64(e, 41) XOR verse_rotR64(e, 18) XOR
		     verse_rotR64(e, 14));
		d += t;
		h = t +
		    (verse_rotR64(a, 39) XOR verse_rotR64(a, 34) XOR
		     verse_rotR64(a, 28)) + (a & b | c & (b | a));
		w0 +=
		    w9 +
		    (verse_rotR64(w1, 8) XOR verse_rotR64(w1, 1) XOR w1 >> 7) +
		    (verse_rotR64(w14, 61) XOR verse_rotR64(w14, 19) XOR w14 >>
		     6);
		t = g + 0x7137449123ef65cdULL + w1 + (f XOR d & (e XOR f)) +
		    (verse_rotR64(d, 41) XOR verse_rotR64(d, 18) XOR
		     verse_rotR64(d, 14));
		c += t;
		g = t +
		    (verse_rotR64(h, 39) XOR verse_rotR64(h, 34) XOR
		     verse_rotR64(h, 28)) + (h & a | b & (a | h));
		w1 +=
		    w10 +
		    (verse_rotR64(w2, 8) XOR verse_rotR64(w2, 1) XOR w2 >> 7) +
		    (verse_rotR64(w15, 61) XOR verse_rotR64(w15, 19) XOR w15 >>
		     6);
		t = f + 0xb5c0fbcfec4d3b2fULL + w2 + (e XOR c & (d XOR e)) +
		    (verse_rotR64(c, 41) XOR verse_rotR64(c, 18) XOR
		     verse_rotR64(c, 14));
		b += t;
		f = t +
		    (verse_rotR64(g, 39) XOR verse_rotR64(g, 34) XOR
		     verse_rotR64(g, 28)) + (g & h | a & (h | g));
		w2 +=
		    w11 +
		    (verse_rotR64(w3, 8) XOR verse_rotR64(w3, 1) XOR w3 >> 7) +
		    (verse_rotR64(w0, 61) XOR verse_rotR64(w0, 19) XOR w0 >> 6);
		t = e + 0xe9b5dba58189dbbcULL + w3 + (d XOR b & (c XOR d)) +
		    (verse_rotR64(b, 41) XOR verse_rotR64(b, 18) XOR
		     verse_rotR64(b, 14));
		a += t;
		e = t +
		    (verse_rotR64(f, 39) XOR verse_rotR64(f, 34) XOR
		     verse_rotR64(f, 28)) + (f & g | h & (g | f));
		w3 +=
		    w12 +
		    (verse_rotR64(w4, 8) XOR verse_rotR64(w4, 1) XOR w4 >> 7) +
		    (verse_rotR64(w1, 61) XOR verse_rotR64(w1, 19) XOR w1 >> 6);
		t = d + 0x3956c25bf348b538ULL + w4 + (c XOR a & (b XOR c)) +
		    (verse_rotR64(a, 41) XOR verse_rotR64(a, 18) XOR
		     verse_rotR64(a, 14));
		h += t;
		d = t +
		    (verse_rotR64(e, 39) XOR verse_rotR64(e, 34) XOR
		     verse_rotR64(e, 28)) + (e & f | g & (f | e));
		w4 +=
		    w13 +
		    (verse_rotR64(w5, 8) XOR verse_rotR64(w5, 1) XOR w5 >> 7) +
		    (verse_rotR64(w2, 61) XOR verse_rotR64(w2, 19) XOR w2 >> 6);
		t = c + 0x59f111f1b605d019ULL + w5 + (b XOR h & (a XOR b)) +
		    (verse_rotR64(h, 41) XOR verse_rotR64(h, 18) XOR
		     verse_rotR64(h, 14));
		g += t;
		c = t +
		    (verse_rotR64(d, 39) XOR verse_rotR64(d, 34) XOR
		     verse_rotR64(d, 28)) + (d & e | f & (e | d));
		w5 +=
		    w14 +
		    (verse_rotR64(w6, 8) XOR verse_rotR64(w6, 1) XOR w6 >> 7) +
		    (verse_rotR64(w3, 61) XOR verse_rotR64(w3, 19) XOR w3 >> 6);
		t = b + 0x923f82a4af194f9bULL + w6 + (a XOR g & (h XOR a)) +
		    (verse_rotR64(g, 41) XOR verse_rotR64(g, 18) XOR
		     verse_rotR64(g, 14));
		f += t;
		b = t +
		    (verse_rotR64(c, 39) XOR verse_rotR64(c, 34) XOR
		     verse_rotR64(c, 28)) + (c & d | e & (d | c));
		w6 +=
		    w15 +
		    (verse_rotR64(w7, 8) XOR verse_rotR64(w7, 1) XOR w7 >> 7) +
		    (verse_rotR64(w4, 61) XOR verse_rotR64(w4, 19) XOR w4 >> 6);
		t = a + 0xab1c5ed5da6d8118ULL + w7 + (h XOR f & (g XOR h)) +
		    (verse_rotR64(f, 41) XOR verse_rotR64(f, 18) XOR
		     verse_rotR64(f, 14));
		e += t;
		a = t +
		    (verse_rotR64(b, 39) XOR verse_rotR64(b, 34) XOR
		     verse_rotR64(b, 28)) + (b & c | d & (c | b));
		w7 +=
		    w0 +
		    (verse_rotR64(w8, 8) XOR verse_rotR64(w8, 1) XOR w8 >> 7) +
		    (verse_rotR64(w5, 61) XOR verse_rotR64(w5, 19) XOR w5 >> 6);
		t = h + 0xd807aa98a3030242ULL + w8 + (g XOR e & (f XOR g)) +
		    (verse_rotR64(e, 41) XOR verse_rotR64(e, 18) XOR
		     verse_rotR64(e, 14));
		d += t;
		h = t +
		    (verse_rotR64(a, 39) XOR verse_rotR64(a, 34) XOR
		     verse_rotR64(a, 28)) + (a & b | c & (b | a));
		w8 +=
		    w1 +
		    (verse_rotR64(w9, 8) XOR verse_rotR64(w9, 1) XOR w9 >> 7) +
		    (verse_rotR64(w6, 61) XOR verse_rotR64(w6, 19) XOR w6 >> 6);
		t = g + 0x12835b0145706fbeULL + w9 + (f XOR d & (e XOR f)) +
		    (verse_rotR64(d, 41) XOR verse_rotR64(d, 18) XOR
		     verse_rotR64(d, 14));
		c += t;
		g = t +
		    (verse_rotR64(h, 39) XOR verse_rotR64(h, 34) XOR
		     verse_rotR64(h, 28)) + (h & a | b & (a | h));
		w9 +=
		    w2 +
		    (verse_rotR64(w10, 8) XOR verse_rotR64(w10, 1) XOR w10 >> 7)
		    +
		    (verse_rotR64(w7, 61) XOR verse_rotR64(w7, 19) XOR w7 >> 6);
		t = f + 0x243185be4ee4b28cULL + w10 + (e XOR c & (d XOR e)) +
		    (verse_rotR64(c, 41) XOR verse_rotR64(c, 18) XOR
		     verse_rotR64(c, 14));
		b += t;
		f = t +
		    (verse_rotR64(g, 39) XOR verse_rotR64(g, 34) XOR
		     verse_rotR64(g, 28)) + (g & h | a & (h | g));
		w10 +=
		    w3 +
		    (verse_rotR64(w11, 8) XOR verse_rotR64(w11, 1) XOR w11 >> 7)
		    +
		    (verse_rotR64(w8, 61) XOR verse_rotR64(w8, 19) XOR w8 >> 6);
		t = e + 0x550c7dc3d5ffb4e2ULL + w11 + (d XOR b & (c XOR d)) +
		    (verse_rotR64(b, 41) XOR verse_rotR64(b, 18) XOR
		     verse_rotR64(b, 14));
		a += t;
		e = t +
		    (verse_rotR64(f, 39) XOR verse_rotR64(f, 34) XOR
		     verse_rotR64(f, 28)) + (f & g | h & (g | f));
		w11 +=
		    w4 +
		    (verse_rotR64(w12, 8) XOR verse_rotR64(w12, 1) XOR w12 >> 7)
		    +
		    (verse_rotR64(w9, 61) XOR verse_rotR64(w9, 19) XOR w9 >> 6);
		t = d + 0x72be5d74f27b896fULL + w12 + (c XOR a & (b XOR c)) +
		    (verse_rotR64(a, 41) XOR verse_rotR64(a, 18) XOR
		     verse_rotR64(a, 14));
		h += t;
		d = t +
		    (verse_rotR64(e, 39) XOR verse_rotR64(e, 34) XOR
		     verse_rotR64(e, 28)) + (e & f | g & (f | e));
		w12 +=
		    w5 +
		    (verse_rotR64(w13, 8) XOR verse_rotR64(w13, 1) XOR w13 >> 7)
		    +
		    (verse_rotR64(w10, 61) XOR verse_rotR64(w10, 19) XOR w10 >>
		     6);
		t = c + 0x80deb1fe3b1696b1ULL + w13 + (b XOR h & (a XOR b)) +
		    (verse_rotR64(h, 41) XOR verse_rotR64(h, 18) XOR
		     verse_rotR64(h, 14));
		g += t;
		c = t +
		    (verse_rotR64(d, 39) XOR verse_rotR64(d, 34) XOR
		     verse_rotR64(d, 28)) + (d & e | f & (e | d));
		w13 +=
		    w6 +
		    (verse_rotR64(w14, 8) XOR verse_rotR64(w14, 1) XOR w14 >> 7)
		    +
		    (verse_rotR64(w11, 61) XOR verse_rotR64(w11, 19) XOR w11 >>
		     6);
		t = b + 0x9bdc06a725c71235ULL + w14 + (a XOR g & (h XOR a)) +
		    (verse_rotR64(g, 41) XOR verse_rotR64(g, 18) XOR
		     verse_rotR64(g, 14));
		f += t;
		b = t +
		    (verse_rotR64(c, 39) XOR verse_rotR64(c, 34) XOR
		     verse_rotR64(c, 28)) + (c & d | e & (d | c));
		w14 +=
		    w7 +
		    (verse_rotR64(w15, 8) XOR verse_rotR64(w15, 1) XOR w15 >> 7)
		    +
		    (verse_rotR64(w12, 61) XOR verse_rotR64(w12, 19) XOR w12 >>
		     6);
		t = a + 0xc19bf174cf692694ULL + w15 + (h XOR f & (g XOR h)) +
		    (verse_rotR64(f, 41) XOR verse_rotR64(f, 18) XOR
		     verse_rotR64(f, 14));
		e += t;
		a = t +
		    (verse_rotR64(b, 39) XOR verse_rotR64(b, 34) XOR
		     verse_rotR64(b, 28)) + (b & c | d & (c | b));
		w15 +=
		    w8 +
		    (verse_rotR64(w0, 8) XOR verse_rotR64(w0, 1) XOR w0 >> 7) +
		    (verse_rotR64(w13, 61) XOR verse_rotR64(w13, 19) XOR w13 >>
		     6);
		t = h + 0xe49b69c19ef14ad2ULL + w0 + (g XOR e & (f XOR g)) +
		    (verse_rotR64(e, 41) XOR verse_rotR64(e, 18) XOR
		     verse_rotR64(e, 14));
		d += t;
		h = t +
		    (verse_rotR64(a, 39) XOR verse_rotR64(a, 34) XOR
		     verse_rotR64(a, 28)) + (a & b | c & (b | a));
		w0 +=
		    w9 +
		    (verse_rotR64(w1, 8) XOR verse_rotR64(w1, 1) XOR w1 >> 7) +
		    (verse_rotR64(w14, 61) XOR verse_rotR64(w14, 19) XOR w14 >>
		     6);
		t = g + 0xefbe4786384f25e3ULL + w1 + (f XOR d & (e XOR f)) +
		    (verse_rotR64(d, 41) XOR verse_rotR64(d, 18) XOR
		     verse_rotR64(d, 14));
		c += t;
		g = t +
		    (verse_rotR64(h, 39) XOR verse_rotR64(h, 34) XOR
		     verse_rotR64(h, 28)) + (h & a | b & (a | h));
		w1 +=
		    w10 +
		    (verse_rotR64(w2, 8) XOR verse_rotR64(w2, 1) XOR w2 >> 7) +
		    (verse_rotR64(w15, 61) XOR verse_rotR64(w15, 19) XOR w15 >>
		     6);
		t = f + 0x0fc19dc68b8cd5b5ULL + w2 + (e XOR c & (d XOR e)) +
		    (verse_rotR64(c, 41) XOR verse_rotR64(c, 18) XOR
		     verse_rotR64(c, 14));
		b += t;
		f = t +
		    (verse_rotR64(g, 39) XOR verse_rotR64(g, 34) XOR
		     verse_rotR64(g, 28)) + (g & h | a & (h | g));
		w2 +=
		    w11 +
		    (verse_rotR64(w3, 8) XOR verse_rotR64(w3, 1) XOR w3 >> 7) +
		    (verse_rotR64(w0, 61) XOR verse_rotR64(w0, 19) XOR w0 >> 6);
		t = e + 0x240ca1cc77ac9c65ULL + w3 + (d XOR b & (c XOR d)) +
		    (verse_rotR64(b, 41) XOR verse_rotR64(b, 18) XOR
		     verse_rotR64(b, 14));
		a += t;
		e = t +
		    (verse_rotR64(f, 39) XOR verse_rotR64(f, 34) XOR
		     verse_rotR64(f, 28)) + (f & g | h & (g | f));
		w3 +=
		    w12 +
		    (verse_rotR64(w4, 8) XOR verse_rotR64(w4, 1) XOR w4 >> 7) +
		    (verse_rotR64(w1, 61) XOR verse_rotR64(w1, 19) XOR w1 >> 6);
		t = d + 0x2de92c6f592b0275ULL + w4 + (c XOR a & (b XOR c)) +
		    (verse_rotR64(a, 41) XOR verse_rotR64(a, 18) XOR
		     verse_rotR64(a, 14));
		h += t;
		d = t +
		    (verse_rotR64(e, 39) XOR verse_rotR64(e, 34) XOR
		     verse_rotR64(e, 28)) + (e & f | g & (f | e));
		w4 +=
		    w13 +
		    (verse_rotR64(w5, 8) XOR verse_rotR64(w5, 1) XOR w5 >> 7) +
		    (verse_rotR64(w2, 61) XOR verse_rotR64(w2, 19) XOR w2 >> 6);
		t = c + 0x4a7484aa6ea6e483ULL + w5 + (b XOR h & (a XOR b)) +
		    (verse_rotR64(h, 41) XOR verse_rotR64(h, 18) XOR
		     verse_rotR64(h, 14));
		g += t;
		c = t +
		    (verse_rotR64(d, 39) XOR verse_rotR64(d, 34) XOR
		     verse_rotR64(d, 28)) + (d & e | f & (e | d));
		w5 +=
		    w14 +
		    (verse_rotR64(w6, 8) XOR verse_rotR64(w6, 1) XOR w6 >> 7) +
		    (verse_rotR64(w3, 61) XOR verse_rotR64(w3, 19) XOR w3 >> 6);
		t = b + 0x5cb0a9dcbd41fbd4ULL + w6 + (a XOR g & (h XOR a)) +
		    (verse_rotR64(g, 41) XOR verse_rotR64(g, 18) XOR
		     verse_rotR64(g, 14));
		f += t;
		b = t +
		    (verse_rotR64(c, 39) XOR verse_rotR64(c, 34) XOR
		     verse_rotR64(c, 28)) + (c & d | e & (d | c));
		w6 +=
		    w15 +
		    (verse_rotR64(w7, 8) XOR verse_rotR64(w7, 1) XOR w7 >> 7) +
		    (verse_rotR64(w4, 61) XOR verse_rotR64(w4, 19) XOR w4 >> 6);
		t = a + 0x76f988da831153b5ULL + w7 + (h XOR f & (g XOR h)) +
		    (verse_rotR64(f, 41) XOR verse_rotR64(f, 18) XOR
		     verse_rotR64(f, 14));
		e += t;
		a = t +
		    (verse_rotR64(b, 39) XOR verse_rotR64(b, 34) XOR
		     verse_rotR64(b, 28)) + (b & c | d & (c | b));
		w7 +=
		    w0 +
		    (verse_rotR64(w8, 8) XOR verse_rotR64(w8, 1) XOR w8 >> 7) +
		    (verse_rotR64(w5, 61) XOR verse_rotR64(w5, 19) XOR w5 >> 6);
		t = h + 0x983e5152ee66dfabULL + w8 + (g XOR e & (f XOR g)) +
		    (verse_rotR64(e, 41) XOR verse_rotR64(e, 18) XOR
		     verse_rotR64(e, 14));
		d += t;
		h = t +
		    (verse_rotR64(a, 39) XOR verse_rotR64(a, 34) XOR
		     verse_rotR64(a, 28)) + (a & b | c & (b | a));
		w8 +=
		    w1 +
		    (verse_rotR64(w9, 8) XOR verse_rotR64(w9, 1) XOR w9 >> 7) +
		    (verse_rotR64(w6, 61) XOR verse_rotR64(w6, 19) XOR w6 >> 6);
		t = g + 0xa831c66d2db43210ULL + w9 + (f XOR d & (e XOR f)) +
		    (verse_rotR64(d, 41) XOR verse_rotR64(d, 18) XOR
		     verse_rotR64(d, 14));
		c += t;
		g = t +
		    (verse_rotR64(h, 39) XOR verse_rotR64(h, 34) XOR
		     verse_rotR64(h, 28)) + (h & a | b & (a | h));
		w9 +=
		    w2 +
		    (verse_rotR64(w10, 8) XOR verse_rotR64(w10, 1) XOR w10 >> 7)
		    +
		    (verse_rotR64(w7, 61) XOR verse_rotR64(w7, 19) XOR w7 >> 6);
		t = f + 0xb00327c898fb213fULL + w10 + (e XOR c & (d XOR e)) +
		    (verse_rotR64(c, 41) XOR verse_rotR64(c, 18) XOR
		     verse_rotR64(c, 14));
		b += t;
		f = t +
		    (verse_rotR64(g, 39) XOR verse_rotR64(g, 34) XOR
		     verse_rotR64(g, 28)) + (g & h | a & (h | g));
		w10 +=
		    w3 +
		    (verse_rotR64(w11, 8) XOR verse_rotR64(w11, 1) XOR w11 >> 7)
		    +
		    (verse_rotR64(w8, 61) XOR verse_rotR64(w8, 19) XOR w8 >> 6);
		t = e + 0xbf597fc7beef0ee4ULL + w11 + (d XOR b & (c XOR d)) +
		    (verse_rotR64(b, 41) XOR verse_rotR64(b, 18) XOR
		     verse_rotR64(b, 14));
		a += t;
		e = t +
		    (verse_rotR64(f, 39) XOR verse_rotR64(f, 34) XOR
		     verse_rotR64(f, 28)) + (f & g | h & (g | f));
		w11 +=
		    w4 +
		    (verse_rotR64(w12, 8) XOR verse_rotR64(w12, 1) XOR w12 >> 7)
		    +
		    (verse_rotR64(w9, 61) XOR verse_rotR64(w9, 19) XOR w9 >> 6);
		t = d + 0xc6e00bf33da88fc2ULL + w12 + (c XOR a & (b XOR c)) +
		    (verse_rotR64(a, 41) XOR verse_rotR64(a, 18) XOR
		     verse_rotR64(a, 14));
		h += t;
		d = t +
		    (verse_rotR64(e, 39) XOR verse_rotR64(e, 34) XOR
		     verse_rotR64(e, 28)) + (e & f | g & (f | e));
		w12 +=
		    w5 +
		    (verse_rotR64(w13, 8) XOR verse_rotR64(w13, 1) XOR w13 >> 7)
		    +
		    (verse_rotR64(w10, 61) XOR verse_rotR64(w10, 19) XOR w10 >>
		     6);
		t = c + 0xd5a79147930aa725ULL + w13 + (b XOR h & (a XOR b)) +
		    (verse_rotR64(h, 41) XOR verse_rotR64(h, 18) XOR
		     verse_rotR64(h, 14));
		g += t;
		c = t +
		    (verse_rotR64(d, 39) XOR verse_rotR64(d, 34) XOR
		     verse_rotR64(d, 28)) + (d & e | f & (e | d));
		w13 +=
		    w6 +
		    (verse_rotR64(w14, 8) XOR verse_rotR64(w14, 1) XOR w14 >> 7)
		    +
		    (verse_rotR64(w11, 61) XOR verse_rotR64(w11, 19) XOR w11 >>
		     6);
		t = b + 0x06ca6351e003826fULL + w14 + (a XOR g & (h XOR a)) +
		    (verse_rotR64(g, 41) XOR verse_rotR64(g, 18) XOR
		     verse_rotR64(g, 14));
		f += t;
		b = t +
		    (verse_rotR64(c, 39) XOR verse_rotR64(c, 34) XOR
		     verse_rotR64(c, 28)) + (c & d | e & (d | c));
		w14 +=
		    w7 +
		    (verse_rotR64(w15, 8) XOR verse_rotR64(w15, 1) XOR w15 >> 7)
		    +
		    (verse_rotR64(w12, 61) XOR verse_rotR64(w12, 19) XOR w12 >>
		     6);
		t = a + 0x142929670a0e6e70ULL + w15 + (h XOR f & (g XOR h)) +
		    (verse_rotR64(f, 41) XOR verse_rotR64(f, 18) XOR
		     verse_rotR64(f, 14));
		e += t;
		a = t +
		    (verse_rotR64(b, 39) XOR verse_rotR64(b, 34) XOR
		     verse_rotR64(b, 28)) + (b & c | d & (c | b));
		w15 +=
		    w8 +
		    (verse_rotR64(w0, 8) XOR verse_rotR64(w0, 1) XOR w0 >> 7) +
		    (verse_rotR64(w13, 61) XOR verse_rotR64(w13, 19) XOR w13 >>
		     6);
		t = h + 0x27b70a8546d22ffcULL + w0 + (g XOR e & (f XOR g)) +
		    (verse_rotR64(e, 41) XOR verse_rotR64(e, 18) XOR
		     verse_rotR64(e, 14));
		d += t;
		h = t +
		    (verse_rotR64(a, 39) XOR verse_rotR64(a, 34) XOR
		     verse_rotR64(a, 28)) + (a & b | c & (b | a));
		w0 +=
		    w9 +
		    (verse_rotR64(w1, 8) XOR verse_rotR64(w1, 1) XOR w1 >> 7) +
		    (verse_rotR64(w14, 61) XOR verse_rotR64(w14, 19) XOR w14 >>
		     6);
		t = g + 0x2e1b21385c26c926ULL + w1 + (f XOR d & (e XOR f)) +
		    (verse_rotR64(d, 41) XOR verse_rotR64(d, 18) XOR
		     verse_rotR64(d, 14));
		c += t;
		g = t +
		    (verse_rotR64(h, 39) XOR verse_rotR64(h, 34) XOR
		     verse_rotR64(h, 28)) + (h & a | b & (a | h));
		w1 +=
		    w10 +
		    (verse_rotR64(w2, 8) XOR verse_rotR64(w2, 1) XOR w2 >> 7) +
		    (verse_rotR64(w15, 61) XOR verse_rotR64(w15, 19) XOR w15 >>
		     6);
		t = f + 0x4d2c6dfc5ac42aedULL + w2 + (e XOR c & (d XOR e)) +
		    (verse_rotR64(c, 41) XOR verse_rotR64(c, 18) XOR
		     verse_rotR64(c, 14));
		b += t;
		f = t +
		    (verse_rotR64(g, 39) XOR verse_rotR64(g, 34) XOR
		     verse_rotR64(g, 28)) + (g & h | a & (h | g));
		w2 +=
		    w11 +
		    (verse_rotR64(w3, 8) XOR verse_rotR64(w3, 1) XOR w3 >> 7) +
		    (verse_rotR64(w0, 61) XOR verse_rotR64(w0, 19) XOR w0 >> 6);
		t = e + 0x53380d139d95b3dfULL + w3 + (d XOR b & (c XOR d)) +
		    (verse_rotR64(b, 41) XOR verse_rotR64(b, 18) XOR
		     verse_rotR64(b, 14));
		a += t;
		e = t +
		    (verse_rotR64(f, 39) XOR verse_rotR64(f, 34) XOR
		     verse_rotR64(f, 28)) + (f & g | h & (g | f));
		w3 +=
		    w12 +
		    (verse_rotR64(w4, 8) XOR verse_rotR64(w4, 1) XOR w4 >> 7) +
		    (verse_rotR64(w1, 61) XOR verse_rotR64(w1, 19) XOR w1 >> 6);
		t = d + 0x650a73548baf63deULL + w4 + (c XOR a & (b XOR c)) +
		    (verse_rotR64(a, 41) XOR verse_rotR64(a, 18) XOR
		     verse_rotR64(a, 14));
		h += t;
		d = t +
		    (verse_rotR64(e, 39) XOR verse_rotR64(e, 34) XOR
		     verse_rotR64(e, 28)) + (e & f | g & (f | e));
		w4 +=
		    w13 +
		    (verse_rotR64(w5, 8) XOR verse_rotR64(w5, 1) XOR w5 >> 7) +
		    (verse_rotR64(w2, 61) XOR verse_rotR64(w2, 19) XOR w2 >> 6);
		t = c + 0x766a0abb3c77b2a8ULL + w5 + (b XOR h & (a XOR b)) +
		    (verse_rotR64(h, 41) XOR verse_rotR64(h, 18) XOR
		     verse_rotR64(h, 14));
		g += t;
		c = t +
		    (verse_rotR64(d, 39) XOR verse_rotR64(d, 34) XOR
		     verse_rotR64(d, 28)) + (d & e | f & (e | d));
		w5 +=
		    w14 +
		    (verse_rotR64(w6, 8) XOR verse_rotR64(w6, 1) XOR w6 >> 7) +
		    (verse_rotR64(w3, 61) XOR verse_rotR64(w3, 19) XOR w3 >> 6);
		t = b + 0x81c2c92e47edaee6ULL + w6 + (a XOR g & (h XOR a)) +
		    (verse_rotR64(g, 41) XOR verse_rotR64(g, 18) XOR
		     verse_rotR64(g, 14));
		f += t;
		b = t +
		    (verse_rotR64(c, 39) XOR verse_rotR64(c, 34) XOR
		     verse_rotR64(c, 28)) + (c & d | e & (d | c));
		w6 +=
		    w15 +
		    (verse_rotR64(w7, 8) XOR verse_rotR64(w7, 1) XOR w7 >> 7) +
		    (verse_rotR64(w4, 61) XOR verse_rotR64(w4, 19) XOR w4 >> 6);
		t = a + 0x92722c851482353bULL + w7 + (h XOR f & (g XOR h)) +
		    (verse_rotR64(f, 41) XOR verse_rotR64(f, 18) XOR
		     verse_rotR64(f, 14));
		e += t;
		a = t +
		    (verse_rotR64(b, 39) XOR verse_rotR64(b, 34) XOR
		     verse_rotR64(b, 28)) + (b & c | d & (c | b));
		w7 +=
		    w0 +
		    (verse_rotR64(w8, 8) XOR verse_rotR64(w8, 1) XOR w8 >> 7) +
		    (verse_rotR64(w5, 61) XOR verse_rotR64(w5, 19) XOR w5 >> 6);
		t = h + 0xa2bfe8a14cf10364ULL + w8 + (g XOR e & (f XOR g)) +
		    (verse_rotR64(e, 41) XOR verse_rotR64(e, 18) XOR
		     verse_rotR64(e, 14));
		d += t;
		h = t +
		    (verse_rotR64(a, 39) XOR verse_rotR64(a, 34) XOR
		     verse_rotR64(a, 28)) + (a & b | c & (b | a));
		w8 +=
		    w1 +
		    (verse_rotR64(w9, 8) XOR verse_rotR64(w9, 1) XOR w9 >> 7) +
		    (verse_rotR64(w6, 61) XOR verse_rotR64(w6, 19) XOR w6 >> 6);
		t = g + 0xa81a664bbc423001ULL + w9 + (f XOR d & (e XOR f)) +
		    (verse_rotR64(d, 41) XOR verse_rotR64(d, 18) XOR
		     verse_rotR64(d, 14));
		c += t;
		g = t +
		    (verse_rotR64(h, 39) XOR verse_rotR64(h, 34) XOR
		     verse_rotR64(h, 28)) + (h & a | b & (a | h));
		w9 +=
		    w2 +
		    (verse_rotR64(w10, 8) XOR verse_rotR64(w10, 1) XOR w10 >> 7)
		    +
		    (verse_rotR64(w7, 61) XOR verse_rotR64(w7, 19) XOR w7 >> 6);
		t = f + 0xc24b8b70d0f89791ULL + w10 + (e XOR c & (d XOR e)) +
		    (verse_rotR64(c, 41) XOR verse_rotR64(c, 18) XOR
		     verse_rotR64(c, 14));
		b += t;
		f = t +
		    (verse_rotR64(g, 39) XOR verse_rotR64(g, 34) XOR
		     verse_rotR64(g, 28)) + (g & h | a & (h | g));
		w10 +=
		    w3 +
		    (verse_rotR64(w11, 8) XOR verse_rotR64(w11, 1) XOR w11 >> 7)
		    +
		    (verse_rotR64(w8, 61) XOR verse_rotR64(w8, 19) XOR w8 >> 6);
		t = e + 0xc76c51a30654be30ULL + w11 + (d XOR b & (c XOR d)) +
		    (verse_rotR64(b, 41) XOR verse_rotR64(b, 18) XOR
		     verse_rotR64(b, 14));
		a += t;
		e = t +
		    (verse_rotR64(f, 39) XOR verse_rotR64(f, 34) XOR
		     verse_rotR64(f, 28)) + (f & g | h & (g | f));
		w11 +=
		    w4 +
		    (verse_rotR64(w12, 8) XOR verse_rotR64(w12, 1) XOR w12 >> 7)
		    +
		    (verse_rotR64(w9, 61) XOR verse_rotR64(w9, 19) XOR w9 >> 6);
		t = d + 0xd192e819d6ef5218ULL + w12 + (c XOR a & (b XOR c)) +
		    (verse_rotR64(a, 41) XOR verse_rotR64(a, 18) XOR
		     verse_rotR64(a, 14));
		h += t;
		d = t +
		    (verse_rotR64(e, 39) XOR verse_rotR64(e, 34) XOR
		     verse_rotR64(e, 28)) + (e & f | g & (f | e));
		w12 +=
		    w5 +
		    (verse_rotR64(w13, 8) XOR verse_rotR64(w13, 1) XOR w13 >> 7)
		    +
		    (verse_rotR64(w10, 61) XOR verse_rotR64(w10, 19) XOR w10 >>
		     6);
		t = c + 0xd69906245565a910ULL + w13 + (b XOR h & (a XOR b)) +
		    (verse_rotR64(h, 41) XOR verse_rotR64(h, 18) XOR
		     verse_rotR64(h, 14));
		g += t;
		c = t +
		    (verse_rotR64(d, 39) XOR verse_rotR64(d, 34) XOR
		     verse_rotR64(d, 28)) + (d & e | f & (e | d));
		w13 +=
		    w6 +
		    (verse_rotR64(w14, 8) XOR verse_rotR64(w14, 1) XOR w14 >> 7)
		    +
		    (verse_rotR64(w11, 61) XOR verse_rotR64(w11, 19) XOR w11 >>
		     6);
		t = b + 0xf40e35855771202aULL + w14 + (a XOR g & (h XOR a)) +
		    (verse_rotR64(g, 41) XOR verse_rotR64(g, 18) XOR
		     verse_rotR64(g, 14));
		f += t;
		b = t +
		    (verse_rotR64(c, 39) XOR verse_rotR64(c, 34) XOR
		     verse_rotR64(c, 28)) + (c & d | e & (d | c));
		w14 +=
		    w7 +
		    (verse_rotR64(w15, 8) XOR verse_rotR64(w15, 1) XOR w15 >> 7)
		    +
		    (verse_rotR64(w12, 61) XOR verse_rotR64(w12, 19) XOR w12 >>
		     6);
		t = a + 0x106aa07032bbd1b8ULL + w15 + (h XOR f & (g XOR h)) +
		    (verse_rotR64(f, 41) XOR verse_rotR64(f, 18) XOR
		     verse_rotR64(f, 14));
		e += t;
		a = t +
		    (verse_rotR64(b, 39) XOR verse_rotR64(b, 34) XOR
		     verse_rotR64(b, 28)) + (b & c | d & (c | b));
		w15 +=
		    w8 +
		    (verse_rotR64(w0, 8) XOR verse_rotR64(w0, 1) XOR w0 >> 7) +
		    (verse_rotR64(w13, 61) XOR verse_rotR64(w13, 19) XOR w13 >>
		     6);
		t = h + 0x19a4c116b8d2d0c8ULL + w0 + (g XOR e & (f XOR g)) +
		    (verse_rotR64(e, 41) XOR verse_rotR64(e, 18) XOR
		     verse_rotR64(e, 14));
		d += t;
		h = t +
		    (verse_rotR64(a, 39) XOR verse_rotR64(a, 34) XOR
		     verse_rotR64(a, 28)) + (a & b | c & (b | a));
		w0 +=
		    w9 +
		    (verse_rotR64(w1, 8) XOR verse_rotR64(w1, 1) XOR w1 >> 7) +
		    (verse_rotR64(w14, 61) XOR verse_rotR64(w14, 19) XOR w14 >>
		     6);
		t = g + 0x1e376c085141ab53ULL + w1 + (f XOR d & (e XOR f)) +
		    (verse_rotR64(d, 41) XOR verse_rotR64(d, 18) XOR
		     verse_rotR64(d, 14));
		c += t;
		g = t +
		    (verse_rotR64(h, 39) XOR verse_rotR64(h, 34) XOR
		     verse_rotR64(h, 28)) + (h & a | b & (a | h));
		w1 +=
		    w10 +
		    (verse_rotR64(w2, 8) XOR verse_rotR64(w2, 1) XOR w2 >> 7) +
		    (verse_rotR64(w15, 61) XOR verse_rotR64(w15, 19) XOR w15 >>
		     6);
		t = f + 0x2748774cdf8eeb99ULL + w2 + (e XOR c & (d XOR e)) +
		    (verse_rotR64(c, 41) XOR verse_rotR64(c, 18) XOR
		     verse_rotR64(c, 14));
		b += t;
		f = t +
		    (verse_rotR64(g, 39) XOR verse_rotR64(g, 34) XOR
		     verse_rotR64(g, 28)) + (g & h | a & (h | g));
		w2 +=
		    w11 +
		    (verse_rotR64(w3, 8) XOR verse_rotR64(w3, 1) XOR w3 >> 7) +
		    (verse_rotR64(w0, 61) XOR verse_rotR64(w0, 19) XOR w0 >> 6);
		t = e + 0x34b0bcb5e19b48a8ULL + w3 + (d XOR b & (c XOR d)) +
		    (verse_rotR64(b, 41) XOR verse_rotR64(b, 18) XOR
		     verse_rotR64(b, 14));
		a += t;
		e = t +
		    (verse_rotR64(f, 39) XOR verse_rotR64(f, 34) XOR
		     verse_rotR64(f, 28)) + (f & g | h & (g | f));
		w3 +=
		    w12 +
		    (verse_rotR64(w4, 8) XOR verse_rotR64(w4, 1) XOR w4 >> 7) +
		    (verse_rotR64(w1, 61) XOR verse_rotR64(w1, 19) XOR w1 >> 6);
		t = d + 0x391c0cb3c5c95a63ULL + w4 + (c XOR a & (b XOR c)) +
		    (verse_rotR64(a, 41) XOR verse_rotR64(a, 18) XOR
		     verse_rotR64(a, 14));
		h += t;
		d = t +
		    (verse_rotR64(e, 39) XOR verse_rotR64(e, 34) XOR
		     verse_rotR64(e, 28)) + (e & f | g & (f | e));
		w4 +=
		    w13 +
		    (verse_rotR64(w5, 8) XOR verse_rotR64(w5, 1) XOR w5 >> 7) +
		    (verse_rotR64(w2, 61) XOR verse_rotR64(w2, 19) XOR w2 >> 6);
		t = c + 0x4ed8aa4ae3418acbULL + w5 + (b XOR h & (a XOR b)) +
		    (verse_rotR64(h, 41) XOR verse_rotR64(h, 18) XOR
		     verse_rotR64(h, 14));
		g += t;
		c = t +
		    (verse_rotR64(d, 39) XOR verse_rotR64(d, 34) XOR
		     verse_rotR64(d, 28)) + (d & e | f & (e | d));
		w5 +=
		    w14 +
		    (verse_rotR64(w6, 8) XOR verse_rotR64(w6, 1) XOR w6 >> 7) +
		    (verse_rotR64(w3, 61) XOR verse_rotR64(w3, 19) XOR w3 >> 6);
		t = b + 0x5b9cca4f7763e373ULL + w6 + (a XOR g & (h XOR a)) +
		    (verse_rotR64(g, 41) XOR verse_rotR64(g, 18) XOR
		     verse_rotR64(g, 14));
		f += t;
		b = t +
		    (verse_rotR64(c, 39) XOR verse_rotR64(c, 34) XOR
		     verse_rotR64(c, 28)) + (c & d | e & (d | c));
		w6 +=
		    w15 +
		    (verse_rotR64(w7, 8) XOR verse_rotR64(w7, 1) XOR w7 >> 7) +
		    (verse_rotR64(w4, 61) XOR verse_rotR64(w4, 19) XOR w4 >> 6);
		t = a + 0x682e6ff3d6b2b8a3ULL + w7 + (h XOR f & (g XOR h)) +
		    (verse_rotR64(f, 41) XOR verse_rotR64(f, 18) XOR
		     verse_rotR64(f, 14));
		e += t;
		a = t +
		    (verse_rotR64(b, 39) XOR verse_rotR64(b, 34) XOR
		     verse_rotR64(b, 28)) + (b & c | d & (c | b));
		w7 +=
		    w0 +
		    (verse_rotR64(w8, 8) XOR verse_rotR64(w8, 1) XOR w8 >> 7) +
		    (verse_rotR64(w5, 61) XOR verse_rotR64(w5, 19) XOR w5 >> 6);
		t = h + 0x748f82ee5defb2fcULL + w8 + (g XOR e & (f XOR g)) +
		    (verse_rotR64(e, 41) XOR verse_rotR64(e, 18) XOR
		     verse_rotR64(e, 14));
		d += t;
		h = t +
		    (verse_rotR64(a, 39) XOR verse_rotR64(a, 34) XOR
		     verse_rotR64(a, 28)) + (a & b | c & (b | a));
		w8 +=
		    w1 +
		    (verse_rotR64(w9, 8) XOR verse_rotR64(w9, 1) XOR w9 >> 7) +
		    (verse_rotR64(w6, 61) XOR verse_rotR64(w6, 19) XOR w6 >> 6);
		t = g + 0x78a5636f43172f60ULL + w9 + (f XOR d & (e XOR f)) +
		    (verse_rotR64(d, 41) XOR verse_rotR64(d, 18) XOR
		     verse_rotR64(d, 14));
		c += t;
		g = t +
		    (verse_rotR64(h, 39) XOR verse_rotR64(h, 34) XOR
		     verse_rotR64(h, 28)) + (h & a | b & (a | h));
		w9 +=
		    w2 +
		    (verse_rotR64(w10, 8) XOR verse_rotR64(w10, 1) XOR w10 >> 7)
		    +
		    (verse_rotR64(w7, 61) XOR verse_rotR64(w7, 19) XOR w7 >> 6);
		t = f + 0x84c87814a1f0ab72ULL + w10 + (e XOR c & (d XOR e)) +
		    (verse_rotR64(c, 41) XOR verse_rotR64(c, 18) XOR
		     verse_rotR64(c, 14));
		b += t;
		f = t +
		    (verse_rotR64(g, 39) XOR verse_rotR64(g, 34) XOR
		     verse_rotR64(g, 28)) + (g & h | a & (h | g));
		w10 +=
		    w3 +
		    (verse_rotR64(w11, 8) XOR verse_rotR64(w11, 1) XOR w11 >> 7)
		    +
		    (verse_rotR64(w8, 61) XOR verse_rotR64(w8, 19) XOR w8 >> 6);
		t = e + 0x8cc702081a6439ecULL + w11 + (d XOR b & (c XOR d)) +
		    (verse_rotR64(b, 41) XOR verse_rotR64(b, 18) XOR
		     verse_rotR64(b, 14));
		a += t;
		e = t +
		    (verse_rotR64(f, 39) XOR verse_rotR64(f, 34) XOR
		     verse_rotR64(f, 28)) + (f & g | h & (g | f));
		w11 +=
		    w4 +
		    (verse_rotR64(w12, 8) XOR verse_rotR64(w12, 1) XOR w12 >> 7)
		    +
		    (verse_rotR64(w9, 61) XOR verse_rotR64(w9, 19) XOR w9 >> 6);
		t = d + 0x90befffa23631e28ULL + w12 + (c XOR a & (b XOR c)) +
		    (verse_rotR64(a, 41) XOR verse_rotR64(a, 18) XOR
		     verse_rotR64(a, 14));
		h += t;
		d = t +
		    (verse_rotR64(e, 39) XOR verse_rotR64(e, 34) XOR
		     verse_rotR64(e, 28)) + (e & f | g & (f | e));
		w12 +=
		    w5 +
		    (verse_rotR64(w13, 8) XOR verse_rotR64(w13, 1) XOR w13 >> 7)
		    +
		    (verse_rotR64(w10, 61) XOR verse_rotR64(w10, 19) XOR w10 >>
		     6);
		t = c + 0xa4506cebde82bde9ULL + w13 + (b XOR h & (a XOR b)) +
		    (verse_rotR64(h, 41) XOR verse_rotR64(h, 18) XOR
		     verse_rotR64(h, 14));
		g += t;
		c = t +
		    (verse_rotR64(d, 39) XOR verse_rotR64(d, 34) XOR
		     verse_rotR64(d, 28)) + (d & e | f & (e | d));
		w13 +=
		    w6 +
		    (verse_rotR64(w14, 8) XOR verse_rotR64(w14, 1) XOR w14 >> 7)
		    +
		    (verse_rotR64(w11, 61) XOR verse_rotR64(w11, 19) XOR w11 >>
		     6);
		t = b + 0xbef9a3f7b2c67915ULL + w14 + (a XOR g & (h XOR a)) +
		    (verse_rotR64(g, 41) XOR verse_rotR64(g, 18) XOR
		     verse_rotR64(g, 14));
		f += t;
		b = t +
		    (verse_rotR64(c, 39) XOR verse_rotR64(c, 34) XOR
		     verse_rotR64(c, 28)) + (c & d | e & (d | c));
		w14 +=
		    w7 +
		    (verse_rotR64(w15, 8) XOR verse_rotR64(w15, 1) XOR w15 >> 7)
		    +
		    (verse_rotR64(w12, 61) XOR verse_rotR64(w12, 19) XOR w12 >>
		     6);
		t = a + 0xc67178f2e372532bULL + w15 + (h XOR f & (g XOR h)) +
		    (verse_rotR64(f, 41) XOR verse_rotR64(f, 18) XOR
		     verse_rotR64(f, 14));
		e += t;
		a = t +
		    (verse_rotR64(b, 39) XOR verse_rotR64(b, 34) XOR
		     verse_rotR64(b, 28)) + (b & c | d & (c | b));
		w15 +=
		    w8 +
		    (verse_rotR64(w0, 8) XOR verse_rotR64(w0, 1) XOR w0 >> 7) +
		    (verse_rotR64(w13, 61) XOR verse_rotR64(w13, 19) XOR w13 >>
		     6);
		t = h + 0xca273eceea26619cULL + w0 + (g XOR e & (f XOR g)) +
		    (verse_rotR64(e, 41) XOR verse_rotR64(e, 18) XOR
		     verse_rotR64(e, 14));
		d += t;
		h = t +
		    (verse_rotR64(a, 39) XOR verse_rotR64(a, 34) XOR
		     verse_rotR64(a, 28)) + (a & b | c & (b | a));
		t = g + 0xd186b8c721c0c207ULL + w1 + (f XOR d & (e XOR f)) +
		    (verse_rotR64(d, 41) XOR verse_rotR64(d, 18) XOR
		     verse_rotR64(d, 14));
		c += t;
		g = t +
		    (verse_rotR64(h, 39) XOR verse_rotR64(h, 34) XOR
		     verse_rotR64(h, 28)) + (h & a | b & (a | h));
		t = f + 0xeada7dd6cde0eb1eULL + w2 + (e XOR c & (d XOR e)) +
		    (verse_rotR64(c, 41) XOR verse_rotR64(c, 18) XOR
		     verse_rotR64(c, 14));
		b += t;
		f = t +
		    (verse_rotR64(g, 39) XOR verse_rotR64(g, 34) XOR
		     verse_rotR64(g, 28)) + (g & h | a & (h | g));
		t = e + 0xf57d4f7fee6ed178ULL + w3 + (d XOR b & (c XOR d)) +
		    (verse_rotR64(b, 41) XOR verse_rotR64(b, 18) XOR
		     verse_rotR64(b, 14));
		a += t;
		e = t +
		    (verse_rotR64(f, 39) XOR verse_rotR64(f, 34) XOR
		     verse_rotR64(f, 28)) + (f & g | h & (g | f));
		t = d + 0x06f067aa72176fbaULL + w4 + (c XOR a & (b XOR c)) +
		    (verse_rotR64(a, 41) XOR verse_rotR64(a, 18) XOR
		     verse_rotR64(a, 14));
		h += t;
		d = t +
		    (verse_rotR64(e, 39) XOR verse_rotR64(e, 34) XOR
		     verse_rotR64(e, 28)) + (e & f | g & (f | e));
		t = c + 0x0a637dc5a2c898a6ULL + w5 + (b XOR h & (a XOR b)) +
		    (verse_rotR64(h, 41) XOR verse_rotR64(h, 18) XOR
		     verse_rotR64(h, 14));
		g += t;
		c = t +
		    (verse_rotR64(d, 39) XOR verse_rotR64(d, 34) XOR
		     verse_rotR64(d, 28)) + (d & e | f & (e | d));
		t = b + 0x113f9804bef90daeULL + w6 + (a XOR g & (h XOR a)) +
		    (verse_rotR64(g, 41) XOR verse_rotR64(g, 18) XOR
		     verse_rotR64(g, 14));
		f += t;
		b = t +
		    (verse_rotR64(c, 39) XOR verse_rotR64(c, 34) XOR
		     verse_rotR64(c, 28)) + (c & d | e & (d | c));
		t = a + 0x1b710b35131c471bULL + w7 + (h XOR f & (g XOR h)) +
		    (verse_rotR64(f, 41) XOR verse_rotR64(f, 18) XOR
		     verse_rotR64(f, 14));
		e += t;
		a = t +
		    (verse_rotR64(b, 39) XOR verse_rotR64(b, 34) XOR
		     verse_rotR64(b, 28)) + (b & c | d & (c | b));
		t = h + 0x28db77f523047d84ULL + w8 + (g XOR e & (f XOR g)) +
		    (verse_rotR64(e, 41) XOR verse_rotR64(e, 18) XOR
		     verse_rotR64(e, 14));
		d += t;
		h = t +
		    (verse_rotR64(a, 39) XOR verse_rotR64(a, 34) XOR
		     verse_rotR64(a, 28)) + (a & b | c & (b | a));
		t = g + 0x32caab7b40c72493ULL + w9 + (f XOR d & (e XOR f)) +
		    (verse_rotR64(d, 41) XOR verse_rotR64(d, 18) XOR
		     verse_rotR64(d, 14));
		c += t;
		g = t +
		    (verse_rotR64(h, 39) XOR verse_rotR64(h, 34) XOR
		     verse_rotR64(h, 28)) + (h & a | b & (a | h));
		t = f + 0x3c9ebe0a15c9bebcULL + w10 + (e XOR c & (d XOR e)) +
		    (verse_rotR64(c, 41) XOR verse_rotR64(c, 18) XOR
		     verse_rotR64(c, 14));
		b += t;
		f = t +
		    (verse_rotR64(g, 39) XOR verse_rotR64(g, 34) XOR
		     verse_rotR64(g, 28)) + (g & h | a & (h | g));
		t = e + 0x431d67c49c100d4cULL + w11 + (d XOR b & (c XOR d)) +
		    (verse_rotR64(b, 41) XOR verse_rotR64(b, 18) XOR
		     verse_rotR64(b, 14));
		a += t;
		e = t +
		    (verse_rotR64(f, 39) XOR verse_rotR64(f, 34) XOR
		     verse_rotR64(f, 28)) + (f & g | h & (g | f));
		t = d + 0x4cc5d4becb3e42b6ULL + w12 + (c XOR a & (b XOR c)) +
		    (verse_rotR64(a, 41) XOR verse_rotR64(a, 18) XOR
		     verse_rotR64(a, 14));
		h += t;
		d = t +
		    (verse_rotR64(e, 39) XOR verse_rotR64(e, 34) XOR
		     verse_rotR64(e, 28)) + (e & f | g & (f | e));
		t = c + 0x597f299cfc657e2aULL + w13 + (b XOR h & (a XOR b)) +
		    (verse_rotR64(h, 41) XOR verse_rotR64(h, 18) XOR
		     verse_rotR64(h, 14));
		g += t;
		c = t +
		    (verse_rotR64(d, 39) XOR verse_rotR64(d, 34) XOR
		     verse_rotR64(d, 28)) + (d & e | f & (e | d));
		t = b + 0x5fcb6fab3ad6faecULL + w14 + (a XOR g & (h XOR a)) +
		    (verse_rotR64(g, 41) XOR verse_rotR64(g, 18) XOR
		     verse_rotR64(g, 14));
		f += t;
		b = t +
		    (verse_rotR64(c, 39) XOR verse_rotR64(c, 34) XOR
		     verse_rotR64(c, 28)) + (c & d | e & (d | c));
		t = a + 0x6c44198c4a475817ULL + w15 + (h XOR f & (g XOR h)) +
		    (verse_rotR64(f, 41) XOR verse_rotR64(f, 18) XOR
		     verse_rotR64(f, 14));
		e += t;
		a = t +
		    (verse_rotR64(b, 39) XOR verse_rotR64(b, 34) XOR
		     verse_rotR64(b, 28)) + (b & c | d & (c | b));
		a += hash[0];
		b += hash[1];
		c += hash[2];
		d += hash[3];
		e += hash[4];
		f += hash[5];
		g += hash[6];
		h += hash[7];
		hash[0] = a;
		hash[1] = b;
		hash[2] = c;
		hash[3] = d;
		hash[4] = e;
		hash[5] = f;
		hash[6] = g;
		hash[7] = h;
		++blockPtr;
		--nBlocks;
	};
}
