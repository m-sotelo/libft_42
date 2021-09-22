/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msotelo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 15:54:14 by msotelo-          #+#    #+#             */
/*   Updated: 2021/06/26 19:28:17 by msotelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	**ft_split(char const *s, char c)
{
	size_t	n_words;
	char	**out;
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			j++;
		i++;
	}
	out = (char **)malloc(sizeof(char *) * (j + 1));
	i = 0;
	j = 0;
	while (s[k] != '\0')
	{
		out[i][j] = s[k];
		j++;
		if (s[k] == c)
			i++;
			j = 0;
		k++;
	}
	out[i][j] = '\0';
	return (out)i;
}
