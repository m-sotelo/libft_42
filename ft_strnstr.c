/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msotelo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 16:34:17 by msotelo-          #+#    #+#             */
/*   Updated: 2021/09/28 16:16:06 by msotelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*aux(const char *haystack, const char *needle, size_t len, size_t n)
{
	int		i;
	int		j;
	size_t	k;

	j = 0;
	k = 0;
	i = (int)len;
	while (i > 0)
	{
		while ((haystack[j] == needle[k]) && (i > 0))
		{
			i--;
			j++;
			k++;
			if (k == n)
			{
				return ((char *)&haystack[j - k]);
			}
		}
		k = 0;
		j++;
		i--;
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
	if (haystack == NULL)
		return (NULL);
	else
		return ((char *)haystack);
}
