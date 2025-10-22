/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khnoman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:17:22 by khnoman           #+#    #+#             */
/*   Updated: 2025/10/21 11:48:08 by khnoman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	k;

	k = c;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == k)
		{
			return ((char *)&s[i]);
		}
		i--;
	}
	return (NULL);
}
