/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msotelo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 16:58:07 by msotelo-          #+#    #+#             */
/*   Updated: 2021/09/22 11:55:54 by msotelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	*ft_subitoa(int i, int n, int sign)
{
	char	*output;

	output = malloc(i * sizeof(char));
	while (n > 9)
	{
		if (sign == -1)
		{
			output[0] = '-';
			i++;
		}
		else
		{
			output[i] = ((n % 10) - '0');
			n = n / 10;
			i--;
		}
	}
	output[i] = (n - '0');
	return (output);
}

char	*ft_itoa(int n)
{
	int		i;
	int		j;
	int		sign;
	char	*res;

	i = 1;
	j = n;
	sign = 1;
	if (n < 0)
	{
		n = n * (-1);
		sign = -1;
	}
	while ((j / 10) > 9)
	{
		j = j / 10;
		i++;
	}
	res = ft_subitoa(i, n, sign);
	return (res);
}
