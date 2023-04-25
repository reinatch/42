#include "./include/libft.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#ifndef HAVE_STRLCPY
/*
 * '_cups_strlcpy()' - Safely copy two strings.
 */

size_t					 /* O - Length of string */
strlcpy(char *dst,		 /* O - Destination string */
		const char *src, /* I - Source string */
		size_t size)	 /* I - Size of destination string buffer */
{
	size_t src_len = strlen(src);
	if (src_len < size)
	{
		memmove(dst, src, src_len + 1); // handles overlap without UB
	}
	else if (size > 0)
	{
		// Not enough room
		memmove(dst, src, size - 1); // handles overlap without UB
		dst[size - 1] = '\0';
	}
	return src_len; // I do not think OP's return value is correct. S/B src length.
}
#endif /* !HAVE_STRLCPY */
#ifndef HAVE_STRLCAT
/*
 * '_cups_strlcat()' - Safely concatenate two strings.
 */

size_t					 /* O - Length of string */
strlcat(char *dst,		 /* O - Destination string */
		const char *src, /* I - Source string */
		size_t size)	 /* I - Size of destination string buffer */
{
	const size_t srclen = strlen(src);
	const size_t dstlen = strnlen(dst, size);
	if (dstlen == size)
		return size + srclen;
	if (srclen < size - dstlen)
	{
		memcpy(dst + dstlen, src, srclen + 1);
	}
	else
	{
		memcpy(dst + dstlen, src, size - 1);
		dst[dstlen + size - 1] = '\0';
	}
	return dstlen + srclen;
}
#endif /* !HAVE_STRLCAT */
void test(size_t size)
{
	char string[] = "Hello there, Venus";
	char buffer[19];
	int r;

	r = strlcpy(buffer, string, size);

	printf("Copied '%s' into '%s', length %d\n",
		   string,
		   buffer,
		   r);
}
int main(int ac, char **av)
{
	char b = *av[1];
	const char *c = av[1];
	// char *dst = av[1];
	// const char *src = av[2];
	// char dst = 'agagag';
	// const char src = 'av[2]';
	// (void)ac;
	// (void)av;
	// int b = 54;
	// int ft_isalpha(int c);
	printf("ft_isalpha: %i\n", ft_isalpha(b));
	// int ft_isdigit(int c);
	printf("ft_isdigit: %i\n", ft_isdigit(b));
	// int ft_isalnum(int c);
	printf("ft_isalnum: %i\n", ft_isalnum(b));
	// int ft_isascii(int c);
	printf("ft_isascii: %i\n", ft_isascii(b));
	// int ft_isprint(int c);
	printf("ft_isprint: %i\n", ft_isprint(b));
	// size_t ft_strlen(const char *s);
	printf("ft_strlen: %zu\n", ft_strlen(c));
	char *string = av[2];
	char *buffer = av[1];
	char try[] = "quarenta e dois";
	char f = 'o';

	// size_t ft_strlcpy(char *dst, const char *src, size_t size);
	size_t m = ft_strlcpy(buffer, string, ac);
	size_t n = strlcpy(buffer, string, ac);
	printf("ft_strlcpy:Copied '%s' into '%s', length %zu\n", string, buffer, m);
	printf("strlcpy:Copied '%s' into '%s', length %zu\n", string, buffer, n);
	// size_t ft_strlcat(char *dst, const char *src, size_t size);
	size_t o = ft_strlcat(buffer, string, ac);
	size_t p = strlcat(buffer, string, ac);
	printf("ft_strlcat:Copied '%s' into '%s', length %zu\n", string, buffer, o);
	printf("strlcat:Copied '%s' into '%s', length %zu\n", string, buffer, p);
	// char *ft_strchr(const char *s, int c);
	char *q = ft_strchr(try, f);
	char *r = strchr(try, f);
	printf("ft_strchr:found %s\n", q);
	printf("strchr:found %s\n", r);
	// char *ft_strrchr(const char *s, int c);
	char *ft = ft_strrchr(try, f);
	char *st = strrchr(try, f);
	printf("ft_strrchr:found %s\n", ft);
	printf("strrchr:found %s\n", st);
	// int ft_strncmp(const char *s1, const char *s2, size_t n);
	int s = ft_strncmp(buffer, string, ac);
	int t = strncmp(buffer, string, ac);
	printf("ft_strncmp:Copied  %i\n", s);
	printf("strncmp:Copied  %i\n", t);
	// char *ft_strnstr(const char *big, const char *little, size_t len);
	char haystack[] = "Hello, world!";
	char needle[] = "world";
	char *res = ft_strnstr(haystack, needle, strlen(haystack));
	// char *res1 = strnstr(haystack, needle, strlen(haystack));
	printf("ft_strnstr:found %s\n", res);
	// printf("strnstr:found %s\n", res1);

	return 0;
}
