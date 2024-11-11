/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 12:57:55 by root              #+#    #+#             */
/*   Updated: 2024/11/08 18:45:51 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_print_format(char spec, va_list ap)
{
	int	r;

	r = 0;
	if (spec == 'c')
		r = ft_printchar(va_arg(ap, int));
	else if (spec == 's')
		r = ft_printstr(va_arg(ap, char *));
	else if (spec == 'd' || spec == 'i')
		r = ft_printint(spec, (long)va_arg(ap, int), 10);
	else if (spec == 'p')
		r = ft_printptr((unsigned long)va_arg(ap, unsigned long));
	else if (spec == 'u')
		r = ft_printint(spec, (long)va_arg(ap, unsigned int), 10);
	else if (spec == 'x' || spec == 'X')
		r = ft_printint(spec, (long)va_arg(ap, unsigned int), 16);
	else
		r += write(1, &spec, 1);
	return (r);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	unsigned int	r;

	va_start(ap, format);
	r = 0;
	while (*format)
	{
		if (*format == '%')
			r = r + ft_print_format(*(++format), ap);
		else
			r = r + ft_putchar(*format);
		++format;
	}
	va_end(ap);
	return (r);
}
