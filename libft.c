#include "./include/libft.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>


// cc libft.c libft.a -o tr -Wall -Wextra -Werror

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

int main(int ac, char **av)
{
	char b = *av[1];
	char d = *av[3];
	const char *c = av[2];
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
	// int ft_toupper(int c)
	printf("ft_toupper: %c\n", ft_toupper(b));
	// int ft_tolower(int c)
	printf("ft_tolower: %c\n", ft_tolower(d));
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
	printf("ft_strnstr:found %s\n", res);
	// char *ft_strdup(const char *s);
	char *resdup = ft_strdup("24 duplicado 42!");
	printf("ft_strdup:found %s\n", resdup);
	// void ft_bzero(void *s, size_t n);
	char buffert[] = "42zerado42!";
	printf("ft_bzero:found %s\n", buffert);
	bzero(buffert, sizeof(buffert));
	for (long unsigned int i = 0; i < sizeof(buffert); i++)
	{
		printf("_ %c ", buffert[i]);
	}
	printf("\n");
	// void *ft_memset(void *s, int c, size_t n);
	char bufmem[] = "42memset42!";
	printf("ft_memset:found %s\n", bufmem);
	char cc = '0';
	ft_memset(bufmem, cc, 6);
	for (long unsigned int i = 0; i < sizeof(bufmem); i++)
	{
		printf("%c", bufmem[i]);
	}
	printf("\n");
	// void *ft_memcpy(void *dest, const void *src, size_t n)
	char bufmemcpy[] = "42memcpy42!";
	printf("ft_memcpy:found %s\n", bufmemcpy);
	char dest[18];
	ft_memcpy(dest, bufmemcpy, 6);
	for (long unsigned int i = 0; i < sizeof(dest); i++)
	{
		printf("%c", dest[i]);
	}
	printf("\n");
	// void *ft_memmove(void *dest, const void *src, size_t n)
	char bufmemmove[] = "42memmove42!";
	printf("ft_memmove:found %s\n", bufmemmove);
	char destm[2];
	ft_memmove(destm, bufmemmove, 6);
	for (long unsigned int i = 0; i < sizeof(destm); i++)
	{
		printf("%c", destm[i]);
	}
	printf("\n");
	// void *ft_memchr(const void *s, int c, size_t n)
	char bufmemchr[] = "42menTchr42!";
	printf("ft_memchr:found %s\n", bufmemchr);
	char strt[] = "Quando encontrares . segue!";
	char ct = 'e';
	ft_memchr(strt, ct, ft_strlen(strt));
	// for (int i = 0; i < sizeof(bufmemchr); i++)
	// {
	printf("%p", ft_memchr(strt, ct, ft_strlen(strt)));
	// }
	printf("\n");
	// int ft_memcmp(const void *s1, const void *s2, size_t n)
	char bufmemcmp[] = "42menTchr42!";
	printf("ft_memcmp:found %s\n", bufmemcmp);
	char strtr[] = "42 e 42";
	char ctr[] = "24 e 24";
	ft_memcmp(strtr, ctr, ft_strlen(strtr));
	// for (int i = 0; i < sizeof(bufmemcmp); i++)
	// {
	printf("%d", ft_memcmp(strtr, ctr, ft_strlen(strtr)));
	// }
	printf("\n");
	// int ft_atoi(const char *nptr)
	char atoi1[] = "15613";
	char atoi2[] = "-15613";
	char atoi3[] = "+15asd613";
	char atoi4[] = "-1561dase3";
	printf("ft_atoi: %d\n", ft_atoi(atoi1));
	printf("ft_atoi: %d\n", ft_atoi(atoi2));
	printf("ft_atoi: %d\n", ft_atoi(atoi3));
	printf("ft_atoi: %d\n", ft_atoi(atoi4));

	int *array;
	int i;

	// Allocate an array of 5 integers
	array = ft_calloc(5, sizeof(int));

	// Check if allocation was successful
	if (array == NULL)
	{
		printf("Error: memory allocation failed\n");
		return EXIT_FAILURE;
	}

	// Print the contents of the array
	printf("Array contents:\n");
	for (i = 0; i < 5; i++)
	{
		printf("%d\n", array[i]);
	}

	// Free the allocated memory
	free(array);

	char bufsubstr[] = "42 substr 42!";
	printf("ft_substr:found %s\n", bufsubstr);
	// for (int i = 0; i < sizeof(bufsubstr); i++)
	// {
	// printf("%d", substring(bufsubstr, 4, (ft_strlen(bufsubstr) - 4)));
	printf("%s", ft_substr(bufsubstr, 14, (ft_strlen(bufsubstr) - 4)));
	// }



	//LINKED LISTS

	char	*str;

	t_list	*elem;
	str = (char *)malloc(6*sizeof(char));
	str = "Hello";
	elem = ft_lstnew((void *)str);
	printf("%s\n", (char *)elem->content);
	// free(head->content);



	printf("\n");

	return 0;
}
