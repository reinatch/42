//  The memchr() function scans the initial n bytes of the memory
//        area pointed to by s for the first instance of c.  Both c and the
//        bytes of the memory area pointed to by s are interpreted as
//        unsigned char.
//    The memchr() and memrchr() functions return a pointer to the
//    matching byte or NULL if the character does not occur in the
//    given memory area.

#include "./include/libft.h"
void *ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char *p;
    unsigned char uc;

    uc = c;
    p = s;

    while (n-- > 0)
    {
        if (*p == uc)
        {
            return (void *)p; // cast back to void pointer
        }
        p++;
    }
    return NULL;
}
