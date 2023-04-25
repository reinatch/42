// The strlcpy() and strlcat() functions copy and concatenate strings with the same input parameters and output result as snprintf(3). They are designed to be safer, more consistent, and less error prone replacements for the easily misused functions strncpy(3) and strncat(3).

// strlcpy() and strlcat() take the full size of the destination buffer and guarantee NUL-termination if there is room. Note that room for the NUL should be included in dstsize.

// strlcpy() copies up to dstsize - 1 characters from the string src to dst, NUL-terminating the result if dstsize is not 0.

// strlcat() appends string src to the end of dst. It will append at most dstsize - strlen(dst) - 1 characters. It will then NUL-terminate, unless dstsize is 0 or the original dst string was longer than dstsize (in practice this should not happen as it means that either dstsize is incorrect or that dst is not a proper string).

// If the src and dst strings overlap, the behavior is undefined
// Besides quibbles over the return type (size_t versus int) and signal handler safety (snprintf(3) is not entirely safe on some systems), the following two are equivalent:

// n = strlcpy(dst, src, len);
// n = snprintf(dst, len, "%s", src);
// Like snprintf(3), the strlcpy() and strlcat() functions return the total length of the string they tried to create. For strlcpy() that means the length of src. For strlcat() that means the initial length of dst plus the length of src.

// If the return value is >= dstsize, the output string has been truncated. It is the caller's responsibility to handle this.
#include "./include/libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;

    if (!size)
        return (ft_strlen(src));
    i = 0;
    while (src[i] && (i < size - 1))
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = 0;
    return (ft_strlen(src));
    // char *d = dst;
    // char *e = dst + size; /* end of destination buffer */
    // const char *s = src;

    // /* Insert characters into the destination buffer
    //    until we reach the end of the source string
    //    or the end of the destination buffer, whichever
    //    comes first. */
    // while (*s != '\0' && d < e)
    //     *d++ = *s++;

    // /* Terminate the destination buffer, being wary of the fact
    //    that size might be zero. */
    // if (d < e) // If the destination buffer still has room.
    //     *d = 0;
    // else if (size > 0) // We ran out of room, so zero out the last char
    //                    // (if the destination buffer has any items at all).
    //     d[-1] = 0;

    // /* Advance to the end of the source string. */
    // while (*s != '\0')
    //     s++;

    // /* Return the number of characters
    //    between *src and *s,
    //    including *src but not including *s .
    //    This is the length of the source string. */
    // return s - src;
}
