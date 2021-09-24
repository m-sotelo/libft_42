/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msotelo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 14:47:21 by msotelo-          #+#    #+#             */
/*   Updated: 2021/09/24 20:09:20 by msotelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*s1;
	unsigned int	i;
	int				j;

	i = start;
	j = 0;
	s1 = malloc (len * sizeof (char));
	while (len > 0)
	{
		s1[j] = s[i];
		i++;
		j++;
		len--;
	}
	s1[j] = '\0';
	return (s1);
}
