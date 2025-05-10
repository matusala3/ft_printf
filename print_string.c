#include "ft_printf.h"

int print_string(va_list *args)
{
    int i;
    char *str;

    i = 0;
    str = va_arg(*args, char *);
    if(str == NULL)
        return (write(1, "(null)", 6));
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
    return (i);
}