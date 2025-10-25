/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khnoman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 11:55:24 by khnoman           #+#    #+#             */
/*   Updated: 2025/10/16 16:01:32 by khnoman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*arr;
	size_t			count;
	unsigned char	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	count = ft_strlen(s);
	arr = malloc((count + 1) * sizeof(char));
	if (!arr)
	{
		return (NULL);
	}
	while (s[i])
	{
		arr[i] = f(i, s[i]);
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
