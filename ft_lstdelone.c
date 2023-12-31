/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:12:57 by yowazga           #+#    #+#             */
/*   Updated: 2022/10/22 21:56:34 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/*void delet(void *lst)
{
	free(lst);
}
int main()
{
	t_list *node;

	node = ft_lstnew(ft_strdup("Younes"));

	ft_lstdelone(node, delet);

	printf("%s", node->content);
}*/
