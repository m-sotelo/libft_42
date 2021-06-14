/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msotelo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 12:37:19 by msotelo-          #+#    #+#             */
/*   Updated: 2021/05/19 13:40:04 by msotelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
unsigned int	ft_strlcpy(char	*dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	if (j < dstsize)
	{
		while (src[j] != '\0' && j < (dstsize - 1))
		{
			dst[j] = src [j];
			j++;
		}
		dst[j] = '\0';
	}
	return (i);
}
