// Function name ft_substr
// Prototype char *ft_substr(char const *s, unsigned int start,
// size_t len);
// Turn in files -
// Parameters  s: The string from which to create the substring.
//             start: The start index of the substring in the string ’s’.
//             len: The maximum len of the substring.
// Return value The substring.
// NULL if the allocation fails.
// External functs. malloc
// Description Allocates (with malloc(3)) and returns a substring
// from the string ’s’.
// The substring begins at index ’start’ and is of
// maximum size ’len’.

#include "./include/libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *sub;
    size_t i;

    i = 0;
    sub = malloc(len + 1);
    if (sub == NULL)
        return NULL;
    while (i < len && s[start + i] != '\0')
    {
        sub[i] = s[start + i];
        i++;
    }
    sub[i] = '\0';

    return sub;
}
