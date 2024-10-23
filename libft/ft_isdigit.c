/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:08:54 by icunha-t          #+#    #+#             */
/*   Updated: 2024/10/22 12:08:57 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c < 0 || c > 127)
		return (0);
	if (c >= '0' && c <= '9')
		return (2048);
	return (0);
}
/*
#include <ctype.h>
#include <stdio.h>
int	main(void)
{
	int	x;
	
	x = 100;
	printf("%d\n", ft_isdigit(x));
	printf("%d\n", isdigit(x));
	return (0);
}
*/
