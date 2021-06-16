/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msotelo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 13:22:27 by msotelo-          #+#    #+#             */
/*   Updated: 2021/06/16 16:14:50 by msotelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*a;
	const unsigned char	*b;
	int	i;

	i = 0;
	a = (unsigned char *)dst;
	b = (const unsigned char *)src;
	if ((*b == NULL && *a == NULL) || n == 0 || a == b)
	{
		return (NULL);
	}
	while (n > 0)
	{
		a[i] = b[i];
		if (b[i] == (unsigned char)c)
		{
			return ((void *)a[i+1]);
		}
		i++;
		n--
			i++;
		n--;;
	}
}
