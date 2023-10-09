/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 23:33:28 by yowazga           #+#    #+#             */
/*   Updated: 2022/10/22 15:22:50 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*void myf(void *lst)
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

}

int main()
{
	t_list *n1, *n2, *n3, *head;
	head = 0;

	n1 = ft_lstnew(ft_strdup("younes"));
	n2 = ft_lstnew(ft_strdup("wazga"));
	n3 = ft_lstnew(ft_strdup("name"));

	head = n1;
	n1->next = n2;
	n2->next = n3;

	while (head)
	{
		printf("%s\n", head->content);
		head = head->next;
	}


	head = n1;
	ft_lstiter(head, myf);
	while (head)
	{
		printf("%s\n", head->content);
		head = head->next;
	}

}*/
