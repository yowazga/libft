/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 10:01:56 by yowazga           #+#    #+#             */
/*   Updated: 2022/10/22 15:14:40 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*int main()
{
	t_list *head;
	t_list *n1, *n2;
	t_list *nn;;

	n1 = ft_lstnew(ft_strdup("Younes "));
	n2 = ft_lstnew(ft_strdup("wazga "));
	nn = ft_lstnew(ft_strdup("NAME :"));

	head = n1;
	n1->next = n2;
	ft_lstadd_front(&head, nn);

	while(head)
	{
		printf("%s", head->content);
		head = head->next;
	}
}*/
