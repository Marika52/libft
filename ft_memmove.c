/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbolqvad <mbolqvad@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 20:55:21 by mbolqvad          #+#    #+#             */
/*   Updated: 2021/11/02 14:44:14 by mbolqvad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int		i;
	char	*str;
	char	*str1;

	i = 0;
	str = (char *)src;
	str1 = (char *)dst;
	if (dst < src)
		ft_memcpy(dst, src, len);
	else
		while (len--)
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
	return (dst);
}

// #include <stdio.h>
// void *ft_memmove(void *dst, const void *src, size_t len);

// int main()
// {
// 	char str[42] = "Where does the pink pig go?";
// 	char strdst[] = "hello, world";
// 	printf("result of my efforts - %s", ft_memmove(str, strdst, 554));
// 	return (0);
// }