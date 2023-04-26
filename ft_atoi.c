//    The atoi() function converts the initial portion of the string
//    pointed to by nptr to int.  The behavior is the same as

//        strtol(nptr, NULL, 10);

//    except that atoi() does not detect errors.

#include "./include/libft.h"
int ft_atoi(const char *nptr)
{
    int i;
    int sign;
    int result;

    i = 0;
    sign = 1;
    result = 0;

    while (nptr[i] == '\t' || nptr[i] == '\r' || nptr[i] == ' ' || nptr[i] == '\f' || nptr[i] == '\v' || nptr[i] == '\n')
        i++;
    if (nptr[i] == '+' || nptr[i] == '-')
    {
        if (nptr[i] == '-')
            sign *= -1;
        i++;
    }
    while (nptr[i] >= '0' && nptr[i] <= '9')
    {
        result = result * 10 + (nptr[i] - '0');
        i++;
    }
    return sign * result;
}