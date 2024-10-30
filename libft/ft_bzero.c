/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:45:18 by icunha-t          #+#    #+#             */
/*   Updated: 2024/10/22 17:16:59 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*temp;
	size_t			i;

	temp = s;
	i = 0;
	while (i < n)
	{
		temp[i] = 0;
		i++;
	}
}
/*
#include <strings.h>
#include <stdio.h>
int	main(void)
{
	char *str = "vamos testar";
	ft_bzero(str, 3);
	printf ("%s\n", str);
	bzero(str, 3);
	printf ("%s\n", str);
	return (0);
}
*/
