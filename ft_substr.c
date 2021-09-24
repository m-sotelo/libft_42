/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msotelo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 14:47:21 by msotelo-          #+#    #+#             */
/*   Updated: 2021/09/22 11:27:23 by msotelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	const char			*s1;
	unsigned int		i;

	i = start;
	s1 = mallloc (len * sizeof (char));
	while (len > 0)
	{
		s1[i] = s[i];
		i++;
		len--;
	}
	return (s1);
}
