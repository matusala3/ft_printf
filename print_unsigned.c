#include "ft_printf.h"

static int count_digits(long n)
{
    int count;

    count = 0;
    if (n == 0)
        return 1;
    while (n) 
    {
        n /= 10;
        count++;
    }
    return count;
}

static int ft_utoa(unsigned int n)
{
    int len;
    char *res;

    len = count_digits(n);
    res = malloc(len + 1);
    if(!res)
        return (NULL);
    res[len] = '\0';
    while(len--)
    {
        res[len] = (n % 10) + '0';
        n = n / 10;
    }
    return (res);

}

int print_unsigned(va_list *args)
{
    unsigned int n;
    char *str;
    int bytes;
    int i;

    i = 0;
    bytes = 0;
    n = va_arg(*args, unsigned int);
    str = ft_utoa(n);
    if(!str)
        return (-1);
    while (str[i])
        i++;
    bytes = write(1, str, i);
    free(str);
    return (bytes);
}