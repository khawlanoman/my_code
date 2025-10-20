/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khnoman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 09:20:47 by khnoman           #+#    #+#             */
/*   Updated: 2025/10/19 17:46:57 by khnoman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	found;
	int	count;

	i = 0;
	found = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && found == 0)
		{
			count++;
			found = 1;
		}
		if (s[i] == c && found == 1)
			found = 0;
		i++;
	}
	return (count);
}

void	ft_copy(char const *s, char *arr, int start, int end)
{
	int	j;

	j = 0;
	while (start < end)
	{
		arr[j] = s[start];
		j++;
		start++;
	}
	arr[j] = '\0';
}

void	ft_all_copy(char const *s, char **arr, char c)
{
	int	i;
	int	start;
	int	end;
	int	k;

	i = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		start = i;
		while (s[i] != c && s[i])
			i++;
		end = i;
		if (end > start)
		{
			arr[k] = malloc((end - start + 1) * sizeof(char));
			ft_copy(s, arr[k], start, end);
			k++;
		}
	}
	arr[k] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**arr;

	if (!s)
		return (NULL);
	arr = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	ft_all_copy(s, arr, c);
	return (arr);
}
/*
#include <stdio.h>
int main()
{
	char str[]="hi , noman , khawla";
	char sep=',';
	char **arr=ft_split(str,sep);
	int j = 0;
	while(arr[j])
	{
		printf("%s\n",arr[j]);
		free(arr[j]);
		j++;
	}
	free(arr);
	return (0);
}*/
