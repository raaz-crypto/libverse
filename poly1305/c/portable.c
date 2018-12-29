#include <stdint.h>
#include <verse.h>
void verse_poly1305_c_portable_incremental(uint64_t (*blockPtr)[2], uint64_t counter, uint64_t p0[3], uint64_t p1[2])
{
    /*    Local variables    */
    
    /*    Register variables    */
    register uint64_t rT1;
    register uint64_t rT0;
    register uint64_t rp4;
    register uint64_t rp3;
    register uint64_t rp2;
    register uint64_t rp1;
    register uint64_t rr3;
    register uint64_t rr2;
    register uint64_t rr1;
    register uint64_t rr0;
    register uint64_t ra4;
    register uint64_t ra3;
    register uint64_t ra2;
    register uint64_t ra1;
    register uint64_t ra0;
    
    
    ra1 =  p0[0];
    ra0 = ra1 & 0x00000000ffffffffULL;
    ra1 >>= 32;
    ra3 =  p0[1];
    ra2 = ra3 & 0x00000000ffffffffULL;
    ra3 >>= 32;
    ra4 =  p0[2];
    rr1 =  p1[0];
    rr0 = rr1 & 0x00000000ffffffffULL;
    rr1 >>= 32;
    rr3 =  p1[1];
    rr2 = rr3 & 0x00000000ffffffffULL;
    rr3 >>= 32;
    /*    Iterating over the blocks    */
    while(counter > 0)
    {
        rT1 =  verse_from_le64((*blockPtr)[0]);
        rT0 = rT1 & 0x00000000ffffffffULL;
        rT1 >>= 32;
        ra0 += rT0;
        ra1 += rT1;
        rT1 =  verse_from_le64((*blockPtr)[1]);
        rT0 = rT1 & 0x00000000ffffffffULL;
        rT1 >>= 32;
        ra2 += rT0;
        ra3 += rT1;
        ++ra4;
        rp3 = ra0 * rr3;
        rT0 = ra1 * rr2;
        rp3 += rT0;
        rT0 = ra2 * rr1;
        rp3 += rT0;
        rT0 = ra3 * rr0;
        rp3 += rT0;
        rp2 = ra0 * rr2;
        rT0 = ra1 * rr1;
        rp2 += rT0;
        rT0 = ra2 * rr0;
        rp2 += rT0;
        rp1 = ra0 * rr1;
        rT0 = ra1 * rr0;
        rp1 += rT0;
        ra0 *= rr0;
        rT0 = rr3 >> 2;
        rT0 += rr3;
        rT1 = ra1 * rT0;
        ra0 += rT1;
        rT1 = ra2 * rT0;
        ra1 = rp1 + rT1;
        rT1 = ra3 * rT0;
        rp2 += rT1;
        rT1 = ra4 * rT0;
        rp3 += rT1;
        rT0 = rr2 >> 2;
        rT0 += rr2;
        rT1 = ra2 * rT0;
        ra0 += rT1;
        rT1 = ra3 * rT0;
        ra1 += rT1;
        rT1 = ra4 * rT0;
        ra2 = rp2 + rT1;
        rT0 = rr1 >> 2;
        rT0 += rr1;
        rT1 = ra3 * rT0;
        ra0 += rT1;
        rT1 = ra4 * rT0;
        ra1 += rT1;
        rT0 = rr0 >> 2;
        rT0 *= 0x0000000000000005ULL;
        rT1 = ra4 * rT0;
        ra0 += rT1;
        ra3 =  rp3;
        rp4 = rr0 & 0x0000000000000003ULL;
        ra4 *= rp4;
        rT0 = ra3 >> 32;
        ra3 &= 0x00000000ffffffffULL;
        ra4 += rT0;
        rT0 = ra4 >> 2;
        ra4 &= 0x0000000000000003ULL;
        rT0 *= 0x0000000000000005ULL;
        ra0 += rT0;
        rT0 = ra0 >> 32;
        ra0 &= 0x00000000ffffffffULL;
        ra1 += rT0;
        rT0 = ra1 >> 32;
        ra1 &= 0x00000000ffffffffULL;
        ra2 += rT0;
        rT0 = ra2 >> 32;
        ra2 &= 0x00000000ffffffffULL;
        ra3 += rT0;
        rT0 = ra3 >> 32;
        ra3 &= 0x00000000ffffffffULL;
        ra4 += rT0;
        ++blockPtr;
        --counter;
        /*    move to next block    */
    }
    ra1 <<= 32;
    ra1 |= ra0;
    p0[0] =  ra1;
    ra3 <<= 32;
    ra3 |= ra2;
    p0[1] =  ra3;
    p0[2] =  ra4;
}
#include <stdint.h>
#include <verse.h>
void verse_poly1305_c_portable_blockmac(uint64_t (*blockPtr)[2], uint64_t counter, uint64_t p0[3], uint64_t p1[2], uint64_t p2[2])
{
    /*    Local variables    */
    
    /*    Register variables    */
    register uint64_t rT1;
    register uint64_t rT0;
    register uint64_t rp4;
    register uint64_t rp3;
    register uint64_t rp2;
    register uint64_t rp1;
    register uint64_t rr3;
    register uint64_t rr2;
    register uint64_t rr1;
    register uint64_t rr0;
    register uint64_t ra4;
    register uint64_t ra3;
    register uint64_t ra2;
    register uint64_t ra1;
    register uint64_t ra0;
    
    
    ra1 =  p0[0];
    ra0 = ra1 & 0x00000000ffffffffULL;
    ra1 >>= 32;
    ra3 =  p0[1];
    ra2 = ra3 & 0x00000000ffffffffULL;
    ra3 >>= 32;
    ra4 =  p0[2];
    rr1 =  p1[0];
    rr0 = rr1 & 0x00000000ffffffffULL;
    rr1 >>= 32;
    rr3 =  p1[1];
    rr2 = rr3 & 0x00000000ffffffffULL;
    rr3 >>= 32;
    /*    Iterating over the blocks    */
    while(counter > 0)
    {
        rT1 =  verse_from_le64((*blockPtr)[0]);
        rT0 = rT1 & 0x00000000ffffffffULL;
        rT1 >>= 32;
        ra0 += rT0;
        ra1 += rT1;
        rT1 =  verse_from_le64((*blockPtr)[1]);
        rT0 = rT1 & 0x00000000ffffffffULL;
        rT1 >>= 32;
        ra2 += rT0;
        ra3 += rT1;
        ++ra4;
        rp3 = ra0 * rr3;
        rT0 = ra1 * rr2;
        rp3 += rT0;
        rT0 = ra2 * rr1;
        rp3 += rT0;
        rT0 = ra3 * rr0;
        rp3 += rT0;
        rp2 = ra0 * rr2;
        rT0 = ra1 * rr1;
        rp2 += rT0;
        rT0 = ra2 * rr0;
        rp2 += rT0;
        rp1 = ra0 * rr1;
        rT0 = ra1 * rr0;
        rp1 += rT0;
        ra0 *= rr0;
        rT0 = rr3 >> 2;
        rT0 += rr3;
        rT1 = ra1 * rT0;
        ra0 += rT1;
        rT1 = ra2 * rT0;
        ra1 = rp1 + rT1;
        rT1 = ra3 * rT0;
        rp2 += rT1;
        rT1 = ra4 * rT0;
        rp3 += rT1;
        rT0 = rr2 >> 2;
        rT0 += rr2;
        rT1 = ra2 * rT0;
        ra0 += rT1;
        rT1 = ra3 * rT0;
        ra1 += rT1;
        rT1 = ra4 * rT0;
        ra2 = rp2 + rT1;
        rT0 = rr1 >> 2;
        rT0 += rr1;
        rT1 = ra3 * rT0;
        ra0 += rT1;
        rT1 = ra4 * rT0;
        ra1 += rT1;
        rT0 = rr0 >> 2;
        rT0 *= 0x0000000000000005ULL;
        rT1 = ra4 * rT0;
        ra0 += rT1;
        ra3 =  rp3;
        rp4 = rr0 & 0x0000000000000003ULL;
        ra4 *= rp4;
        rT0 = ra3 >> 32;
        ra3 &= 0x00000000ffffffffULL;
        ra4 += rT0;
        rT0 = ra4 >> 2;
        ra4 &= 0x0000000000000003ULL;
        rT0 *= 0x0000000000000005ULL;
        ra0 += rT0;
        rT0 = ra0 >> 32;
        ra0 &= 0x00000000ffffffffULL;
        ra1 += rT0;
        rT0 = ra1 >> 32;
        ra1 &= 0x00000000ffffffffULL;
        ra2 += rT0;
        rT0 = ra2 >> 32;
        ra2 &= 0x00000000ffffffffULL;
        ra3 += rT0;
        rT0 = ra3 >> 32;
        ra3 &= 0x00000000ffffffffULL;
        ra4 += rT0;
        ++blockPtr;
        --counter;
        /*    move to next block    */
    }
    rT0 = ra4 >> 2;
    ra4 &= 0x0000000000000003ULL;
    rT0 *= 0x0000000000000005ULL;
    ra0 += rT0;
    rT0 = ra0 + 0x0000000000000005ULL;
    rT0 >>= 32;
    rT0 += ra1;
    rT0 >>= 32;
    rT0 += ra2;
    rT0 >>= 32;
    rT0 += ra3;
    rT0 >>= 32;
    rT0 += ra4;
    rT0 >>= 2;
    rT0 = rT0 * 0x0000000000000005ULL;
    ra0 += rT0;
    rT0 = ra0 >> 32;
    ra0 &= 0x00000000ffffffffULL;
    ra1 += rT0;
    rT0 = ra1 >> 32;
    ra1 &= 0x00000000ffffffffULL;
    ra2 += rT0;
    rT0 = ra2 >> 32;
    ra2 &= 0x00000000ffffffffULL;
    ra3 += rT0;
    rT0 = ra3 >> 32;
    ra3 &= 0x00000000ffffffffULL;
    ra4 += rT0;
    rT1 =  p2[0];
    rT0 = rT1 & 0x00000000ffffffffULL;
    rT1 >>= 32;
    ra0 += rT0;
    ra1 += rT1;
    rT1 =  p2[1];
    rT0 = rT1 & 0x00000000ffffffffULL;
    rT1 >>= 32;
    ra2 += rT0;
    ra3 += rT1;
    rT0 = ra0 >> 32;
    ra0 &= 0x00000000ffffffffULL;
    ra1 += rT0;
    rT0 = ra1 >> 32;
    ra1 &= 0x00000000ffffffffULL;
    ra2 += rT0;
    rT0 = ra2 >> 32;
    ra2 &= 0x00000000ffffffffULL;
    ra3 += rT0;
    rT0 = ra3 >> 32;
    ra3 &= 0x00000000ffffffffULL;
    ra4 += rT0;
    ra1 <<= 32;
    ra1 |= ra0;
    p0[0] =  ra1;
    ra3 <<= 32;
    ra3 |= ra2;
    p0[1] =  ra3;
    p0[2] =  ra4;
}
#include <stdint.h>
#include <verse.h>
void verse_poly1305_c_portable_partialmac(uint64_t p0[2], uint64_t p1[3], uint64_t p2[2], uint64_t p3[2])
{
    /*    Local variables    */
    
    /*    Register variables    */
    register uint64_t rT1;
    register uint64_t rT0;
    register uint64_t rp4;
    register uint64_t rp3;
    register uint64_t rp2;
    register uint64_t rp1;
    register uint64_t rr3;
    register uint64_t rr2;
    register uint64_t rr1;
    register uint64_t rr0;
    register uint64_t ra4;
    register uint64_t ra3;
    register uint64_t ra2;
    register uint64_t ra1;
    register uint64_t ra0;
    
    
    ra1 =  p1[0];
    ra0 = ra1 & 0x00000000ffffffffULL;
    ra1 >>= 32;
    ra3 =  p1[1];
    ra2 = ra3 & 0x00000000ffffffffULL;
    ra3 >>= 32;
    ra4 =  p1[2];
    rr1 =  p2[0];
    rr0 = rr1 & 0x00000000ffffffffULL;
    rr1 >>= 32;
    rr3 =  p2[1];
    rr2 = rr3 & 0x00000000ffffffffULL;
    rr3 >>= 32;
    rT1 =  verse_from_le64(p0[0]);
    rT0 = rT1 & 0x00000000ffffffffULL;
    rT1 >>= 32;
    ra0 += rT0;
    ra1 += rT1;
    rT1 =  verse_from_le64(p0[1]);
    rT0 = rT1 & 0x00000000ffffffffULL;
    rT1 >>= 32;
    ra2 += rT0;
    ra3 += rT1;
    rp3 = ra0 * rr3;
    rT0 = ra1 * rr2;
    rp3 += rT0;
    rT0 = ra2 * rr1;
    rp3 += rT0;
    rT0 = ra3 * rr0;
    rp3 += rT0;
    rp2 = ra0 * rr2;
    rT0 = ra1 * rr1;
    rp2 += rT0;
    rT0 = ra2 * rr0;
    rp2 += rT0;
    rp1 = ra0 * rr1;
    rT0 = ra1 * rr0;
    rp1 += rT0;
    ra0 *= rr0;
    rT0 = rr3 >> 2;
    rT0 += rr3;
    rT1 = ra1 * rT0;
    ra0 += rT1;
    rT1 = ra2 * rT0;
    ra1 = rp1 + rT1;
    rT1 = ra3 * rT0;
    rp2 += rT1;
    rT1 = ra4 * rT0;
    rp3 += rT1;
    rT0 = rr2 >> 2;
    rT0 += rr2;
    rT1 = ra2 * rT0;
    ra0 += rT1;
    rT1 = ra3 * rT0;
    ra1 += rT1;
    rT1 = ra4 * rT0;
    ra2 = rp2 + rT1;
    rT0 = rr1 >> 2;
    rT0 += rr1;
    rT1 = ra3 * rT0;
    ra0 += rT1;
    rT1 = ra4 * rT0;
    ra1 += rT1;
    rT0 = rr0 >> 2;
    rT0 *= 0x0000000000000005ULL;
    rT1 = ra4 * rT0;
    ra0 += rT1;
    ra3 =  rp3;
    rp4 = rr0 & 0x0000000000000003ULL;
    ra4 *= rp4;
    rT0 = ra3 >> 32;
    ra3 &= 0x00000000ffffffffULL;
    ra4 += rT0;
    rT0 = ra4 >> 2;
    ra4 &= 0x0000000000000003ULL;
    rT0 *= 0x0000000000000005ULL;
    ra0 += rT0;
    rT0 = ra0 >> 32;
    ra0 &= 0x00000000ffffffffULL;
    ra1 += rT0;
    rT0 = ra1 >> 32;
    ra1 &= 0x00000000ffffffffULL;
    ra2 += rT0;
    rT0 = ra2 >> 32;
    ra2 &= 0x00000000ffffffffULL;
    ra3 += rT0;
    rT0 = ra3 >> 32;
    ra3 &= 0x00000000ffffffffULL;
    ra4 += rT0;
    rT0 = ra4 >> 2;
    ra4 &= 0x0000000000000003ULL;
    rT0 *= 0x0000000000000005ULL;
    ra0 += rT0;
    rT0 = ra0 + 0x0000000000000005ULL;
    rT0 >>= 32;
    rT0 += ra1;
    rT0 >>= 32;
    rT0 += ra2;
    rT0 >>= 32;
    rT0 += ra3;
    rT0 >>= 32;
    rT0 += ra4;
    rT0 >>= 2;
    rT0 = rT0 * 0x0000000000000005ULL;
    ra0 += rT0;
    rT0 = ra0 >> 32;
    ra0 &= 0x00000000ffffffffULL;
    ra1 += rT0;
    rT0 = ra1 >> 32;
    ra1 &= 0x00000000ffffffffULL;
    ra2 += rT0;
    rT0 = ra2 >> 32;
    ra2 &= 0x00000000ffffffffULL;
    ra3 += rT0;
    rT0 = ra3 >> 32;
    ra3 &= 0x00000000ffffffffULL;
    ra4 += rT0;
    rT1 =  p3[0];
    rT0 = rT1 & 0x00000000ffffffffULL;
    rT1 >>= 32;
    ra0 += rT0;
    ra1 += rT1;
    rT1 =  p3[1];
    rT0 = rT1 & 0x00000000ffffffffULL;
    rT1 >>= 32;
    ra2 += rT0;
    ra3 += rT1;
    rT0 = ra0 >> 32;
    ra0 &= 0x00000000ffffffffULL;
    ra1 += rT0;
    rT0 = ra1 >> 32;
    ra1 &= 0x00000000ffffffffULL;
    ra2 += rT0;
    rT0 = ra2 >> 32;
    ra2 &= 0x00000000ffffffffULL;
    ra3 += rT0;
    rT0 = ra3 >> 32;
    ra3 &= 0x00000000ffffffffULL;
    ra4 += rT0;
    ra1 <<= 32;
    ra1 |= ra0;
    p1[0] =  ra1;
    ra3 <<= 32;
    ra3 |= ra2;
    p1[1] =  ra3;
    p1[2] =  ra4;
}
#include <stdint.h>
#include <verse.h>
void verse_poly1305_c_portable_clamp(uint64_t (*blockPtr)[2], uint64_t counter)
{
    /*    Local variables    */
    
    /*    Register variables    */
    register uint64_t rtemp;
    
    
    /*    Iterating over the blocks    */
    while(counter > 0)
    {
        rtemp =  verse_from_le64((*blockPtr)[0]);
        rtemp &= 0x0ffffffc0fffffffULL;
        (*blockPtr)[0] = verse_to_le64( rtemp);
        rtemp =  verse_from_le64((*blockPtr)[1]);
        rtemp &= 0x0ffffffc0ffffffcULL;
        (*blockPtr)[1] = verse_to_le64( rtemp);
        ++blockPtr;
        --counter;
        /*    move to next block    */
    }
}
