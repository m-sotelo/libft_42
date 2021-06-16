/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msotelo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 13:30:05 by msotelo-          #+#    #+#             */
/*   Updated: 2021/06/16 13:51:39 by msotelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*a;
	int				i;

	i = 0;
	a = (unsigned char *)s;
	while (n > 0)
	{
		if (a[i] == (unsigned char)c)
		{
			return ((void *)a);
		}
		i++;
		n--;
	}
	return (NULL);
}
