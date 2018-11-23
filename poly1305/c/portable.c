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
