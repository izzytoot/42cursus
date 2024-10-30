/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:33:27 by icunha-t          #+#    #+#             */
/*   Updated: 2024/10/30 15:33:29 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*r;
	size_t	i;
	size_t	j;

	if (!s || start > ft_strlen(s))
		return (NULL);
	r = (char *)malloc(sizeof(char) * (len + 1));
	if (!r)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			r[j] = s[i];
			j++;
		}
		i++;
	}
	r[i] = '\0';
	return (r);
}
/*
#include <stdio.h>
int	main(void)
{
	char const	*s = "Ola e adeus";
	unsigned int	start;
	size_t	len;
	
	start = 4;
	len = 11;
	printf ("%s\n", ft_substr(s, start, len));
	return (0);
}
*/
