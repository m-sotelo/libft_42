/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msotelo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 13:24:44 by msotelo-          #+#    #+#             */
/*   Updated: 2021/09/27 18:11:57 by msotelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*a;
	const unsigned char	*b;
	int					i;

	a = (unsigned char *)dst;
	b = (const unsigned char *)src;
	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst > src)
		while (len--)
			a[len] = b[len];
	else
	{
		while (len--)
		{
			a[len] = b[len];
		}
		return (a);
	}
	return (NULL);
}
