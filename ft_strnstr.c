/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbolqvad <mbolqvad@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 20:56:42 by mbolqvad          #+#    #+#             */
/*   Updated: 2021/11/02 14:48:50 by mbolqvad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		x;
	size_t		y;

	x = 0;
	y = 0;
	if (needle[y] == 0)
		return ((char *)haystack + x);
	while (haystack[x] != 0 && x < len)
	{
		y = 0;
		while ((haystack[x + y] == needle[y]) && needle[y] && x + y < len)
		{
			y++;
		}
		if (needle[y] == 0)
			return ((char *)haystack + x);
		x++;
	}
	return (NULL);
}
