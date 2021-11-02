/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbolqvad <mbolqvad@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 18:12:11 by mbolqvad          #+#    #+#             */
/*   Updated: 2021/11/02 14:49:03 by mbolqvad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	c1;

	c1 = (char)c;
	i = ft_strlen(s);
	if (c1 == 0)
		return ((char *)s + i);
	while (i >= 0)
	{
		if (s[i] == c1)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}
