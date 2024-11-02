/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 19:41:28 by icunha-t          #+#    #+#             */
/*   Updated: 2024/11/02 20:54:19 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	word_count(char const *s, char c)
{
	int		w;
	char	prev_char;
	int		i;

	w = 0;
	prev_char = c;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			prev_char = s[i];
		if (s[i] != c)
		{
			if (prev_char == c)
				w++;
		}
		prev_char = s[i];
		i++;
	}
	return (w);
}

char	**ft_split(char const *s, char c)
{
	char	**new_array;
	size_t	i;
	size_t	j;
	size_t	wlen;
	size_t	start;

	if (!s)
		return (NULL);
	new_array = (char **)malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!new_array)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			start = i;
			while (s[i] != c && s[i] != '\0')
				i++;
			wlen = i - start;
			new_array[j++] = ft_substr(s, start, wlen);
		}
	}
	new_array[j] = NULL;
	return (new_array);
}
/*
#include <stdio.h>
int	main(void)
{
	char	const *s;
	char	c;
	char	**result;
	int	i;
	
	s = "   this is a     string of   6. ";
	c = ' ';
	result = ft_split(s, c);
	i = 0;
	while (result[i])
	{
		printf("%s\n", result[i]);
		i++;
	}
	free (result);
	return (0);
}
*/

/*
int	main(void)
{
	char	const *s;
	char	c;
	int	result;
	
	s = "   this is a     string of   6. ";
	c = ' ';
	result = word_count(s, c);
	printf("%d\n", result);
	return (0);
}
*/
