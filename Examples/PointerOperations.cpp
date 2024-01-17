#include <cstring.h>

memcmp(void* m1, void* m2, uint n) // Compares the first n bytes of m1 with the first n bytes of m2.
memcpy(void* to, void* from, uint n) // Copies the first n bytes of from to to.
memmove(void* to, void* from, uint n) // memcpy() that can handle overlaps
memset(void* loc, uchar ch, uint n) // creates a string of n chs starting at loc.