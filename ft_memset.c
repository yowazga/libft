/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:57:24 by yowazga           #+#    #+#             */
/*   Updated: 2022/10/08 15:24:11 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	unsigned char	ch;

	str = (unsigned char *)b;
	ch = (unsigned char)c;
	while (len--)
	{
		*str = ch;
		str++;
	}
	return (b);
}
/* int main()
 {
	 char s[] = "Younes wazga";
	 char c = '*';
	 printf("%s\n",ft_memset(s, c, 0));
	 printf("%s", memset(s, c, 0));
 }*/
