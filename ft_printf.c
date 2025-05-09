/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magebreh <magebreh@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 10:08:47 by magebreh          #+#    #+#             */
/*   Updated: 2025/05/09 18:49:32 by magebreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int print_char(va_list *args)
{
    char c;
    c = (char)va_arg(*args, int);
    return(write(1, &c, 1));
}

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

int count_digits(long n)
{
    int count;

    count = 0;
    if (n == 0)
        return 1;
    while (n) {
        n /= 10;
        count++;
    }
    return count;
}

char *ft_itoa(int n)
{
    long num;
    int sign;
    int len;
    char *res;
    
    num = n;
    sign = (n < 0);
    len = count_digits(num) + sign;
    res = malloc(len + 1);
    if (!res)
        return NULL;
    if (sign)
        num = -num;
    res[len] = '\0';
    while (len-- > sign) {
        res[len] = (num % 10) + '0';
        num /= 10;
    }
    if (sign)
        res[0] = '-';
    return res;
}

int print_integer(va_list *args)
{
    int n;
    char *str;
    int bytes;
    int i;
    
    i = 0;
    bytes = 0;
    n = va_arg(*args, int);
    str = ft_itoa(n);
    if (!str)
        return -1;
    while (str[i])
        i++;
    bytes = write(1, str, i);
    free(str);
    return bytes;
}

int print_pointer(va_list *args)
{
    
}

int print_unsigned(va_list *args)
{
    
}

int print_hex_lower(va_list *args)
{
    
}
int print_hex_upper(va_list *args)
{
    
}

static int dispatch_specifier(char spec, va_list *args)
{
    int j;
    const t_specifier specifiers[] = {
        {'c', print_char},
        {'s', print_string},
        {'p', print_pointer},
        {'d', print_integer},
        {'i', print_integer},
        {'u', print_unsigned},
        {'x', print_hex_lower},
        {'X', print_hex_upper},
        {'\0', NULL}
    };

    j = 0;
    while (specifiers[j].specifier)
    {
        if (specifiers[j].specifier == spec)
            return specifiers[j].handler(args);
        j++;
    }
    write(1, "%", 1);
    write(1, &spec, 1);
    return 2;
}


int ft_printf(const char *format, ...)
{
    int i;
    int count;
    va_list args;
    va_start(args, format);

    i = 0;
    count = 0;
    while (format[i])
    {
        if (format[i] == '%')
            count += dispatch_specifier(format[++i], &args);
        else
            count += write(1, &format[i], 1);
        i++;
    }
    va_end(args);
    return count;
}

