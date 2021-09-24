/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msotelo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 13:45:15 by msotelo-          #+#    #+#             */
/*   Updated: 2021/09/24 17:49:21 by msotelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_s;
	size_t	len_d;

	len_s = ft_strlen((char *)src);
	len_d = ft_strlen(dst);
	return (len_s + dstsize);
}
