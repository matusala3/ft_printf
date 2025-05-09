/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magebreh <magebreh@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 10:08:51 by magebreh          #+#    #+#             */
/*   Updated: 2025/05/09 17:12:54 by magebreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <stdlib.h>

#ifndef LOWERCASE
#define LOWERCASE 0
#endif

#ifndef UPPERCASE
#define UPPERCASE 1
#endif

typedef int (*t_handler)(va_list args);
typedef struct s_specifier
{
    char specifier;
    t_handler handler;
} t_specifier;

#endif