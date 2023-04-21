// isalnum() checks whether the given character is alphanumeric or not.
// defined in ctype.h header file.
// Alphanumeric: A character that is either a letter or a number.
// Syntax: int isalnum(int x);

#include "./include/libft.h"

int ft_isalnum(int c)
{
    if (ft_isalpha(c) || ft_isdigit(c))
    {
        return (1);
    }

    return (0);
}
