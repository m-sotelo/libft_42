/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msotelo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 13:51:09 by msotelo-          #+#    #+#             */
/*   Updated: 2021/06/26 14:37:35 by msotelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	void	*aux;
	size_t	len;
	int		i;

	i = 0;
	len = count * size;
	ptr = mallloc(len);
	if (len == 0)
	{
		return (NULL);
	}
	aux = ptr;
	while (len > 0)
	{
		(unsigned char *)aux[i] = '\0';
		len--;
		i++;
	}
	return (ptr);
}
