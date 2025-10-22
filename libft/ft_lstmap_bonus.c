/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khnoman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:29:36 by khnoman           #+#    #+#             */
/*   Updated: 2025/10/18 09:34:21 by khnoman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*n_list;
	t_list	*new_content;

	n_list = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		new_content = f(lst->content);
		tmp = ft_lstnew(new_content);
		if (!tmp)
		{
			ft_lstclear(&n_list, del);
			del(new_content);
			return (NULL);
		}
		ft_lstadd_back(&n_list, tmp);
		lst = lst ->next;
	}
	return (n_list);
}

/*void del(void *content)
{
		free(content);
}
#include <stdio.h>
int main()
{
	char str[]="welcome to 13";
	char str1[]="hi, ";
	char **arr = ft_split(str,' ');
	
	t_list	*head;
	t_list	*tmp;
	t_list	*pt;
	t_list	*p2;
	tmp = ft_lstnew(str1);
	int i = 0;
	head = NULL;
	 while (arr[i])
	 {
		ft_lstadd_back(&head,ft_lstnew(arr[i]));
		i++;
	 }

	ft_lstadd_front(&head,tmp);
	pt = head;
	p2 = NULL;
	while (pt)
	{
		p2 = pt;
		pt = pt-> next;
		if (pt -> next == NULL)
		{
			p2 ->next = NULL;
			ft_lstdelone(pt,del);
		}
		
	}

		//p2 ->next = NULL;
		//ft_lstdelone(pt,del);
	while (head)
	{
		printf("%s\n",(char *)head -> content);
	
		head = head ->next;
	}
	
}*/