/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msotelo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 13:45:15 by msotelo-          #+#    #+#             */
/*   Updated: 2021/10/01 19:08:22 by msotelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_d;
	size_t	len_s;
	int		i;
	int		j;

	len_d = ft_strlen(dst);
	len_s = ft_strlen(src);
	i = 0;
	j = 0;
	while (dst[j] != '\0')
		j++;
	while (src[i] != '\0' && j < ((int)dstsize - 1))
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	if (dstsize != 0 && len_d < dstsize)
		dst[j] = '\0';
	if (len_d < dstsize)
		return (len_d + len_s);
	return (len_s + dstsize);
}
