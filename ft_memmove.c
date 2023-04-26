//   The memmove() function copies n bytes from memory area src to
//    memory area dest.  The memory areas may overlap: copying takes
//    place as though the bytes in src are first copied into a
//    temporary array that does not overlap src or dest, and the bytes
//    are then copied from the temporary array to dest.

#include "./include/libft.h"
void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *d;
    const unsigned char *s;
    size_t i;

    if (!dest && !src)
        return dest;
    d = dest;
    s = src;
    i = 0;
    if (d < s)
    {
        while (i < n)
        {
            *d++ = *s++;
            i++;
        }
    }
    else
    {
        while (n)
        {
            d[n - 1] = s[n - 1];
            n--;
        }
    }
    return dest;
}