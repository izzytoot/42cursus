/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:36:06 by icunha-t          #+#    #+#             */
/*   Updated: 2024/10/23 16:36:07 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*x;

	x = (char *)s;
	while (*x != c)
	{
		if (!*x)
			return (NULL);
		x++;
	}
	return (x);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	const char	*s = "Here's a test for you";
	int	c = 'e';
	char	*resultmine = ft_strchr(s, c);
	char	*resultorig = strchr(s, c);

	if (resultmine)
		printf("Found '%c' at position %ld\n", c, resultmine - s);
	if (resultorig)
		printf("Found '%c' at position %ld\n", c, resultorig - s);
	else
		printf("Char '%c' not found", c);
	return (0);
}
*/
