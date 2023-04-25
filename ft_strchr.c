// The strchr() function returns a pointer to the first occurrence of the character c in the string s.
//  The strchr() and strrchr() functions return a pointer to the matched character or NULL if the character is not found.  The terminating null byte is considered part of the string, so that if c is specified as '\0', these functions return a pointer to the terminator.

char *ft_strchr(const char *s, int c)
{
    char *k;

    k = (char *)s;
    while (*k)
    {
        if (*k == (unsigned char)c)
            return (k);
        k++;
    }
    if (c == 0)
        return (k);
    return (0);
}
