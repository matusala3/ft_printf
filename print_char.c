#include "ft_printf.h"

int print_char(va_list *args)
{
    char c;
    c = (char)va_arg(*args, int);
    return(write(1, &c, 1));
}
