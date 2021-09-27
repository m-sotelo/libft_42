/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msotelo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 13:45:15 by msotelo-          #+#    #+#             */
/*   Updated: 2021/09/27 18:34:35 by msotelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_s;
	size_t	len_d;
	int		i;

	len_s = ft_strlen((char *)src);
	len_d = ft_strlen(dst);
	i = 0;
	while ((dstsize - len_d) > 0)
	{
		dst[len_d] = src[i];
		dstsize--;
		len_d++;
		i++;
	}
	dst[len_d] = '\0';
	return (len_s + len_d);
}
