// str − This is the C string.

// c − This is the character to be located. It is passed as its int promotion, but it is internally converted back to char.
// This function returns a pointer to the last occurrence of character in str. If the value is not found, the function returns a null pointer.

#include "./include/libft.h"

char *ft_strrchr(const char *s, int c)
{
    char *k;

    k = NULL;
    while (*s)
    {
        if (*s == (unsigned char)c)
            k = (char *)s;
        s++;
    }
    if (c == 0)
        return ((char *)s);
    return (k);
}