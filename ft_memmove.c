/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msotelo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 13:24:44 by msotelo-          #+#    #+#             */
/*   Updated: 2021/06/16 16:04:34 by msotelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*a;
	const unsigned char	*b;
	int	i;

	i = 0;
	a = (unsigned char *)dst;
	b = (const unsigned char *)src;
	if (dst == NULL && src == NULL)
	{
		return (NULL);
	}
	if (dst > src)
	{
		while (len > 0)
		{
			a[len] = b[len];
			len--;
		}
	}
	else
	{
		while (len > 0)
		{
			a[i] = b[i];
			i++;
			len--;
		}
	}
}
