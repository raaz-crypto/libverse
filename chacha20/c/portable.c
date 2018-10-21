#include <stdint.h>
#include <verse.h>
void verse_chacha20_c_portable(uint32_t (*blockPtr)[16], uint64_t counter, uint32_t p0[8], uint32_t p1[3], uint32_t p2[1])
{
    /*    Local variables    */
    
    /*    Register variables    */
    register uint32_t rTmp;
    register uint32_t rctr;
    register uint32_t rx15;
    register uint32_t rx14;
    register uint32_t rx13;
    register uint32_t rx12;
    register uint32_t rx11;
    register uint32_t rx10;
    register uint32_t rx9;
    register uint32_t rx8;
    register uint32_t rx7;
    register uint32_t rx6;
    register uint32_t rx5;
    register uint32_t rx4;
    register uint32_t rx3;
    register uint32_t rx2;
    register uint32_t rx1;
    register uint32_t rx0;
    
    
    rctr =  p2[0];
    /*    Iterating over the blocks    */
    while(counter > 0)
    {
        rx0 =  0x61707865;
        rx1 =  0x3320646e;
        rx2 =  0x79622d32;
        rx3 =  0x6b206574;
        rx4 =  p0[0];
        rx5 =  p0[1];
        rx6 =  p0[2];
        rx7 =  p0[3];
        rx8 =  p0[4];
        rx9 =  p0[5];
        rx10 =  p0[6];
        rx11 =  p0[7];
        rx12 =  rctr;
        rx13 =  p1[0];
        rx14 =  p1[1];
        rx15 =  p1[2];
        rx0 += rx4;
        rx12 ^= rx0;
        rx12 = verse_rotL32(rx12, 16);
        rx8 += rx12;
        rx4 ^= rx8;
        rx4 = verse_rotL32(rx4, 12);
        rx0 += rx4;
        rx12 ^= rx0;
        rx12 = verse_rotL32(rx12, 8);
        rx8 += rx12;
        rx4 ^= rx8;
        rx4 = verse_rotL32(rx4, 12);
        rx1 += rx5;
        rx13 ^= rx1;
        rx13 = verse_rotL32(rx13, 16);
        rx9 += rx13;
        rx5 ^= rx9;
        rx5 = verse_rotL32(rx5, 12);
        rx1 += rx5;
        rx13 ^= rx1;
        rx13 = verse_rotL32(rx13, 8);
        rx9 += rx13;
        rx5 ^= rx9;
        rx5 = verse_rotL32(rx5, 12);
        rx2 += rx6;
        rx14 ^= rx2;
        rx14 = verse_rotL32(rx14, 16);
        rx10 += rx14;
        rx6 ^= rx10;
        rx6 = verse_rotL32(rx6, 12);
        rx2 += rx6;
        rx14 ^= rx2;
        rx14 = verse_rotL32(rx14, 8);
        rx10 += rx14;
        rx6 ^= rx10;
        rx6 = verse_rotL32(rx6, 12);
        rx3 += rx7;
        rx15 ^= rx3;
        rx15 = verse_rotL32(rx15, 16);
        rx11 += rx15;
        rx7 ^= rx11;
        rx7 = verse_rotL32(rx7, 12);
        rx3 += rx7;
        rx15 ^= rx3;
        rx15 = verse_rotL32(rx15, 8);
        rx11 += rx15;
        rx7 ^= rx11;
        rx7 = verse_rotL32(rx7, 12);
        rx0 += rx5;
        rx15 ^= rx0;
        rx15 = verse_rotL32(rx15, 16);
        rx10 += rx15;
        rx5 ^= rx10;
        rx5 = verse_rotL32(rx5, 12);
        rx0 += rx5;
        rx15 ^= rx0;
        rx15 = verse_rotL32(rx15, 8);
        rx10 += rx15;
        rx5 ^= rx10;
        rx5 = verse_rotL32(rx5, 12);
        rx1 += rx6;
        rx12 ^= rx1;
        rx12 = verse_rotL32(rx12, 16);
        rx11 += rx12;
        rx6 ^= rx11;
        rx6 = verse_rotL32(rx6, 12);
        rx1 += rx6;
        rx12 ^= rx1;
        rx12 = verse_rotL32(rx12, 8);
        rx11 += rx12;
        rx6 ^= rx11;
        rx6 = verse_rotL32(rx6, 12);
        rx2 += rx7;
        rx13 ^= rx2;
        rx13 = verse_rotL32(rx13, 16);
        rx8 += rx13;
        rx7 ^= rx8;
        rx7 = verse_rotL32(rx7, 12);
        rx2 += rx7;
        rx13 ^= rx2;
        rx13 = verse_rotL32(rx13, 8);
        rx8 += rx13;
        rx7 ^= rx8;
        rx7 = verse_rotL32(rx7, 12);
        rx3 += rx4;
        rx14 ^= rx3;
        rx14 = verse_rotL32(rx14, 16);
        rx9 += rx14;
        rx4 ^= rx9;
        rx4 = verse_rotL32(rx4, 12);
        rx3 += rx4;
        rx14 ^= rx3;
        rx14 = verse_rotL32(rx14, 8);
        rx9 += rx14;
        rx4 ^= rx9;
        rx4 = verse_rotL32(rx4, 12);
        rx0 += rx4;
        rx12 ^= rx0;
        rx12 = verse_rotL32(rx12, 16);
        rx8 += rx12;
        rx4 ^= rx8;
        rx4 = verse_rotL32(rx4, 12);
        rx0 += rx4;
        rx12 ^= rx0;
        rx12 = verse_rotL32(rx12, 8);
        rx8 += rx12;
        rx4 ^= rx8;
        rx4 = verse_rotL32(rx4, 12);
        rx1 += rx5;
        rx13 ^= rx1;
        rx13 = verse_rotL32(rx13, 16);
        rx9 += rx13;
        rx5 ^= rx9;
        rx5 = verse_rotL32(rx5, 12);
        rx1 += rx5;
        rx13 ^= rx1;
        rx13 = verse_rotL32(rx13, 8);
        rx9 += rx13;
        rx5 ^= rx9;
        rx5 = verse_rotL32(rx5, 12);
        rx2 += rx6;
        rx14 ^= rx2;
        rx14 = verse_rotL32(rx14, 16);
        rx10 += rx14;
        rx6 ^= rx10;
        rx6 = verse_rotL32(rx6, 12);
        rx2 += rx6;
        rx14 ^= rx2;
        rx14 = verse_rotL32(rx14, 8);
        rx10 += rx14;
        rx6 ^= rx10;
        rx6 = verse_rotL32(rx6, 12);
        rx3 += rx7;
        rx15 ^= rx3;
        rx15 = verse_rotL32(rx15, 16);
        rx11 += rx15;
        rx7 ^= rx11;
        rx7 = verse_rotL32(rx7, 12);
        rx3 += rx7;
        rx15 ^= rx3;
        rx15 = verse_rotL32(rx15, 8);
        rx11 += rx15;
        rx7 ^= rx11;
        rx7 = verse_rotL32(rx7, 12);
        rx0 += rx5;
        rx15 ^= rx0;
        rx15 = verse_rotL32(rx15, 16);
        rx10 += rx15;
        rx5 ^= rx10;
        rx5 = verse_rotL32(rx5, 12);
        rx0 += rx5;
        rx15 ^= rx0;
        rx15 = verse_rotL32(rx15, 8);
        rx10 += rx15;
        rx5 ^= rx10;
        rx5 = verse_rotL32(rx5, 12);
        rx1 += rx6;
        rx12 ^= rx1;
        rx12 = verse_rotL32(rx12, 16);
        rx11 += rx12;
        rx6 ^= rx11;
        rx6 = verse_rotL32(rx6, 12);
        rx1 += rx6;
        rx12 ^= rx1;
        rx12 = verse_rotL32(rx12, 8);
        rx11 += rx12;
        rx6 ^= rx11;
        rx6 = verse_rotL32(rx6, 12);
        rx2 += rx7;
        rx13 ^= rx2;
        rx13 = verse_rotL32(rx13, 16);
        rx8 += rx13;
        rx7 ^= rx8;
        rx7 = verse_rotL32(rx7, 12);
        rx2 += rx7;
        rx13 ^= rx2;
        rx13 = verse_rotL32(rx13, 8);
        rx8 += rx13;
        rx7 ^= rx8;
        rx7 = verse_rotL32(rx7, 12);
        rx3 += rx4;
        rx14 ^= rx3;
        rx14 = verse_rotL32(rx14, 16);
        rx9 += rx14;
        rx4 ^= rx9;
        rx4 = verse_rotL32(rx4, 12);
        rx3 += rx4;
        rx14 ^= rx3;
        rx14 = verse_rotL32(rx14, 8);
        rx9 += rx14;
        rx4 ^= rx9;
        rx4 = verse_rotL32(rx4, 12);
        rx0 += rx4;
        rx12 ^= rx0;
        rx12 = verse_rotL32(rx12, 16);
        rx8 += rx12;
        rx4 ^= rx8;
        rx4 = verse_rotL32(rx4, 12);
        rx0 += rx4;
        rx12 ^= rx0;
        rx12 = verse_rotL32(rx12, 8);
        rx8 += rx12;
        rx4 ^= rx8;
        rx4 = verse_rotL32(rx4, 12);
        rx1 += rx5;
        rx13 ^= rx1;
        rx13 = verse_rotL32(rx13, 16);
        rx9 += rx13;
        rx5 ^= rx9;
        rx5 = verse_rotL32(rx5, 12);
        rx1 += rx5;
        rx13 ^= rx1;
        rx13 = verse_rotL32(rx13, 8);
        rx9 += rx13;
        rx5 ^= rx9;
        rx5 = verse_rotL32(rx5, 12);
        rx2 += rx6;
        rx14 ^= rx2;
        rx14 = verse_rotL32(rx14, 16);
        rx10 += rx14;
        rx6 ^= rx10;
        rx6 = verse_rotL32(rx6, 12);
        rx2 += rx6;
        rx14 ^= rx2;
        rx14 = verse_rotL32(rx14, 8);
        rx10 += rx14;
        rx6 ^= rx10;
        rx6 = verse_rotL32(rx6, 12);
        rx3 += rx7;
        rx15 ^= rx3;
        rx15 = verse_rotL32(rx15, 16);
        rx11 += rx15;
        rx7 ^= rx11;
        rx7 = verse_rotL32(rx7, 12);
        rx3 += rx7;
        rx15 ^= rx3;
        rx15 = verse_rotL32(rx15, 8);
        rx11 += rx15;
        rx7 ^= rx11;
        rx7 = verse_rotL32(rx7, 12);
        rx0 += rx5;
        rx15 ^= rx0;
        rx15 = verse_rotL32(rx15, 16);
        rx10 += rx15;
        rx5 ^= rx10;
        rx5 = verse_rotL32(rx5, 12);
        rx0 += rx5;
        rx15 ^= rx0;
        rx15 = verse_rotL32(rx15, 8);
        rx10 += rx15;
        rx5 ^= rx10;
        rx5 = verse_rotL32(rx5, 12);
        rx1 += rx6;
        rx12 ^= rx1;
        rx12 = verse_rotL32(rx12, 16);
        rx11 += rx12;
        rx6 ^= rx11;
        rx6 = verse_rotL32(rx6, 12);
        rx1 += rx6;
        rx12 ^= rx1;
        rx12 = verse_rotL32(rx12, 8);
        rx11 += rx12;
        rx6 ^= rx11;
        rx6 = verse_rotL32(rx6, 12);
        rx2 += rx7;
        rx13 ^= rx2;
        rx13 = verse_rotL32(rx13, 16);
        rx8 += rx13;
        rx7 ^= rx8;
        rx7 = verse_rotL32(rx7, 12);
        rx2 += rx7;
        rx13 ^= rx2;
        rx13 = verse_rotL32(rx13, 8);
        rx8 += rx13;
        rx7 ^= rx8;
        rx7 = verse_rotL32(rx7, 12);
        rx3 += rx4;
        rx14 ^= rx3;
        rx14 = verse_rotL32(rx14, 16);
        rx9 += rx14;
        rx4 ^= rx9;
        rx4 = verse_rotL32(rx4, 12);
        rx3 += rx4;
        rx14 ^= rx3;
        rx14 = verse_rotL32(rx14, 8);
        rx9 += rx14;
        rx4 ^= rx9;
        rx4 = verse_rotL32(rx4, 12);
        rx0 += rx4;
        rx12 ^= rx0;
        rx12 = verse_rotL32(rx12, 16);
        rx8 += rx12;
        rx4 ^= rx8;
        rx4 = verse_rotL32(rx4, 12);
        rx0 += rx4;
        rx12 ^= rx0;
        rx12 = verse_rotL32(rx12, 8);
        rx8 += rx12;
        rx4 ^= rx8;
        rx4 = verse_rotL32(rx4, 12);
        rx1 += rx5;
        rx13 ^= rx1;
        rx13 = verse_rotL32(rx13, 16);
        rx9 += rx13;
        rx5 ^= rx9;
        rx5 = verse_rotL32(rx5, 12);
        rx1 += rx5;
        rx13 ^= rx1;
        rx13 = verse_rotL32(rx13, 8);
        rx9 += rx13;
        rx5 ^= rx9;
        rx5 = verse_rotL32(rx5, 12);
        rx2 += rx6;
        rx14 ^= rx2;
        rx14 = verse_rotL32(rx14, 16);
        rx10 += rx14;
        rx6 ^= rx10;
        rx6 = verse_rotL32(rx6, 12);
        rx2 += rx6;
        rx14 ^= rx2;
        rx14 = verse_rotL32(rx14, 8);
        rx10 += rx14;
        rx6 ^= rx10;
        rx6 = verse_rotL32(rx6, 12);
        rx3 += rx7;
        rx15 ^= rx3;
        rx15 = verse_rotL32(rx15, 16);
        rx11 += rx15;
        rx7 ^= rx11;
        rx7 = verse_rotL32(rx7, 12);
        rx3 += rx7;
        rx15 ^= rx3;
        rx15 = verse_rotL32(rx15, 8);
        rx11 += rx15;
        rx7 ^= rx11;
        rx7 = verse_rotL32(rx7, 12);
        rx0 += rx5;
        rx15 ^= rx0;
        rx15 = verse_rotL32(rx15, 16);
        rx10 += rx15;
        rx5 ^= rx10;
        rx5 = verse_rotL32(rx5, 12);
        rx0 += rx5;
        rx15 ^= rx0;
        rx15 = verse_rotL32(rx15, 8);
        rx10 += rx15;
        rx5 ^= rx10;
        rx5 = verse_rotL32(rx5, 12);
        rx1 += rx6;
        rx12 ^= rx1;
        rx12 = verse_rotL32(rx12, 16);
        rx11 += rx12;
        rx6 ^= rx11;
        rx6 = verse_rotL32(rx6, 12);
        rx1 += rx6;
        rx12 ^= rx1;
        rx12 = verse_rotL32(rx12, 8);
        rx11 += rx12;
        rx6 ^= rx11;
        rx6 = verse_rotL32(rx6, 12);
        rx2 += rx7;
        rx13 ^= rx2;
        rx13 = verse_rotL32(rx13, 16);
        rx8 += rx13;
        rx7 ^= rx8;
        rx7 = verse_rotL32(rx7, 12);
        rx2 += rx7;
        rx13 ^= rx2;
        rx13 = verse_rotL32(rx13, 8);
        rx8 += rx13;
        rx7 ^= rx8;
        rx7 = verse_rotL32(rx7, 12);
        rx3 += rx4;
        rx14 ^= rx3;
        rx14 = verse_rotL32(rx14, 16);
        rx9 += rx14;
        rx4 ^= rx9;
        rx4 = verse_rotL32(rx4, 12);
        rx3 += rx4;
        rx14 ^= rx3;
        rx14 = verse_rotL32(rx14, 8);
        rx9 += rx14;
        rx4 ^= rx9;
        rx4 = verse_rotL32(rx4, 12);
        rx0 += rx4;
        rx12 ^= rx0;
        rx12 = verse_rotL32(rx12, 16);
        rx8 += rx12;
        rx4 ^= rx8;
        rx4 = verse_rotL32(rx4, 12);
        rx0 += rx4;
        rx12 ^= rx0;
        rx12 = verse_rotL32(rx12, 8);
        rx8 += rx12;
        rx4 ^= rx8;
        rx4 = verse_rotL32(rx4, 12);
        rx1 += rx5;
        rx13 ^= rx1;
        rx13 = verse_rotL32(rx13, 16);
        rx9 += rx13;
        rx5 ^= rx9;
        rx5 = verse_rotL32(rx5, 12);
        rx1 += rx5;
        rx13 ^= rx1;
        rx13 = verse_rotL32(rx13, 8);
        rx9 += rx13;
        rx5 ^= rx9;
        rx5 = verse_rotL32(rx5, 12);
        rx2 += rx6;
        rx14 ^= rx2;
        rx14 = verse_rotL32(rx14, 16);
        rx10 += rx14;
        rx6 ^= rx10;
        rx6 = verse_rotL32(rx6, 12);
        rx2 += rx6;
        rx14 ^= rx2;
        rx14 = verse_rotL32(rx14, 8);
        rx10 += rx14;
        rx6 ^= rx10;
        rx6 = verse_rotL32(rx6, 12);
        rx3 += rx7;
        rx15 ^= rx3;
        rx15 = verse_rotL32(rx15, 16);
        rx11 += rx15;
        rx7 ^= rx11;
        rx7 = verse_rotL32(rx7, 12);
        rx3 += rx7;
        rx15 ^= rx3;
        rx15 = verse_rotL32(rx15, 8);
        rx11 += rx15;
        rx7 ^= rx11;
        rx7 = verse_rotL32(rx7, 12);
        rx0 += rx5;
        rx15 ^= rx0;
        rx15 = verse_rotL32(rx15, 16);
        rx10 += rx15;
        rx5 ^= rx10;
        rx5 = verse_rotL32(rx5, 12);
        rx0 += rx5;
        rx15 ^= rx0;
        rx15 = verse_rotL32(rx15, 8);
        rx10 += rx15;
        rx5 ^= rx10;
        rx5 = verse_rotL32(rx5, 12);
        rx1 += rx6;
        rx12 ^= rx1;
        rx12 = verse_rotL32(rx12, 16);
        rx11 += rx12;
        rx6 ^= rx11;
        rx6 = verse_rotL32(rx6, 12);
        rx1 += rx6;
        rx12 ^= rx1;
        rx12 = verse_rotL32(rx12, 8);
        rx11 += rx12;
        rx6 ^= rx11;
        rx6 = verse_rotL32(rx6, 12);
        rx2 += rx7;
        rx13 ^= rx2;
        rx13 = verse_rotL32(rx13, 16);
        rx8 += rx13;
        rx7 ^= rx8;
        rx7 = verse_rotL32(rx7, 12);
        rx2 += rx7;
        rx13 ^= rx2;
        rx13 = verse_rotL32(rx13, 8);
        rx8 += rx13;
        rx7 ^= rx8;
        rx7 = verse_rotL32(rx7, 12);
        rx3 += rx4;
        rx14 ^= rx3;
        rx14 = verse_rotL32(rx14, 16);
        rx9 += rx14;
        rx4 ^= rx9;
        rx4 = verse_rotL32(rx4, 12);
        rx3 += rx4;
        rx14 ^= rx3;
        rx14 = verse_rotL32(rx14, 8);
        rx9 += rx14;
        rx4 ^= rx9;
        rx4 = verse_rotL32(rx4, 12);
        rx0 += rx4;
        rx12 ^= rx0;
        rx12 = verse_rotL32(rx12, 16);
        rx8 += rx12;
        rx4 ^= rx8;
        rx4 = verse_rotL32(rx4, 12);
        rx0 += rx4;
        rx12 ^= rx0;
        rx12 = verse_rotL32(rx12, 8);
        rx8 += rx12;
        rx4 ^= rx8;
        rx4 = verse_rotL32(rx4, 12);
        rx1 += rx5;
        rx13 ^= rx1;
        rx13 = verse_rotL32(rx13, 16);
        rx9 += rx13;
        rx5 ^= rx9;
        rx5 = verse_rotL32(rx5, 12);
        rx1 += rx5;
        rx13 ^= rx1;
        rx13 = verse_rotL32(rx13, 8);
        rx9 += rx13;
        rx5 ^= rx9;
        rx5 = verse_rotL32(rx5, 12);
        rx2 += rx6;
        rx14 ^= rx2;
        rx14 = verse_rotL32(rx14, 16);
        rx10 += rx14;
        rx6 ^= rx10;
        rx6 = verse_rotL32(rx6, 12);
        rx2 += rx6;
        rx14 ^= rx2;
        rx14 = verse_rotL32(rx14, 8);
        rx10 += rx14;
        rx6 ^= rx10;
        rx6 = verse_rotL32(rx6, 12);
        rx3 += rx7;
        rx15 ^= rx3;
        rx15 = verse_rotL32(rx15, 16);
        rx11 += rx15;
        rx7 ^= rx11;
        rx7 = verse_rotL32(rx7, 12);
        rx3 += rx7;
        rx15 ^= rx3;
        rx15 = verse_rotL32(rx15, 8);
        rx11 += rx15;
        rx7 ^= rx11;
        rx7 = verse_rotL32(rx7, 12);
        rx0 += rx5;
        rx15 ^= rx0;
        rx15 = verse_rotL32(rx15, 16);
        rx10 += rx15;
        rx5 ^= rx10;
        rx5 = verse_rotL32(rx5, 12);
        rx0 += rx5;
        rx15 ^= rx0;
        rx15 = verse_rotL32(rx15, 8);
        rx10 += rx15;
        rx5 ^= rx10;
        rx5 = verse_rotL32(rx5, 12);
        rx1 += rx6;
        rx12 ^= rx1;
        rx12 = verse_rotL32(rx12, 16);
        rx11 += rx12;
        rx6 ^= rx11;
        rx6 = verse_rotL32(rx6, 12);
        rx1 += rx6;
        rx12 ^= rx1;
        rx12 = verse_rotL32(rx12, 8);
        rx11 += rx12;
        rx6 ^= rx11;
        rx6 = verse_rotL32(rx6, 12);
        rx2 += rx7;
        rx13 ^= rx2;
        rx13 = verse_rotL32(rx13, 16);
        rx8 += rx13;
        rx7 ^= rx8;
        rx7 = verse_rotL32(rx7, 12);
        rx2 += rx7;
        rx13 ^= rx2;
        rx13 = verse_rotL32(rx13, 8);
        rx8 += rx13;
        rx7 ^= rx8;
        rx7 = verse_rotL32(rx7, 12);
        rx3 += rx4;
        rx14 ^= rx3;
        rx14 = verse_rotL32(rx14, 16);
        rx9 += rx14;
        rx4 ^= rx9;
        rx4 = verse_rotL32(rx4, 12);
        rx3 += rx4;
        rx14 ^= rx3;
        rx14 = verse_rotL32(rx14, 8);
        rx9 += rx14;
        rx4 ^= rx9;
        rx4 = verse_rotL32(rx4, 12);
        rx0 += rx4;
        rx12 ^= rx0;
        rx12 = verse_rotL32(rx12, 16);
        rx8 += rx12;
        rx4 ^= rx8;
        rx4 = verse_rotL32(rx4, 12);
        rx0 += rx4;
        rx12 ^= rx0;
        rx12 = verse_rotL32(rx12, 8);
        rx8 += rx12;
        rx4 ^= rx8;
        rx4 = verse_rotL32(rx4, 12);
        rx1 += rx5;
        rx13 ^= rx1;
        rx13 = verse_rotL32(rx13, 16);
        rx9 += rx13;
        rx5 ^= rx9;
        rx5 = verse_rotL32(rx5, 12);
        rx1 += rx5;
        rx13 ^= rx1;
        rx13 = verse_rotL32(rx13, 8);
        rx9 += rx13;
        rx5 ^= rx9;
        rx5 = verse_rotL32(rx5, 12);
        rx2 += rx6;
        rx14 ^= rx2;
        rx14 = verse_rotL32(rx14, 16);
        rx10 += rx14;
        rx6 ^= rx10;
        rx6 = verse_rotL32(rx6, 12);
        rx2 += rx6;
        rx14 ^= rx2;
        rx14 = verse_rotL32(rx14, 8);
        rx10 += rx14;
        rx6 ^= rx10;
        rx6 = verse_rotL32(rx6, 12);
        rx3 += rx7;
        rx15 ^= rx3;
        rx15 = verse_rotL32(rx15, 16);
        rx11 += rx15;
        rx7 ^= rx11;
        rx7 = verse_rotL32(rx7, 12);
        rx3 += rx7;
        rx15 ^= rx3;
        rx15 = verse_rotL32(rx15, 8);
        rx11 += rx15;
        rx7 ^= rx11;
        rx7 = verse_rotL32(rx7, 12);
        rx0 += rx5;
        rx15 ^= rx0;
        rx15 = verse_rotL32(rx15, 16);
        rx10 += rx15;
        rx5 ^= rx10;
        rx5 = verse_rotL32(rx5, 12);
        rx0 += rx5;
        rx15 ^= rx0;
        rx15 = verse_rotL32(rx15, 8);
        rx10 += rx15;
        rx5 ^= rx10;
        rx5 = verse_rotL32(rx5, 12);
        rx1 += rx6;
        rx12 ^= rx1;
        rx12 = verse_rotL32(rx12, 16);
        rx11 += rx12;
        rx6 ^= rx11;
        rx6 = verse_rotL32(rx6, 12);
        rx1 += rx6;
        rx12 ^= rx1;
        rx12 = verse_rotL32(rx12, 8);
        rx11 += rx12;
        rx6 ^= rx11;
        rx6 = verse_rotL32(rx6, 12);
        rx2 += rx7;
        rx13 ^= rx2;
        rx13 = verse_rotL32(rx13, 16);
        rx8 += rx13;
        rx7 ^= rx8;
        rx7 = verse_rotL32(rx7, 12);
        rx2 += rx7;
        rx13 ^= rx2;
        rx13 = verse_rotL32(rx13, 8);
        rx8 += rx13;
        rx7 ^= rx8;
        rx7 = verse_rotL32(rx7, 12);
        rx3 += rx4;
        rx14 ^= rx3;
        rx14 = verse_rotL32(rx14, 16);
        rx9 += rx14;
        rx4 ^= rx9;
        rx4 = verse_rotL32(rx4, 12);
        rx3 += rx4;
        rx14 ^= rx3;
        rx14 = verse_rotL32(rx14, 8);
        rx9 += rx14;
        rx4 ^= rx9;
        rx4 = verse_rotL32(rx4, 12);
        rx0 += rx4;
        rx12 ^= rx0;
        rx12 = verse_rotL32(rx12, 16);
        rx8 += rx12;
        rx4 ^= rx8;
        rx4 = verse_rotL32(rx4, 12);
        rx0 += rx4;
        rx12 ^= rx0;
        rx12 = verse_rotL32(rx12, 8);
        rx8 += rx12;
        rx4 ^= rx8;
        rx4 = verse_rotL32(rx4, 12);
        rx1 += rx5;
        rx13 ^= rx1;
        rx13 = verse_rotL32(rx13, 16);
        rx9 += rx13;
        rx5 ^= rx9;
        rx5 = verse_rotL32(rx5, 12);
        rx1 += rx5;
        rx13 ^= rx1;
        rx13 = verse_rotL32(rx13, 8);
        rx9 += rx13;
        rx5 ^= rx9;
        rx5 = verse_rotL32(rx5, 12);
        rx2 += rx6;
        rx14 ^= rx2;
        rx14 = verse_rotL32(rx14, 16);
        rx10 += rx14;
        rx6 ^= rx10;
        rx6 = verse_rotL32(rx6, 12);
        rx2 += rx6;
        rx14 ^= rx2;
        rx14 = verse_rotL32(rx14, 8);
        rx10 += rx14;
        rx6 ^= rx10;
        rx6 = verse_rotL32(rx6, 12);
        rx3 += rx7;
        rx15 ^= rx3;
        rx15 = verse_rotL32(rx15, 16);
        rx11 += rx15;
        rx7 ^= rx11;
        rx7 = verse_rotL32(rx7, 12);
        rx3 += rx7;
        rx15 ^= rx3;
        rx15 = verse_rotL32(rx15, 8);
        rx11 += rx15;
        rx7 ^= rx11;
        rx7 = verse_rotL32(rx7, 12);
        rx0 += rx5;
        rx15 ^= rx0;
        rx15 = verse_rotL32(rx15, 16);
        rx10 += rx15;
        rx5 ^= rx10;
        rx5 = verse_rotL32(rx5, 12);
        rx0 += rx5;
        rx15 ^= rx0;
        rx15 = verse_rotL32(rx15, 8);
        rx10 += rx15;
        rx5 ^= rx10;
        rx5 = verse_rotL32(rx5, 12);
        rx1 += rx6;
        rx12 ^= rx1;
        rx12 = verse_rotL32(rx12, 16);
        rx11 += rx12;
        rx6 ^= rx11;
        rx6 = verse_rotL32(rx6, 12);
        rx1 += rx6;
        rx12 ^= rx1;
        rx12 = verse_rotL32(rx12, 8);
        rx11 += rx12;
        rx6 ^= rx11;
        rx6 = verse_rotL32(rx6, 12);
        rx2 += rx7;
        rx13 ^= rx2;
        rx13 = verse_rotL32(rx13, 16);
        rx8 += rx13;
        rx7 ^= rx8;
        rx7 = verse_rotL32(rx7, 12);
        rx2 += rx7;
        rx13 ^= rx2;
        rx13 = verse_rotL32(rx13, 8);
        rx8 += rx13;
        rx7 ^= rx8;
        rx7 = verse_rotL32(rx7, 12);
        rx3 += rx4;
        rx14 ^= rx3;
        rx14 = verse_rotL32(rx14, 16);
        rx9 += rx14;
        rx4 ^= rx9;
        rx4 = verse_rotL32(rx4, 12);
        rx3 += rx4;
        rx14 ^= rx3;
        rx14 = verse_rotL32(rx14, 8);
        rx9 += rx14;
        rx4 ^= rx9;
        rx4 = verse_rotL32(rx4, 12);
        rx0 += rx4;
        rx12 ^= rx0;
        rx12 = verse_rotL32(rx12, 16);
        rx8 += rx12;
        rx4 ^= rx8;
        rx4 = verse_rotL32(rx4, 12);
        rx0 += rx4;
        rx12 ^= rx0;
        rx12 = verse_rotL32(rx12, 8);
        rx8 += rx12;
        rx4 ^= rx8;
        rx4 = verse_rotL32(rx4, 12);
        rx1 += rx5;
        rx13 ^= rx1;
        rx13 = verse_rotL32(rx13, 16);
        rx9 += rx13;
        rx5 ^= rx9;
        rx5 = verse_rotL32(rx5, 12);
        rx1 += rx5;
        rx13 ^= rx1;
        rx13 = verse_rotL32(rx13, 8);
        rx9 += rx13;
        rx5 ^= rx9;
        rx5 = verse_rotL32(rx5, 12);
        rx2 += rx6;
        rx14 ^= rx2;
        rx14 = verse_rotL32(rx14, 16);
        rx10 += rx14;
        rx6 ^= rx10;
        rx6 = verse_rotL32(rx6, 12);
        rx2 += rx6;
        rx14 ^= rx2;
        rx14 = verse_rotL32(rx14, 8);
        rx10 += rx14;
        rx6 ^= rx10;
        rx6 = verse_rotL32(rx6, 12);
        rx3 += rx7;
        rx15 ^= rx3;
        rx15 = verse_rotL32(rx15, 16);
        rx11 += rx15;
        rx7 ^= rx11;
        rx7 = verse_rotL32(rx7, 12);
        rx3 += rx7;
        rx15 ^= rx3;
        rx15 = verse_rotL32(rx15, 8);
        rx11 += rx15;
        rx7 ^= rx11;
        rx7 = verse_rotL32(rx7, 12);
        rx0 += rx5;
        rx15 ^= rx0;
        rx15 = verse_rotL32(rx15, 16);
        rx10 += rx15;
        rx5 ^= rx10;
        rx5 = verse_rotL32(rx5, 12);
        rx0 += rx5;
        rx15 ^= rx0;
        rx15 = verse_rotL32(rx15, 8);
        rx10 += rx15;
        rx5 ^= rx10;
        rx5 = verse_rotL32(rx5, 12);
        rx1 += rx6;
        rx12 ^= rx1;
        rx12 = verse_rotL32(rx12, 16);
        rx11 += rx12;
        rx6 ^= rx11;
        rx6 = verse_rotL32(rx6, 12);
        rx1 += rx6;
        rx12 ^= rx1;
        rx12 = verse_rotL32(rx12, 8);
        rx11 += rx12;
        rx6 ^= rx11;
        rx6 = verse_rotL32(rx6, 12);
        rx2 += rx7;
        rx13 ^= rx2;
        rx13 = verse_rotL32(rx13, 16);
        rx8 += rx13;
        rx7 ^= rx8;
        rx7 = verse_rotL32(rx7, 12);
        rx2 += rx7;
        rx13 ^= rx2;
        rx13 = verse_rotL32(rx13, 8);
        rx8 += rx13;
        rx7 ^= rx8;
        rx7 = verse_rotL32(rx7, 12);
        rx3 += rx4;
        rx14 ^= rx3;
        rx14 = verse_rotL32(rx14, 16);
        rx9 += rx14;
        rx4 ^= rx9;
        rx4 = verse_rotL32(rx4, 12);
        rx3 += rx4;
        rx14 ^= rx3;
        rx14 = verse_rotL32(rx14, 8);
        rx9 += rx14;
        rx4 ^= rx9;
        rx4 = verse_rotL32(rx4, 12);
        rx0 += rx4;
        rx12 ^= rx0;
        rx12 = verse_rotL32(rx12, 16);
        rx8 += rx12;
        rx4 ^= rx8;
        rx4 = verse_rotL32(rx4, 12);
        rx0 += rx4;
        rx12 ^= rx0;
        rx12 = verse_rotL32(rx12, 8);
        rx8 += rx12;
        rx4 ^= rx8;
        rx4 = verse_rotL32(rx4, 12);
        rx1 += rx5;
        rx13 ^= rx1;
        rx13 = verse_rotL32(rx13, 16);
        rx9 += rx13;
        rx5 ^= rx9;
        rx5 = verse_rotL32(rx5, 12);
        rx1 += rx5;
        rx13 ^= rx1;
        rx13 = verse_rotL32(rx13, 8);
        rx9 += rx13;
        rx5 ^= rx9;
        rx5 = verse_rotL32(rx5, 12);
        rx2 += rx6;
        rx14 ^= rx2;
        rx14 = verse_rotL32(rx14, 16);
        rx10 += rx14;
        rx6 ^= rx10;
        rx6 = verse_rotL32(rx6, 12);
        rx2 += rx6;
        rx14 ^= rx2;
        rx14 = verse_rotL32(rx14, 8);
        rx10 += rx14;
        rx6 ^= rx10;
        rx6 = verse_rotL32(rx6, 12);
        rx3 += rx7;
        rx15 ^= rx3;
        rx15 = verse_rotL32(rx15, 16);
        rx11 += rx15;
        rx7 ^= rx11;
        rx7 = verse_rotL32(rx7, 12);
        rx3 += rx7;
        rx15 ^= rx3;
        rx15 = verse_rotL32(rx15, 8);
        rx11 += rx15;
        rx7 ^= rx11;
        rx7 = verse_rotL32(rx7, 12);
        rx0 += rx5;
        rx15 ^= rx0;
        rx15 = verse_rotL32(rx15, 16);
        rx10 += rx15;
        rx5 ^= rx10;
        rx5 = verse_rotL32(rx5, 12);
        rx0 += rx5;
        rx15 ^= rx0;
        rx15 = verse_rotL32(rx15, 8);
        rx10 += rx15;
        rx5 ^= rx10;
        rx5 = verse_rotL32(rx5, 12);
        rx1 += rx6;
        rx12 ^= rx1;
        rx12 = verse_rotL32(rx12, 16);
        rx11 += rx12;
        rx6 ^= rx11;
        rx6 = verse_rotL32(rx6, 12);
        rx1 += rx6;
        rx12 ^= rx1;
        rx12 = verse_rotL32(rx12, 8);
        rx11 += rx12;
        rx6 ^= rx11;
        rx6 = verse_rotL32(rx6, 12);
        rx2 += rx7;
        rx13 ^= rx2;
        rx13 = verse_rotL32(rx13, 16);
        rx8 += rx13;
        rx7 ^= rx8;
        rx7 = verse_rotL32(rx7, 12);
        rx2 += rx7;
        rx13 ^= rx2;
        rx13 = verse_rotL32(rx13, 8);
        rx8 += rx13;
        rx7 ^= rx8;
        rx7 = verse_rotL32(rx7, 12);
        rx3 += rx4;
        rx14 ^= rx3;
        rx14 = verse_rotL32(rx14, 16);
        rx9 += rx14;
        rx4 ^= rx9;
        rx4 = verse_rotL32(rx4, 12);
        rx3 += rx4;
        rx14 ^= rx3;
        rx14 = verse_rotL32(rx14, 8);
        rx9 += rx14;
        rx4 ^= rx9;
        rx4 = verse_rotL32(rx4, 12);
        rx0 += 0x61707865;
        rx1 += 0x3320646e;
        rx2 += 0x79622d32;
        rx3 += 0x6b206574;
        rx4 += p0[0];
        rx5 += p0[1];
        rx6 += p0[2];
        rx7 += p0[3];
        rx8 += p0[4];
        rx9 += p0[5];
        rx10 += p0[6];
        rx11 += p0[7];
        rx12 += rctr;
        rx13 += p1[0];
        rx14 += p1[1];
        rx15 += p1[2];
        rTmp =  verse_from_le32((*blockPtr)[0]);
        rTmp ^= rx0;
        (*blockPtr)[0] = verse_to_le32( rTmp);
        rTmp =  verse_from_le32((*blockPtr)[1]);
        rTmp ^= rx1;
        (*blockPtr)[1] = verse_to_le32( rTmp);
        rTmp =  verse_from_le32((*blockPtr)[2]);
        rTmp ^= rx2;
        (*blockPtr)[2] = verse_to_le32( rTmp);
        rTmp =  verse_from_le32((*blockPtr)[3]);
        rTmp ^= rx3;
        (*blockPtr)[3] = verse_to_le32( rTmp);
        rTmp =  verse_from_le32((*blockPtr)[4]);
        rTmp ^= rx4;
        (*blockPtr)[4] = verse_to_le32( rTmp);
        rTmp =  verse_from_le32((*blockPtr)[5]);
        rTmp ^= rx5;
        (*blockPtr)[5] = verse_to_le32( rTmp);
        rTmp =  verse_from_le32((*blockPtr)[6]);
        rTmp ^= rx6;
        (*blockPtr)[6] = verse_to_le32( rTmp);
        rTmp =  verse_from_le32((*blockPtr)[7]);
        rTmp ^= rx7;
        (*blockPtr)[7] = verse_to_le32( rTmp);
        rTmp =  verse_from_le32((*blockPtr)[8]);
        rTmp ^= rx8;
        (*blockPtr)[8] = verse_to_le32( rTmp);
        rTmp =  verse_from_le32((*blockPtr)[9]);
        rTmp ^= rx9;
        (*blockPtr)[9] = verse_to_le32( rTmp);
        rTmp =  verse_from_le32((*blockPtr)[10]);
        rTmp ^= rx10;
        (*blockPtr)[10] = verse_to_le32( rTmp);
        rTmp =  verse_from_le32((*blockPtr)[11]);
        rTmp ^= rx11;
        (*blockPtr)[11] = verse_to_le32( rTmp);
        rTmp =  verse_from_le32((*blockPtr)[12]);
        rTmp ^= rx12;
        (*blockPtr)[12] = verse_to_le32( rTmp);
        rTmp =  verse_from_le32((*blockPtr)[13]);
        rTmp ^= rx13;
        (*blockPtr)[13] = verse_to_le32( rTmp);
        rTmp =  verse_from_le32((*blockPtr)[14]);
        rTmp ^= rx14;
        (*blockPtr)[14] = verse_to_le32( rTmp);
        rTmp =  verse_from_le32((*blockPtr)[15]);
        rTmp ^= rx15;
        (*blockPtr)[15] = verse_to_le32( rTmp);
        rctr += 0x00000001;
        ++blockPtr;
        --counter;
        /*    move to next block    */
    }
    p2[0] =  rctr;
}
