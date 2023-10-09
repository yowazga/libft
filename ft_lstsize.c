/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:09:10 by yowazga           #+#    #+#             */
/*   Updated: 2022/10/22 15:15:18 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	if (!lst)
		return (0);
	while (lst)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}
/*int main()
{
	t_list *n1, *n2, *n3, *n4;
	t_list *head;

	n1 = ft_lstnew(ft_strdup("younes"));
	n2 = ft_lstnew(ft_strdup("younes"));
	n3 = ft_lstnew(ft_strdup("younes"));

	head = n1;
	n1->next = n2;
	n2->next = n3;
	
	int n = ft_lstsize(head);
	printf("%d", n);
}*/
