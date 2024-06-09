/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:25:27 by yowazga           #+#    #+#             */
/*   Updated: 2022/10/07 17:48:42 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	ch;

	str = (unsigned char *)s;
	ch = (unsigned char)c;
	if (!n)
		return (0);
	while (*str != ch && --n)
		str++;
	if (*str == ch)
		return (str);
	return (NULL);
}
/*int main()
{
	char s[] = "hi ym nam is younees x wazga";
	char c = 'x';
	printf("%s", ft_memchr(s, c, 50));
}*/
