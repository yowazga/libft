/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 11:08:05 by yowazga           #+#    #+#             */
/*   Updated: 2022/10/21 17:35:08 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;

	i = 0;
	if (s)
	{
		str = malloc(ft_strlen(s) + 1);
		if (!str)
			return (0);
		while (s[i])
		{
			str[i] = (*f)(i, s[i]);
			i++;
		}
		str[i] = 0;
		return (str);
	}
	return (0);
}
/*char myf(unsigned int i, char c)
{
	(void) i;
	return (ft_toupper(c));
}
int main()
{
	printf("%s", ft_strmapi("younes", myf));
}*/
