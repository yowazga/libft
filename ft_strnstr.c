/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:25:17 by yowazga           #+#    #+#             */
/*   Updated: 2022/10/22 22:17:35 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *ha, const char *ne, size_t	len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (ne[i] == 0)
		return ((char *)ha);
	while (ha[i] && j + i < len)
	{
		while (ha[i] == ne[i] && j + i < len)
		{
			i++;
			if (ne[i] == '\0')
				return ((char *)ha);
		}
		ha++;
		i = 0;
		j++;
	}
	return (0);
}
/*int main()
  {
//char h[] = "owfj iwf& ja fajweifj ";
//char n[] = "& ";
printf("%s",ft_strnstr("AAAAAAAAAAAAA", "AAAAAAAAAAAAA", 13));
return 0;
}*/
