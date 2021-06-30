/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msotelo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 15:50:34 by msotelo-          #+#    #+#             */
/*   Updated: 2021/06/26 19:28:13 by msotelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	int		x;
	char	*res;

	i = ft_strlen(set);
	j = ft_strlen(s1);
	k = 0;
	while (s1[k] != '\0')
	{
		x = 0;
		while (set[x] != '\0')
		{
			if (s1[k] == set[x])
			{

			}
			else if (s1[j] == set[x])
			{

			}
		}
	}
}
