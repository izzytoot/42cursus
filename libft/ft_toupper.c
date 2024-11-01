/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <icunha-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:48:51 by icunha-t          #+#    #+#             */
/*   Updated: 2024/11/01 12:02:31 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
.
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}
/*
#include <ctype.h>
#include <stdio.h>
int	main(void)
{
	int	n;
	
	n = 60;
	printf("%d\n", ft_toupper(n));
	printf("%d\n", toupper(n));
}
*/
