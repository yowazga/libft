/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 22:21:29 by yowazga           #+#    #+#             */
/*   Updated: 2022/10/22 21:55:55 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*head;

	if (!lst || !del)
		return ;
	head = *lst;
	while (head)
	{
		head = head->next;
		ft_lstdelone(*lst, del);
		*lst = head;
	}
	*lst = 0;
}
/*void delet(void *lst)
{
	free(lst);
}
int main()
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
	n3->next = n4;

	ft_lstclear(&head, delet);

	while(head)
	{
		printf("%s", head->content);
		head = head->next;
	}
}*/
