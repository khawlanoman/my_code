/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khnoman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:57:03 by khnoman           #+#    #+#             */
/*   Updated: 2025/10/17 18:22:02 by khnoman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	count_num(long n)
{
	int	count;

	count = 0;
	if (n == 0)
		count++;
	if (n < 0)
	{
		n *= (-1);
		count++;
	}
	while (n > 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

static void	reverse_str(char *str)
{
	size_t	i;
	size_t	j;
	char	tmp;

	i = 0;
	j = ft_strlen(str);
	j--;
	while (i < j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
}

static void	ft_negative_zero(char *str, int	*i, int *found, long *nb)
{
	if (*nb == 0)
	{
		str[(*i)++] = '0';
		return ;
	}
	if (*nb < 0)
	{
		*found = 1;
		*nb *= (-1);
	}
}

char	*ft_itoa(int n)
{
	int		i;
	int		found;
	int		len;
	long	nb;
	char	*str;

	i = 0;
	nb = n;
	found = 0;
	len = count_num(nb);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_negative_zero(str, &i, &found, &nb);
	while (nb > 0)
	{
		str[i++] = nb % 10 + '0';
		nb = nb / 10;
	}
	if (found == 1)
		str[i++] = '-';
	str[i] = '\0';
	reverse_str(str);
	return (str);
}
