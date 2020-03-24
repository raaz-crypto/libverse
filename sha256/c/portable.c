#include <stdint.h>
#include <verse.h>
#define XOR ^
void verse_sha256_c_portable(uint32_t(*blockPtr)[16],
			     uint64_t nBlocks, uint32_t hash[8])
{
	auto uint32_t w0;
	auto uint32_t w1;
	auto uint32_t w2;
	auto uint32_t w3;
	auto uint32_t w4;
	auto uint32_t w5;
	auto uint32_t w6;
	auto uint32_t w7;
	auto uint32_t w8;
	auto uint32_t w9;
	auto uint32_t w10;
	auto uint32_t w11;
	auto uint32_t w12;
	auto uint32_t w13;
	auto uint32_t w14;
	auto uint32_t w15;
	auto uint32_t a;
	auto uint32_t b;
	auto uint32_t c;
	auto uint32_t d;
	auto uint32_t e;
	auto uint32_t f;
	auto uint32_t g;
	auto uint32_t h;
	auto uint32_t t;
	a = hash[0];
	b = hash[1];
	c = hash[2];
	d = hash[3];
	e = hash[4];
	f = hash[5];
	g = hash[6];
	h = hash[7];
	while (nBlocks > 0) {
		w0 = verse_from_be32((*blockPtr)[0]);
		w1 = verse_from_be32((*blockPtr)[1]);
		w2 = verse_from_be32((*blockPtr)[2]);
		w3 = verse_from_be32((*blockPtr)[3]);
		w4 = verse_from_be32((*blockPtr)[4]);
		w5 = verse_from_be32((*blockPtr)[5]);
		w6 = verse_from_be32((*blockPtr)[6]);
		w7 = verse_from_be32((*blockPtr)[7]);
		w8 = verse_from_be32((*blockPtr)[8]);
		w9 = verse_from_be32((*blockPtr)[9]);
		w10 = verse_from_be32((*blockPtr)[10]);
		w11 = verse_from_be32((*blockPtr)[11]);
		w12 = verse_from_be32((*blockPtr)[12]);
		w13 = verse_from_be32((*blockPtr)[13]);
		w14 = verse_from_be32((*blockPtr)[14]);
		w15 = verse_from_be32((*blockPtr)[15]);
		t = h + 0x428a2f98UL + w0 + (g XOR e & (f XOR g)) +
		    (verse_rotR32(e, 25) XOR verse_rotR32(e, 11) XOR
		     verse_rotR32(e, 6));
		d += t;
		h = t +
		    (verse_rotR32(a, 22) XOR verse_rotR32(a, 13) XOR
		     verse_rotR32(a, 2)) + (a & b | c & (b | a));
		w0 +=
		    w9 +
		    (verse_rotR32(w1, 18) XOR verse_rotR32(w1, 7) XOR w1 >> 3) +
		    (verse_rotR32(w14, 19) XOR verse_rotR32(w14, 17) XOR w14 >>
		     10);
		t = g + 0x71374491UL + w1 + (f XOR d & (e XOR f)) +
		    (verse_rotR32(d, 25) XOR verse_rotR32(d, 11) XOR
		     verse_rotR32(d, 6));
		c += t;
		g = t +
		    (verse_rotR32(h, 22) XOR verse_rotR32(h, 13) XOR
		     verse_rotR32(h, 2)) + (h & a | b & (a | h));
		w1 +=
		    w10 +
		    (verse_rotR32(w2, 18) XOR verse_rotR32(w2, 7) XOR w2 >> 3) +
		    (verse_rotR32(w15, 19) XOR verse_rotR32(w15, 17) XOR w15 >>
		     10);
		t = f + 0xb5c0fbcfUL + w2 + (e XOR c & (d XOR e)) +
		    (verse_rotR32(c, 25) XOR verse_rotR32(c, 11) XOR
		     verse_rotR32(c, 6));
		b += t;
		f = t +
		    (verse_rotR32(g, 22) XOR verse_rotR32(g, 13) XOR
		     verse_rotR32(g, 2)) + (g & h | a & (h | g));
		w2 +=
		    w11 +
		    (verse_rotR32(w3, 18) XOR verse_rotR32(w3, 7) XOR w3 >> 3) +
		    (verse_rotR32(w0, 19) XOR verse_rotR32(w0, 17) XOR w0 >>
		     10);
		t = e + 0xe9b5dba5UL + w3 + (d XOR b & (c XOR d)) +
		    (verse_rotR32(b, 25) XOR verse_rotR32(b, 11) XOR
		     verse_rotR32(b, 6));
		a += t;
		e = t +
		    (verse_rotR32(f, 22) XOR verse_rotR32(f, 13) XOR
		     verse_rotR32(f, 2)) + (f & g | h & (g | f));
		w3 +=
		    w12 +
		    (verse_rotR32(w4, 18) XOR verse_rotR32(w4, 7) XOR w4 >> 3) +
		    (verse_rotR32(w1, 19) XOR verse_rotR32(w1, 17) XOR w1 >>
		     10);
		t = d + 0x3956c25bUL + w4 + (c XOR a & (b XOR c)) +
		    (verse_rotR32(a, 25) XOR verse_rotR32(a, 11) XOR
		     verse_rotR32(a, 6));
		h += t;
		d = t +
		    (verse_rotR32(e, 22) XOR verse_rotR32(e, 13) XOR
		     verse_rotR32(e, 2)) + (e & f | g & (f | e));
		w4 +=
		    w13 +
		    (verse_rotR32(w5, 18) XOR verse_rotR32(w5, 7) XOR w5 >> 3) +
		    (verse_rotR32(w2, 19) XOR verse_rotR32(w2, 17) XOR w2 >>
		     10);
		t = c + 0x59f111f1UL + w5 + (b XOR h & (a XOR b)) +
		    (verse_rotR32(h, 25) XOR verse_rotR32(h, 11) XOR
		     verse_rotR32(h, 6));
		g += t;
		c = t +
		    (verse_rotR32(d, 22) XOR verse_rotR32(d, 13) XOR
		     verse_rotR32(d, 2)) + (d & e | f & (e | d));
		w5 +=
		    w14 +
		    (verse_rotR32(w6, 18) XOR verse_rotR32(w6, 7) XOR w6 >> 3) +
		    (verse_rotR32(w3, 19) XOR verse_rotR32(w3, 17) XOR w3 >>
		     10);
		t = b + 0x923f82a4UL + w6 + (a XOR g & (h XOR a)) +
		    (verse_rotR32(g, 25) XOR verse_rotR32(g, 11) XOR
		     verse_rotR32(g, 6));
		f += t;
		b = t +
		    (verse_rotR32(c, 22) XOR verse_rotR32(c, 13) XOR
		     verse_rotR32(c, 2)) + (c & d | e & (d | c));
		w6 +=
		    w15 +
		    (verse_rotR32(w7, 18) XOR verse_rotR32(w7, 7) XOR w7 >> 3) +
		    (verse_rotR32(w4, 19) XOR verse_rotR32(w4, 17) XOR w4 >>
		     10);
		t = a + 0xab1c5ed5UL + w7 + (h XOR f & (g XOR h)) +
		    (verse_rotR32(f, 25) XOR verse_rotR32(f, 11) XOR
		     verse_rotR32(f, 6));
		e += t;
		a = t +
		    (verse_rotR32(b, 22) XOR verse_rotR32(b, 13) XOR
		     verse_rotR32(b, 2)) + (b & c | d & (c | b));
		w7 +=
		    w0 +
		    (verse_rotR32(w8, 18) XOR verse_rotR32(w8, 7) XOR w8 >> 3) +
		    (verse_rotR32(w5, 19) XOR verse_rotR32(w5, 17) XOR w5 >>
		     10);
		t = h + 0xd807aa98UL + w8 + (g XOR e & (f XOR g)) +
		    (verse_rotR32(e, 25) XOR verse_rotR32(e, 11) XOR
		     verse_rotR32(e, 6));
		d += t;
		h = t +
		    (verse_rotR32(a, 22) XOR verse_rotR32(a, 13) XOR
		     verse_rotR32(a, 2)) + (a & b | c & (b | a));
		w8 +=
		    w1 +
		    (verse_rotR32(w9, 18) XOR verse_rotR32(w9, 7) XOR w9 >> 3) +
		    (verse_rotR32(w6, 19) XOR verse_rotR32(w6, 17) XOR w6 >>
		     10);
		t = g + 0x12835b01UL + w9 + (f XOR d & (e XOR f)) +
		    (verse_rotR32(d, 25) XOR verse_rotR32(d, 11) XOR
		     verse_rotR32(d, 6));
		c += t;
		g = t +
		    (verse_rotR32(h, 22) XOR verse_rotR32(h, 13) XOR
		     verse_rotR32(h, 2)) + (h & a | b & (a | h));
		w9 +=
		    w2 +
		    (verse_rotR32(w10, 18) XOR verse_rotR32(w10, 7) XOR w10 >>
		     3) + (verse_rotR32(w7, 19) XOR verse_rotR32(w7,
								 17) XOR w7 >>
			   10);
		t = f + 0x243185beUL + w10 + (e XOR c & (d XOR e)) +
		    (verse_rotR32(c, 25) XOR verse_rotR32(c, 11) XOR
		     verse_rotR32(c, 6));
		b += t;
		f = t +
		    (verse_rotR32(g, 22) XOR verse_rotR32(g, 13) XOR
		     verse_rotR32(g, 2)) + (g & h | a & (h | g));
		w10 +=
		    w3 +
		    (verse_rotR32(w11, 18) XOR verse_rotR32(w11, 7) XOR w11 >>
		     3) + (verse_rotR32(w8, 19) XOR verse_rotR32(w8,
								 17) XOR w8 >>
			   10);
		t = e + 0x550c7dc3UL + w11 + (d XOR b & (c XOR d)) +
		    (verse_rotR32(b, 25) XOR verse_rotR32(b, 11) XOR
		     verse_rotR32(b, 6));
		a += t;
		e = t +
		    (verse_rotR32(f, 22) XOR verse_rotR32(f, 13) XOR
		     verse_rotR32(f, 2)) + (f & g | h & (g | f));
		w11 +=
		    w4 +
		    (verse_rotR32(w12, 18) XOR verse_rotR32(w12, 7) XOR w12 >>
		     3) + (verse_rotR32(w9, 19) XOR verse_rotR32(w9,
								 17) XOR w9 >>
			   10);
		t = d + 0x72be5d74UL + w12 + (c XOR a & (b XOR c)) +
		    (verse_rotR32(a, 25) XOR verse_rotR32(a, 11) XOR
		     verse_rotR32(a, 6));
		h += t;
		d = t +
		    (verse_rotR32(e, 22) XOR verse_rotR32(e, 13) XOR
		     verse_rotR32(e, 2)) + (e & f | g & (f | e));
		w12 +=
		    w5 +
		    (verse_rotR32(w13, 18) XOR verse_rotR32(w13, 7) XOR w13 >>
		     3) + (verse_rotR32(w10, 19) XOR verse_rotR32(w10,
								  17) XOR w10 >>
			   10);
		t = c + 0x80deb1feUL + w13 + (b XOR h & (a XOR b)) +
		    (verse_rotR32(h, 25) XOR verse_rotR32(h, 11) XOR
		     verse_rotR32(h, 6));
		g += t;
		c = t +
		    (verse_rotR32(d, 22) XOR verse_rotR32(d, 13) XOR
		     verse_rotR32(d, 2)) + (d & e | f & (e | d));
		w13 +=
		    w6 +
		    (verse_rotR32(w14, 18) XOR verse_rotR32(w14, 7) XOR w14 >>
		     3) + (verse_rotR32(w11, 19) XOR verse_rotR32(w11,
								  17) XOR w11 >>
			   10);
		t = b + 0x9bdc06a7UL + w14 + (a XOR g & (h XOR a)) +
		    (verse_rotR32(g, 25) XOR verse_rotR32(g, 11) XOR
		     verse_rotR32(g, 6));
		f += t;
		b = t +
		    (verse_rotR32(c, 22) XOR verse_rotR32(c, 13) XOR
		     verse_rotR32(c, 2)) + (c & d | e & (d | c));
		w14 +=
		    w7 +
		    (verse_rotR32(w15, 18) XOR verse_rotR32(w15, 7) XOR w15 >>
		     3) + (verse_rotR32(w12, 19) XOR verse_rotR32(w12,
								  17) XOR w12 >>
			   10);
		t = a + 0xc19bf174UL + w15 + (h XOR f & (g XOR h)) +
		    (verse_rotR32(f, 25) XOR verse_rotR32(f, 11) XOR
		     verse_rotR32(f, 6));
		e += t;
		a = t +
		    (verse_rotR32(b, 22) XOR verse_rotR32(b, 13) XOR
		     verse_rotR32(b, 2)) + (b & c | d & (c | b));
		w15 +=
		    w8 +
		    (verse_rotR32(w0, 18) XOR verse_rotR32(w0, 7) XOR w0 >> 3) +
		    (verse_rotR32(w13, 19) XOR verse_rotR32(w13, 17) XOR w13 >>
		     10);
		t = h + 0xe49b69c1UL + w0 + (g XOR e & (f XOR g)) +
		    (verse_rotR32(e, 25) XOR verse_rotR32(e, 11) XOR
		     verse_rotR32(e, 6));
		d += t;
		h = t +
		    (verse_rotR32(a, 22) XOR verse_rotR32(a, 13) XOR
		     verse_rotR32(a, 2)) + (a & b | c & (b | a));
		w0 +=
		    w9 +
		    (verse_rotR32(w1, 18) XOR verse_rotR32(w1, 7) XOR w1 >> 3) +
		    (verse_rotR32(w14, 19) XOR verse_rotR32(w14, 17) XOR w14 >>
		     10);
		t = g + 0xefbe4786UL + w1 + (f XOR d & (e XOR f)) +
		    (verse_rotR32(d, 25) XOR verse_rotR32(d, 11) XOR
		     verse_rotR32(d, 6));
		c += t;
		g = t +
		    (verse_rotR32(h, 22) XOR verse_rotR32(h, 13) XOR
		     verse_rotR32(h, 2)) + (h & a | b & (a | h));
		w1 +=
		    w10 +
		    (verse_rotR32(w2, 18) XOR verse_rotR32(w2, 7) XOR w2 >> 3) +
		    (verse_rotR32(w15, 19) XOR verse_rotR32(w15, 17) XOR w15 >>
		     10);
		t = f + 0x0fc19dc6UL + w2 + (e XOR c & (d XOR e)) +
		    (verse_rotR32(c, 25) XOR verse_rotR32(c, 11) XOR
		     verse_rotR32(c, 6));
		b += t;
		f = t +
		    (verse_rotR32(g, 22) XOR verse_rotR32(g, 13) XOR
		     verse_rotR32(g, 2)) + (g & h | a & (h | g));
		w2 +=
		    w11 +
		    (verse_rotR32(w3, 18) XOR verse_rotR32(w3, 7) XOR w3 >> 3) +
		    (verse_rotR32(w0, 19) XOR verse_rotR32(w0, 17) XOR w0 >>
		     10);
		t = e + 0x240ca1ccUL + w3 + (d XOR b & (c XOR d)) +
		    (verse_rotR32(b, 25) XOR verse_rotR32(b, 11) XOR
		     verse_rotR32(b, 6));
		a += t;
		e = t +
		    (verse_rotR32(f, 22) XOR verse_rotR32(f, 13) XOR
		     verse_rotR32(f, 2)) + (f & g | h & (g | f));
		w3 +=
		    w12 +
		    (verse_rotR32(w4, 18) XOR verse_rotR32(w4, 7) XOR w4 >> 3) +
		    (verse_rotR32(w1, 19) XOR verse_rotR32(w1, 17) XOR w1 >>
		     10);
		t = d + 0x2de92c6fUL + w4 + (c XOR a & (b XOR c)) +
		    (verse_rotR32(a, 25) XOR verse_rotR32(a, 11) XOR
		     verse_rotR32(a, 6));
		h += t;
		d = t +
		    (verse_rotR32(e, 22) XOR verse_rotR32(e, 13) XOR
		     verse_rotR32(e, 2)) + (e & f | g & (f | e));
		w4 +=
		    w13 +
		    (verse_rotR32(w5, 18) XOR verse_rotR32(w5, 7) XOR w5 >> 3) +
		    (verse_rotR32(w2, 19) XOR verse_rotR32(w2, 17) XOR w2 >>
		     10);
		t = c + 0x4a7484aaUL + w5 + (b XOR h & (a XOR b)) +
		    (verse_rotR32(h, 25) XOR verse_rotR32(h, 11) XOR
		     verse_rotR32(h, 6));
		g += t;
		c = t +
		    (verse_rotR32(d, 22) XOR verse_rotR32(d, 13) XOR
		     verse_rotR32(d, 2)) + (d & e | f & (e | d));
		w5 +=
		    w14 +
		    (verse_rotR32(w6, 18) XOR verse_rotR32(w6, 7) XOR w6 >> 3) +
		    (verse_rotR32(w3, 19) XOR verse_rotR32(w3, 17) XOR w3 >>
		     10);
		t = b + 0x5cb0a9dcUL + w6 + (a XOR g & (h XOR a)) +
		    (verse_rotR32(g, 25) XOR verse_rotR32(g, 11) XOR
		     verse_rotR32(g, 6));
		f += t;
		b = t +
		    (verse_rotR32(c, 22) XOR verse_rotR32(c, 13) XOR
		     verse_rotR32(c, 2)) + (c & d | e & (d | c));
		w6 +=
		    w15 +
		    (verse_rotR32(w7, 18) XOR verse_rotR32(w7, 7) XOR w7 >> 3) +
		    (verse_rotR32(w4, 19) XOR verse_rotR32(w4, 17) XOR w4 >>
		     10);
		t = a + 0x76f988daUL + w7 + (h XOR f & (g XOR h)) +
		    (verse_rotR32(f, 25) XOR verse_rotR32(f, 11) XOR
		     verse_rotR32(f, 6));
		e += t;
		a = t +
		    (verse_rotR32(b, 22) XOR verse_rotR32(b, 13) XOR
		     verse_rotR32(b, 2)) + (b & c | d & (c | b));
		w7 +=
		    w0 +
		    (verse_rotR32(w8, 18) XOR verse_rotR32(w8, 7) XOR w8 >> 3) +
		    (verse_rotR32(w5, 19) XOR verse_rotR32(w5, 17) XOR w5 >>
		     10);
		t = h + 0x983e5152UL + w8 + (g XOR e & (f XOR g)) +
		    (verse_rotR32(e, 25) XOR verse_rotR32(e, 11) XOR
		     verse_rotR32(e, 6));
		d += t;
		h = t +
		    (verse_rotR32(a, 22) XOR verse_rotR32(a, 13) XOR
		     verse_rotR32(a, 2)) + (a & b | c & (b | a));
		w8 +=
		    w1 +
		    (verse_rotR32(w9, 18) XOR verse_rotR32(w9, 7) XOR w9 >> 3) +
		    (verse_rotR32(w6, 19) XOR verse_rotR32(w6, 17) XOR w6 >>
		     10);
		t = g + 0xa831c66dUL + w9 + (f XOR d & (e XOR f)) +
		    (verse_rotR32(d, 25) XOR verse_rotR32(d, 11) XOR
		     verse_rotR32(d, 6));
		c += t;
		g = t +
		    (verse_rotR32(h, 22) XOR verse_rotR32(h, 13) XOR
		     verse_rotR32(h, 2)) + (h & a | b & (a | h));
		w9 +=
		    w2 +
		    (verse_rotR32(w10, 18) XOR verse_rotR32(w10, 7) XOR w10 >>
		     3) + (verse_rotR32(w7, 19) XOR verse_rotR32(w7,
								 17) XOR w7 >>
			   10);
		t = f + 0xb00327c8UL + w10 + (e XOR c & (d XOR e)) +
		    (verse_rotR32(c, 25) XOR verse_rotR32(c, 11) XOR
		     verse_rotR32(c, 6));
		b += t;
		f = t +
		    (verse_rotR32(g, 22) XOR verse_rotR32(g, 13) XOR
		     verse_rotR32(g, 2)) + (g & h | a & (h | g));
		w10 +=
		    w3 +
		    (verse_rotR32(w11, 18) XOR verse_rotR32(w11, 7) XOR w11 >>
		     3) + (verse_rotR32(w8, 19) XOR verse_rotR32(w8,
								 17) XOR w8 >>
			   10);
		t = e + 0xbf597fc7UL + w11 + (d XOR b & (c XOR d)) +
		    (verse_rotR32(b, 25) XOR verse_rotR32(b, 11) XOR
		     verse_rotR32(b, 6));
		a += t;
		e = t +
		    (verse_rotR32(f, 22) XOR verse_rotR32(f, 13) XOR
		     verse_rotR32(f, 2)) + (f & g | h & (g | f));
		w11 +=
		    w4 +
		    (verse_rotR32(w12, 18) XOR verse_rotR32(w12, 7) XOR w12 >>
		     3) + (verse_rotR32(w9, 19) XOR verse_rotR32(w9,
								 17) XOR w9 >>
			   10);
		t = d + 0xc6e00bf3UL + w12 + (c XOR a & (b XOR c)) +
		    (verse_rotR32(a, 25) XOR verse_rotR32(a, 11) XOR
		     verse_rotR32(a, 6));
		h += t;
		d = t +
		    (verse_rotR32(e, 22) XOR verse_rotR32(e, 13) XOR
		     verse_rotR32(e, 2)) + (e & f | g & (f | e));
		w12 +=
		    w5 +
		    (verse_rotR32(w13, 18) XOR verse_rotR32(w13, 7) XOR w13 >>
		     3) + (verse_rotR32(w10, 19) XOR verse_rotR32(w10,
								  17) XOR w10 >>
			   10);
		t = c + 0xd5a79147UL + w13 + (b XOR h & (a XOR b)) +
		    (verse_rotR32(h, 25) XOR verse_rotR32(h, 11) XOR
		     verse_rotR32(h, 6));
		g += t;
		c = t +
		    (verse_rotR32(d, 22) XOR verse_rotR32(d, 13) XOR
		     verse_rotR32(d, 2)) + (d & e | f & (e | d));
		w13 +=
		    w6 +
		    (verse_rotR32(w14, 18) XOR verse_rotR32(w14, 7) XOR w14 >>
		     3) + (verse_rotR32(w11, 19) XOR verse_rotR32(w11,
								  17) XOR w11 >>
			   10);
		t = b + 0x06ca6351UL + w14 + (a XOR g & (h XOR a)) +
		    (verse_rotR32(g, 25) XOR verse_rotR32(g, 11) XOR
		     verse_rotR32(g, 6));
		f += t;
		b = t +
		    (verse_rotR32(c, 22) XOR verse_rotR32(c, 13) XOR
		     verse_rotR32(c, 2)) + (c & d | e & (d | c));
		w14 +=
		    w7 +
		    (verse_rotR32(w15, 18) XOR verse_rotR32(w15, 7) XOR w15 >>
		     3) + (verse_rotR32(w12, 19) XOR verse_rotR32(w12,
								  17) XOR w12 >>
			   10);
		t = a + 0x14292967UL + w15 + (h XOR f & (g XOR h)) +
		    (verse_rotR32(f, 25) XOR verse_rotR32(f, 11) XOR
		     verse_rotR32(f, 6));
		e += t;
		a = t +
		    (verse_rotR32(b, 22) XOR verse_rotR32(b, 13) XOR
		     verse_rotR32(b, 2)) + (b & c | d & (c | b));
		w15 +=
		    w8 +
		    (verse_rotR32(w0, 18) XOR verse_rotR32(w0, 7) XOR w0 >> 3) +
		    (verse_rotR32(w13, 19) XOR verse_rotR32(w13, 17) XOR w13 >>
		     10);
		t = h + 0x27b70a85UL + w0 + (g XOR e & (f XOR g)) +
		    (verse_rotR32(e, 25) XOR verse_rotR32(e, 11) XOR
		     verse_rotR32(e, 6));
		d += t;
		h = t +
		    (verse_rotR32(a, 22) XOR verse_rotR32(a, 13) XOR
		     verse_rotR32(a, 2)) + (a & b | c & (b | a));
		w0 +=
		    w9 +
		    (verse_rotR32(w1, 18) XOR verse_rotR32(w1, 7) XOR w1 >> 3) +
		    (verse_rotR32(w14, 19) XOR verse_rotR32(w14, 17) XOR w14 >>
		     10);
		t = g + 0x2e1b2138UL + w1 + (f XOR d & (e XOR f)) +
		    (verse_rotR32(d, 25) XOR verse_rotR32(d, 11) XOR
		     verse_rotR32(d, 6));
		c += t;
		g = t +
		    (verse_rotR32(h, 22) XOR verse_rotR32(h, 13) XOR
		     verse_rotR32(h, 2)) + (h & a | b & (a | h));
		w1 +=
		    w10 +
		    (verse_rotR32(w2, 18) XOR verse_rotR32(w2, 7) XOR w2 >> 3) +
		    (verse_rotR32(w15, 19) XOR verse_rotR32(w15, 17) XOR w15 >>
		     10);
		t = f + 0x4d2c6dfcUL + w2 + (e XOR c & (d XOR e)) +
		    (verse_rotR32(c, 25) XOR verse_rotR32(c, 11) XOR
		     verse_rotR32(c, 6));
		b += t;
		f = t +
		    (verse_rotR32(g, 22) XOR verse_rotR32(g, 13) XOR
		     verse_rotR32(g, 2)) + (g & h | a & (h | g));
		w2 +=
		    w11 +
		    (verse_rotR32(w3, 18) XOR verse_rotR32(w3, 7) XOR w3 >> 3) +
		    (verse_rotR32(w0, 19) XOR verse_rotR32(w0, 17) XOR w0 >>
		     10);
		t = e + 0x53380d13UL + w3 + (d XOR b & (c XOR d)) +
		    (verse_rotR32(b, 25) XOR verse_rotR32(b, 11) XOR
		     verse_rotR32(b, 6));
		a += t;
		e = t +
		    (verse_rotR32(f, 22) XOR verse_rotR32(f, 13) XOR
		     verse_rotR32(f, 2)) + (f & g | h & (g | f));
		w3 +=
		    w12 +
		    (verse_rotR32(w4, 18) XOR verse_rotR32(w4, 7) XOR w4 >> 3) +
		    (verse_rotR32(w1, 19) XOR verse_rotR32(w1, 17) XOR w1 >>
		     10);
		t = d + 0x650a7354UL + w4 + (c XOR a & (b XOR c)) +
		    (verse_rotR32(a, 25) XOR verse_rotR32(a, 11) XOR
		     verse_rotR32(a, 6));
		h += t;
		d = t +
		    (verse_rotR32(e, 22) XOR verse_rotR32(e, 13) XOR
		     verse_rotR32(e, 2)) + (e & f | g & (f | e));
		w4 +=
		    w13 +
		    (verse_rotR32(w5, 18) XOR verse_rotR32(w5, 7) XOR w5 >> 3) +
		    (verse_rotR32(w2, 19) XOR verse_rotR32(w2, 17) XOR w2 >>
		     10);
		t = c + 0x766a0abbUL + w5 + (b XOR h & (a XOR b)) +
		    (verse_rotR32(h, 25) XOR verse_rotR32(h, 11) XOR
		     verse_rotR32(h, 6));
		g += t;
		c = t +
		    (verse_rotR32(d, 22) XOR verse_rotR32(d, 13) XOR
		     verse_rotR32(d, 2)) + (d & e | f & (e | d));
		w5 +=
		    w14 +
		    (verse_rotR32(w6, 18) XOR verse_rotR32(w6, 7) XOR w6 >> 3) +
		    (verse_rotR32(w3, 19) XOR verse_rotR32(w3, 17) XOR w3 >>
		     10);
		t = b + 0x81c2c92eUL + w6 + (a XOR g & (h XOR a)) +
		    (verse_rotR32(g, 25) XOR verse_rotR32(g, 11) XOR
		     verse_rotR32(g, 6));
		f += t;
		b = t +
		    (verse_rotR32(c, 22) XOR verse_rotR32(c, 13) XOR
		     verse_rotR32(c, 2)) + (c & d | e & (d | c));
		w6 +=
		    w15 +
		    (verse_rotR32(w7, 18) XOR verse_rotR32(w7, 7) XOR w7 >> 3) +
		    (verse_rotR32(w4, 19) XOR verse_rotR32(w4, 17) XOR w4 >>
		     10);
		t = a + 0x92722c85UL + w7 + (h XOR f & (g XOR h)) +
		    (verse_rotR32(f, 25) XOR verse_rotR32(f, 11) XOR
		     verse_rotR32(f, 6));
		e += t;
		a = t +
		    (verse_rotR32(b, 22) XOR verse_rotR32(b, 13) XOR
		     verse_rotR32(b, 2)) + (b & c | d & (c | b));
		w7 +=
		    w0 +
		    (verse_rotR32(w8, 18) XOR verse_rotR32(w8, 7) XOR w8 >> 3) +
		    (verse_rotR32(w5, 19) XOR verse_rotR32(w5, 17) XOR w5 >>
		     10);
		t = h + 0xa2bfe8a1UL + w8 + (g XOR e & (f XOR g)) +
		    (verse_rotR32(e, 25) XOR verse_rotR32(e, 11) XOR
		     verse_rotR32(e, 6));
		d += t;
		h = t +
		    (verse_rotR32(a, 22) XOR verse_rotR32(a, 13) XOR
		     verse_rotR32(a, 2)) + (a & b | c & (b | a));
		w8 +=
		    w1 +
		    (verse_rotR32(w9, 18) XOR verse_rotR32(w9, 7) XOR w9 >> 3) +
		    (verse_rotR32(w6, 19) XOR verse_rotR32(w6, 17) XOR w6 >>
		     10);
		t = g + 0xa81a664bUL + w9 + (f XOR d & (e XOR f)) +
		    (verse_rotR32(d, 25) XOR verse_rotR32(d, 11) XOR
		     verse_rotR32(d, 6));
		c += t;
		g = t +
		    (verse_rotR32(h, 22) XOR verse_rotR32(h, 13) XOR
		     verse_rotR32(h, 2)) + (h & a | b & (a | h));
		w9 +=
		    w2 +
		    (verse_rotR32(w10, 18) XOR verse_rotR32(w10, 7) XOR w10 >>
		     3) + (verse_rotR32(w7, 19) XOR verse_rotR32(w7,
								 17) XOR w7 >>
			   10);
		t = f + 0xc24b8b70UL + w10 + (e XOR c & (d XOR e)) +
		    (verse_rotR32(c, 25) XOR verse_rotR32(c, 11) XOR
		     verse_rotR32(c, 6));
		b += t;
		f = t +
		    (verse_rotR32(g, 22) XOR verse_rotR32(g, 13) XOR
		     verse_rotR32(g, 2)) + (g & h | a & (h | g));
		w10 +=
		    w3 +
		    (verse_rotR32(w11, 18) XOR verse_rotR32(w11, 7) XOR w11 >>
		     3) + (verse_rotR32(w8, 19) XOR verse_rotR32(w8,
								 17) XOR w8 >>
			   10);
		t = e + 0xc76c51a3UL + w11 + (d XOR b & (c XOR d)) +
		    (verse_rotR32(b, 25) XOR verse_rotR32(b, 11) XOR
		     verse_rotR32(b, 6));
		a += t;
		e = t +
		    (verse_rotR32(f, 22) XOR verse_rotR32(f, 13) XOR
		     verse_rotR32(f, 2)) + (f & g | h & (g | f));
		w11 +=
		    w4 +
		    (verse_rotR32(w12, 18) XOR verse_rotR32(w12, 7) XOR w12 >>
		     3) + (verse_rotR32(w9, 19) XOR verse_rotR32(w9,
								 17) XOR w9 >>
			   10);
		t = d + 0xd192e819UL + w12 + (c XOR a & (b XOR c)) +
		    (verse_rotR32(a, 25) XOR verse_rotR32(a, 11) XOR
		     verse_rotR32(a, 6));
		h += t;
		d = t +
		    (verse_rotR32(e, 22) XOR verse_rotR32(e, 13) XOR
		     verse_rotR32(e, 2)) + (e & f | g & (f | e));
		w12 +=
		    w5 +
		    (verse_rotR32(w13, 18) XOR verse_rotR32(w13, 7) XOR w13 >>
		     3) + (verse_rotR32(w10, 19) XOR verse_rotR32(w10,
								  17) XOR w10 >>
			   10);
		t = c + 0xd6990624UL + w13 + (b XOR h & (a XOR b)) +
		    (verse_rotR32(h, 25) XOR verse_rotR32(h, 11) XOR
		     verse_rotR32(h, 6));
		g += t;
		c = t +
		    (verse_rotR32(d, 22) XOR verse_rotR32(d, 13) XOR
		     verse_rotR32(d, 2)) + (d & e | f & (e | d));
		w13 +=
		    w6 +
		    (verse_rotR32(w14, 18) XOR verse_rotR32(w14, 7) XOR w14 >>
		     3) + (verse_rotR32(w11, 19) XOR verse_rotR32(w11,
								  17) XOR w11 >>
			   10);
		t = b + 0xf40e3585UL + w14 + (a XOR g & (h XOR a)) +
		    (verse_rotR32(g, 25) XOR verse_rotR32(g, 11) XOR
		     verse_rotR32(g, 6));
		f += t;
		b = t +
		    (verse_rotR32(c, 22) XOR verse_rotR32(c, 13) XOR
		     verse_rotR32(c, 2)) + (c & d | e & (d | c));
		w14 +=
		    w7 +
		    (verse_rotR32(w15, 18) XOR verse_rotR32(w15, 7) XOR w15 >>
		     3) + (verse_rotR32(w12, 19) XOR verse_rotR32(w12,
								  17) XOR w12 >>
			   10);
		t = a + 0x106aa070UL + w15 + (h XOR f & (g XOR h)) +
		    (verse_rotR32(f, 25) XOR verse_rotR32(f, 11) XOR
		     verse_rotR32(f, 6));
		e += t;
		a = t +
		    (verse_rotR32(b, 22) XOR verse_rotR32(b, 13) XOR
		     verse_rotR32(b, 2)) + (b & c | d & (c | b));
		w15 +=
		    w8 +
		    (verse_rotR32(w0, 18) XOR verse_rotR32(w0, 7) XOR w0 >> 3) +
		    (verse_rotR32(w13, 19) XOR verse_rotR32(w13, 17) XOR w13 >>
		     10);
		t = h + 0x19a4c116UL + w0 + (g XOR e & (f XOR g)) +
		    (verse_rotR32(e, 25) XOR verse_rotR32(e, 11) XOR
		     verse_rotR32(e, 6));
		d += t;
		h = t +
		    (verse_rotR32(a, 22) XOR verse_rotR32(a, 13) XOR
		     verse_rotR32(a, 2)) + (a & b | c & (b | a));
		t = g + 0x1e376c08UL + w1 + (f XOR d & (e XOR f)) +
		    (verse_rotR32(d, 25) XOR verse_rotR32(d, 11) XOR
		     verse_rotR32(d, 6));
		c += t;
		g = t +
		    (verse_rotR32(h, 22) XOR verse_rotR32(h, 13) XOR
		     verse_rotR32(h, 2)) + (h & a | b & (a | h));
		t = f + 0x2748774cUL + w2 + (e XOR c & (d XOR e)) +
		    (verse_rotR32(c, 25) XOR verse_rotR32(c, 11) XOR
		     verse_rotR32(c, 6));
		b += t;
		f = t +
		    (verse_rotR32(g, 22) XOR verse_rotR32(g, 13) XOR
		     verse_rotR32(g, 2)) + (g & h | a & (h | g));
		t = e + 0x34b0bcb5UL + w3 + (d XOR b & (c XOR d)) +
		    (verse_rotR32(b, 25) XOR verse_rotR32(b, 11) XOR
		     verse_rotR32(b, 6));
		a += t;
		e = t +
		    (verse_rotR32(f, 22) XOR verse_rotR32(f, 13) XOR
		     verse_rotR32(f, 2)) + (f & g | h & (g | f));
		t = d + 0x391c0cb3UL + w4 + (c XOR a & (b XOR c)) +
		    (verse_rotR32(a, 25) XOR verse_rotR32(a, 11) XOR
		     verse_rotR32(a, 6));
		h += t;
		d = t +
		    (verse_rotR32(e, 22) XOR verse_rotR32(e, 13) XOR
		     verse_rotR32(e, 2)) + (e & f | g & (f | e));
		t = c + 0x4ed8aa4aUL + w5 + (b XOR h & (a XOR b)) +
		    (verse_rotR32(h, 25) XOR verse_rotR32(h, 11) XOR
		     verse_rotR32(h, 6));
		g += t;
		c = t +
		    (verse_rotR32(d, 22) XOR verse_rotR32(d, 13) XOR
		     verse_rotR32(d, 2)) + (d & e | f & (e | d));
		t = b + 0x5b9cca4fUL + w6 + (a XOR g & (h XOR a)) +
		    (verse_rotR32(g, 25) XOR verse_rotR32(g, 11) XOR
		     verse_rotR32(g, 6));
		f += t;
		b = t +
		    (verse_rotR32(c, 22) XOR verse_rotR32(c, 13) XOR
		     verse_rotR32(c, 2)) + (c & d | e & (d | c));
		t = a + 0x682e6ff3UL + w7 + (h XOR f & (g XOR h)) +
		    (verse_rotR32(f, 25) XOR verse_rotR32(f, 11) XOR
		     verse_rotR32(f, 6));
		e += t;
		a = t +
		    (verse_rotR32(b, 22) XOR verse_rotR32(b, 13) XOR
		     verse_rotR32(b, 2)) + (b & c | d & (c | b));
		t = h + 0x748f82eeUL + w8 + (g XOR e & (f XOR g)) +
		    (verse_rotR32(e, 25) XOR verse_rotR32(e, 11) XOR
		     verse_rotR32(e, 6));
		d += t;
		h = t +
		    (verse_rotR32(a, 22) XOR verse_rotR32(a, 13) XOR
		     verse_rotR32(a, 2)) + (a & b | c & (b | a));
		t = g + 0x78a5636fUL + w9 + (f XOR d & (e XOR f)) +
		    (verse_rotR32(d, 25) XOR verse_rotR32(d, 11) XOR
		     verse_rotR32(d, 6));
		c += t;
		g = t +
		    (verse_rotR32(h, 22) XOR verse_rotR32(h, 13) XOR
		     verse_rotR32(h, 2)) + (h & a | b & (a | h));
		t = f + 0x84c87814UL + w10 + (e XOR c & (d XOR e)) +
		    (verse_rotR32(c, 25) XOR verse_rotR32(c, 11) XOR
		     verse_rotR32(c, 6));
		b += t;
		f = t +
		    (verse_rotR32(g, 22) XOR verse_rotR32(g, 13) XOR
		     verse_rotR32(g, 2)) + (g & h | a & (h | g));
		t = e + 0x8cc70208UL + w11 + (d XOR b & (c XOR d)) +
		    (verse_rotR32(b, 25) XOR verse_rotR32(b, 11) XOR
		     verse_rotR32(b, 6));
		a += t;
		e = t +
		    (verse_rotR32(f, 22) XOR verse_rotR32(f, 13) XOR
		     verse_rotR32(f, 2)) + (f & g | h & (g | f));
		t = d + 0x90befffaUL + w12 + (c XOR a & (b XOR c)) +
		    (verse_rotR32(a, 25) XOR verse_rotR32(a, 11) XOR
		     verse_rotR32(a, 6));
		h += t;
		d = t +
		    (verse_rotR32(e, 22) XOR verse_rotR32(e, 13) XOR
		     verse_rotR32(e, 2)) + (e & f | g & (f | e));
		t = c + 0xa4506cebUL + w13 + (b XOR h & (a XOR b)) +
		    (verse_rotR32(h, 25) XOR verse_rotR32(h, 11) XOR
		     verse_rotR32(h, 6));
		g += t;
		c = t +
		    (verse_rotR32(d, 22) XOR verse_rotR32(d, 13) XOR
		     verse_rotR32(d, 2)) + (d & e | f & (e | d));
		t = b + 0xbef9a3f7UL + w14 + (a XOR g & (h XOR a)) +
		    (verse_rotR32(g, 25) XOR verse_rotR32(g, 11) XOR
		     verse_rotR32(g, 6));
		f += t;
		b = t +
		    (verse_rotR32(c, 22) XOR verse_rotR32(c, 13) XOR
		     verse_rotR32(c, 2)) + (c & d | e & (d | c));
		t = a + 0xc67178f2UL + w15 + (h XOR f & (g XOR h)) +
		    (verse_rotR32(f, 25) XOR verse_rotR32(f, 11) XOR
		     verse_rotR32(f, 6));
		e += t;
		a = t +
		    (verse_rotR32(b, 22) XOR verse_rotR32(b, 13) XOR
		     verse_rotR32(b, 2)) + (b & c | d & (c | b));
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
