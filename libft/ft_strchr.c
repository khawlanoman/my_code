/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khnoman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:14:46 by khnoman           #+#    #+#             */
/*   Updated: 2025/10/20 10:47:44 by khnoman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	k;

	i = 0;
	k = (char)c;
	while (s[i])
	{
		if (s[i] == k)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if (s[i] == k)
	{
		return ((char *)&s[i]);
	}
	return (NULL);
}
