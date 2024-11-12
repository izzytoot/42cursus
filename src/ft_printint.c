/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <icunha-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 18:47:56 by root              #+#    #+#             */
/*   Updated: 2024/11/12 12:36:47 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	printint(char spec, long n, int base, int fd)
{
	int		r;
	char	*sym;

	if (spec == 'X')
		sym = HEX_UPP;
	else if (spec == 'x')
		sym = HEX_LOW;
	if (n < 0)
	{
		write (fd, "-", 1);
		return (ft_printint(spec, -n, base + 1, fd));
	}
	else if (n < base)
		return (ft_printchar(sym[n], fd));
	else
	{
		r = ft_printint(spec, n / base, base, fd);
		return (r + ft_printint(spec, n % base, base, fd));
	}
}
