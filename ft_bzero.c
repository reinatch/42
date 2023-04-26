// bzero is a function in the C programming language that sets a block of memory to zero. It is defined in the <strings.h> header file.

// The function takes two arguments: a pointer to the memory block and the size of the block to be set to zero. It is similar to the memset function, but is deprecated in favor of memset since the C11 standard.
// void ft_bzero(void *s, size_t n);
#include "./include/libft.h"
void ft_bzero(void *s, size_t n)
{
    char *m;

    m = s;
    while (n)
    {
        *m++ = 0;
        --n;
    }
}