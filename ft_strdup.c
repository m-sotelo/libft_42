/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msotelo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 14:38:06 by msotelo-          #+#    #+#             */
/*   Updated: 2021/06/26 17:39:18 by msotelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strdup(const char *s1)
{
	const char	*s2;
	size_t		len;

	len = ft_strlen(s1) * sizeof(char);
	s2 = malloc(len);
	while (len >= 0)
	{
		s2[len] = s1[len];
		len--;
	}
	return (s2);
}
