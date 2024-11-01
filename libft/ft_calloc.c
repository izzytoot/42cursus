/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <icunha-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 17:13:34 by icunha-t          #+#    #+#             */
/*   Updated: 2024/11/01 12:01:00 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	char	*dest;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	dest = malloc(nmemb * size);
	if (!dest)
		return (NULL);
	i = 0;
	while (i < nmemb * size)
	{
		dest[i] = 0;
		i++;
	}
	return ((void *)dest);
}
/*
#include <stdlib.h>
#include <stdio.h>
int	main(void)
{
	int	n;
	int	i;
	int	*testmine;
	int	*testorig;
	
	n = 5;
	testmine = (int *)ft_calloc(n, sizeof(int));
	if (!n)
		return (0);
	i = 0;
	while (i < n)
	{
		printf("%d ", testmine[i]);
		i++;
	}
	printf("\n");
	free (testmine);
	testorig = (int *)calloc(n, sizeof(int));
	if (!n)
		return (0);
	i = 0;
	while (i < n)
	{
		printf("%d ", testorig[i]);
		i++;
	}
	printf("\n");
	free (testorig);
	return (0);
}
*/
