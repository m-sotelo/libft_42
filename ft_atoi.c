/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msotelo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 14:10:04 by msotelo-          #+#    #+#             */
/*   Updated: 2021/09/24 17:03:46 by msotelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int		sign;
	int		i;
	long	n;

	sign = 1;
	i = 0;
	n = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] != '+' && str[i] != '-' && ft_isdigit((int)str[i]) == 0)
		return (0);
	if (str[i] == '-')
		sign = -1;
	while (ft_isdigit((int)str[i]) == 1)
	{
		n = n * 10 + (str[i] - '0');
		i++;
		if ((n * sign) > 2147483647)
			return (-1);
		if ((n * sign) < -2147483648)
			return (0);
	}	
	return (n * sign);
}
