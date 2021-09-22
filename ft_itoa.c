/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msotelo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 16:58:07 by msotelo-          #+#    #+#             */
/*   Updated: 2021/06/26 17:48:40 by msotelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_itoa(int n)
{
	int		i;
	int		j;
	int		sign;
	char		*res;

	i = 1;
	j = n;
	sign = 1;
	if (n < 0)
		n = n * (-1);
		sign = -1;
	while ((j/10) > 9)
		j = j/10;
		i++;
	res = malloc(i * sizeof(char));
	while (n > 9)
		if (sign == -1)
			res[0] = '-';
			i++;
		else
			res[i] = ((n%10) - '0');
			n = n / 10;
			i--;
	res[i] = (n - '0');
	return (res);
}