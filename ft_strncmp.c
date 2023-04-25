// The function takes three arguments:

// str1 - A pointer to the first string to be compared.
// str2 - A pointer to the second string to be compared.
// n - The maximum number of characters to be compared.
// The function returns an integer value indicating the result of the comparison:

// If the two strings are equal up to the first n characters, it returns 0.
// If the first differing character in str1 is less than the corresponding character in str2, it returns a negative value.
// If the first differing character in str1 is greater than the corresponding character in str2, it returns a positive value.
// Note that strncmp only compares the first n characters of the strings. If the strings are shorter than n

#include "./include/libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    while (i < n && s1[i] && s1[i] == s2[i])
        i++;
    if (i == n)
    {
        return (0);
    }
    else
    {
        return s1[i] - s2[i];
    }
}