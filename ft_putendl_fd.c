/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 19:22:49 by yowazga           #+#    #+#             */
/*   Updated: 2022/10/16 19:38:19 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s)
	{
		write(fd, s, ft_strlen(s));
		write(fd, "\n", 1);
	}
	return ;
}
/*int main()
{
	int fd;
	char s[] = "younes";
	fd = open("test.txt", O_CREAT | O_RDWR);
	ft_putendl_fd(s, fd);
}*/
