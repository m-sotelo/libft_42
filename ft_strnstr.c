/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msotelo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 16:34:17 by msotelo-          #+#    #+#             */
/*   Updated: 2021/09/27 21:14:37 by msotelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*aux(const char *haystack, const char *needle, size_t len, size_t n)
{
	int		j;
	size_t	k;

	j = 0;
	k = 0;
	while (len > 0)
	{
		while ((haystack[j] == needle[k]) && (len > 0))
		{
			if (k == n)
			{
				return ((char *)&haystack[j - k]);
			}
			j++;
			k++;
			len--;
		}
		k = 0;
		j++;
		len--;
	}
	return (NULL);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	n;

	n = strlen(needle);
	if (!*needle)
		return ((char *)haystack);
	haystack = aux(haystack, needle, len, n);
	if (haystack == NULL)
		return (NULL);
	else
		return ((char *)haystack);
}

int	main()
{
	char	*str3;

	str3 = ft_strnstr("hola como estas amigo", "como", 4);
	printf("%s", str3);
}
