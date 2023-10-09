/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 18:04:18 by yowazga           #+#    #+#             */
/*   Updated: 2022/10/16 19:20:46 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s)
	{
		write(fd, s, ft_strlen(s));
	}
	return ;
}
/*int main()
{
	int fd;
	char s[] = "younes";

	fd = open("test.txt", O_CREAT | O_RDWR);
	ft_putstr_fd(s, fd);
	printf("%d", fd);
}*/
