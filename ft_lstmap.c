/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 12:35:22 by yowazga           #+#    #+#             */
/*   Updated: 2022/10/22 15:23:20 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*new;

	head = NULL;
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
		{
			ft_lstclear(&head, del);
			return (0);
		}
		ft_lstadd_back(&head, new);
		lst = lst->next;
	}
	return (head);
}
/*void *myf(void *lst)
{
	char *str;
	int i;

	i = 0;
	str = (char *)lst;
	while (str[i])
	{
		str[i] -= 32;
		i++;
	}
	return (lst);
}
void delet(void *lst)
{
	free(lst);
}
int main()
{
	t_list *n1, *n2, *n3, *n4;
	t_list *head;


	n1 = ft_lstnew(ft_strdup("my "));
	n2 = ft_lstnew(ft_strdup("name "));
	n3 = ft_lstnew(ft_strdup("is "));
	n4 = ft_lstnew(ft_strdup("younes"));

	head = n1;
	n1->next = n2;
	n2->next = n3;
	n3->next = n4;

	t_list *final = ft_lstmap(head, myf, delet);
	while (final)
	{
		printf("%s\n", final->content);
		final = final->next;
	}
}*/
