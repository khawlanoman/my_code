/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khnoman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:13:48 by khnoman           #+#    #+#             */
/*   Updated: 2025/10/18 09:52:34 by khnoman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t					i;
	unsigned char			*d1;
	const unsigned char		*s1;

	i = 0;
	s1 = src;
	d1 = dest;
	if (d1 > s1)
	{
		while (n--)
		{
			d1[n] = s1[n];
		}
	}
	else if (s1 > d1)
	{
		while (i < n)
		{
			d1[i] = s1[i];
			i++;
		}
	}
	return (d1);
}
