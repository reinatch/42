// memcpy is a standard library function in the C programming language that copies a block of memory from one location to another. The function takes a pointer to the destination memory, a pointer to the source memory, and the number of bytes to copy
#include "./include/libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *d;
    const unsigned char *s;
    size_t i;

    if (!dest && !src)
        return (dest);
    d = dest;
    s = src;
    i = 0;
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }

    return dest;
}