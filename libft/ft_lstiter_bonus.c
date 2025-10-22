/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khnoman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 09:57:04 by khnoman           #+#    #+#             */
/*   Updated: 2025/10/18 09:21:27 by khnoman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
	{
		return ;
	}
	while (lst)
	{
		f(lst -> content);
		lst = lst -> next;
	}
}
/*#include <unistd.h>
#include <stdio.h>
void f(void *str)
{
	char *s = (char *)str;
	int i = 0;
	while (s[i])
	{
		write(1,&str[i],1);
		i++;
	}
}
int main()
{
	char s1[] ="hi";
	char s2[] ="noman";
	t_list *head;
	t_list	*new;
	head =ft_lstnew(s1);
	new = ft_lstnew(s2);
	ft_lstadd_back(&head,new);

	//ft_lstiter(head, f);

	while (head)
	{
		printf("%s\t",(char *)head -> content);
		head = head ->next;
	}
}*/