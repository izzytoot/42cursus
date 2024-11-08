/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 12:57:55 by root              #+#    #+#             */
/*   Updated: 2024/11/08 16:46:07 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_check_printf(char spec, int	i, va_list *ap)
{
	int	i;

	i = 0;
	if (spec == 's')
		ft_string(va_arg(ap, char *), i);
	else if (spec == 'd' || spec == 'i')
		ft_number(va_arg(ap, int), i);
	else if (spec == 'u')
		ft_unsigned_int(va_arg(ap, unsigned int), i);
	else if (spec == 'x')
		ft_hex_lower(va_arg(ap, unsigned int), i, 'x');
	else if (spec == 'X')
		ft_hexa_upper(va_arg(ap, unsigned int), i, 'X');
	else if (spec == 'p')
		ft_pointer(va_arg(ap, void *), i);
	else if (spec == 'c')
		ft_putchar(va_arg(ap, char), i);
	else if (s == '%')
		ft_length('%', i);
	else
		
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	unsigned int	i;
	unsigned int	r;

	va_start(ap, format);
	i = 0;
	r = 0;
	while (format[i])
	{
		if (format[i] == '%' && ft_strchr(SPECIFIERS, format[i + 1]))
		{
			r = r + ft_check_printf(format, i, ap);
			i++;
		}
		else
			r = r + ft_putchar(format[i])
		i++;
	}
	va_end(ap);
	return (r);
}