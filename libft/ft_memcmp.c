/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khnoman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:13:05 by khnoman           #+#    #+#             */
/*   Updated: 2025/10/20 10:54:02 by khnoman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*b1;
	const unsigned char	*b2;

	i = 0;
	b1 = (const unsigned char *)s1;
	b2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (b1[i] != b2[i])
		{
			return (b1[i] - b2[i]);
		}
		i++;
	}
	return (0);
}
