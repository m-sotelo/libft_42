/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msotelo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 16:27:11 by msotelo-          #+#    #+#             */
/*   Updated: 2021/06/16 16:32:47 by msotelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	*a;

	a = (char *)s;
	len = ft_strlen(s) + 1;
	while(len > 0)
	{
		if (a[len] == (char)c)
		{
			return (&a[len]);
		}
		len--;
	}
	return (NULL);
}