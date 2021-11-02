/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchaniot <kchaniot@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 20:07:38 by mbolqvad          #+#    #+#             */
/*   Updated: 2021/11/02 20:40:54 by kchaniot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	c1;

	i = 0;
	c1 = (char)c;
	while (s[i] != 0)
	{
		if (s[i] == c1)
			return ((char *)(s + i));
		i++;
	}
	if (c1 == 0)
		return ((char *)s + ft_strlen(s));
	return (0);
}
