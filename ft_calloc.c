/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msotelo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 13:51:09 by msotelo-          #+#    #+#             */
/*   Updated: 2021/10/04 16:08:45 by msotelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	void	*aux;
	size_t	len;

	len = count * size;
	ptr = malloc(len);
	if (len == 0)
	{
		return (NULL);
	}
	aux = ptr;
	while (len > 0)
	{
		*(unsigned char *)aux++ = '\0';
		len--;
	}
	return (ptr);
}
