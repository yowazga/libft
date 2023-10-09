/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:54:17 by yowazga           #+#    #+#             */
/*   Updated: 2022/10/22 20:36:42 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	while (i != 0 && ((unsigned char *)str)[i] != (unsigned char)c)
		i--;
	if (((unsigned char *)str)[i] == (unsigned char)c)
		return ((char *)&str[i]);
	return (0);
}
/*int main()
{
	char s[] = "scalcam cvsi";
	char c = '\0';
	printf("%s", ft_strrchr(s, c));
}*/
