/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msotelo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 16:34:17 by msotelo-          #+#    #+#             */
/*   Updated: 2021/09/24 17:51:26 by msotelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*aux(const char *haystack, const char *needle, size_t len, size_t n)
{
	size_t	i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (len > 0)
	{
		while (haystack[j] == needle[k])
		{
			i++;
			j++;
			k++;
			if (i == n)
			{
				return ((char *)haystack);
			}
		}
		i = 0;
		k = 0;
		j++;
		len--;
	}
	return (NULL);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	n;

	n = ft_strlen(needle);
	if (!*needle)
		return ((char *)haystack);
	haystack = aux(haystack, needle, len, n);
	return ((char *)haystack);
}
