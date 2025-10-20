/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khnoman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 18:57:26 by khnoman           #+#    #+#             */
/*   Updated: 2025/10/18 09:35:25 by khnoman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*head ;

	head = malloc(sizeof(t_list));
	if (!head)
	{
		return (NULL);
	}
	head -> content = content;
	head -> next = NULL;
	return (head);
}
