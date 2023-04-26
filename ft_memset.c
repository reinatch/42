// memset function: it takes a pointer to a memory block, a value to set the memory to, and the number of
// bytes to set. The function then sets each byte of the memory block to the specified value.
#include "./include/libft.h"

void *ft_memset(void *s, int c, size_t n)
{
    size_t i;
    unsigned char *str;

    str = s;
    i = 0;
    while (i < n)
    {
        str[i] = c;
        i++;
    }
    return s;
}