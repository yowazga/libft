/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 17:24:57 by yowazga           #+#    #+#             */
/*   Updated: 2022/10/22 15:16:28 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*head;

	head = *lst;
	if (!head)
		*lst = new;
	else
	{
		while (head->next != NULL)
			head = head->next;
		head->next = new;
	}
}

/*int main()
{
		t_list *n1, *n2, *n3, *n4;
	t_list *head;

	n1 = ft_lstnew(ft_strdup("my"));
	n2 = ft_lstnew(ft_strdup(" name"));
	n3 = ft_lstnew(ft_strdup(" is"));
	n4 = ft_lstnew(ft_strdup(" Younes"));

	head = n1;
	n1->next = n2;
	n2->next = n3;

	ft_lstadd_back(&head, n4);

	while(head)
	{
		printf("%s", head->content);
		head = head->next;
	}
}*/
