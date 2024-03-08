#include "libft.h"

int str_len(char *str)
{
    int len;

    len = 0;
    while(str[len])
        len ++;
    return(len);
}