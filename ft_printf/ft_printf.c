/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 12:57:55 by root              #+#    #+#             */
/*   Updated: 2024/11/08 16:06:12 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_printf(const char *format, ...)
{
	va_list	args;
	unsigned int	i;
	unsigned int	r;

	i = 0;
	r = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && ft_strchr(SPECIFIERS, format[i + 1]))
		{
			r = r + ft_check_arg(format, i, args);
			i++;
		}
		else
			r = r + ft_putchar(format[i])
		i++;
	}
	va_end(args);
	return (r);
}