/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:36:20 by yowazga           #+#    #+#             */
/*   Updated: 2022/10/22 15:15:50 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (0);
}
/*int main()
{
	t_list *n1, *n2, *n3, *n4;
	t_list *head;

	n1 = ft_lstnew(ft_strdup("younes"));
	n2 = ft_lstnew(ft_strdup("younes"));
	n3 = ft_lstnew(ft_strdup("younes"));
	n4 = ft_lstnew(ft_strdup("wazga"));

	head = n1;
	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	t_list *last = ft_lstlast(head);
	printf("%s", last->content);
}*/
