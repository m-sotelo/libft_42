/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msotelo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 14:38:06 by msotelo-          #+#    #+#             */
/*   Updated: 2021/09/24 17:29:28 by msotelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	len;

	len = ft_strlen(s1) * sizeof(char);
	s2 = malloc(len);
	while (len >= 0)
	{
		s2[len] = s1[len];
		len--;
	}
	return (s2);
}
