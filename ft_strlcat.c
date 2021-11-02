/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbolqvad <mbolqvad@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 21:16:10 by mbolqvad          #+#    #+#             */
/*   Updated: 2021/11/01 16:39:12 by mbolqvad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	a;
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	a = ft_strlen(dst);
	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	while (i < (dstsize - a - 1) && src[i] && dstsize > dst_len)
	{
		dst[dst_len] = src[i];
		dst_len++;
		i++;
	}
	dst[dst_len] = 0;
	if (dstsize < a)
		return (dstsize + src_len);
	else
		return (a + src_len);
}

// #include <stdio.h>

// int main()
// {
// 	char str[20] = "rrrrrrrrrrrrrrr";
// 	char str1[] = "lorem ipsum dolor sit amet";
// 	int b = ft_strlcat(str, str1, 5);
// 	printf("%lu\n", ft_strlen(str));
// 	printf("result: %s.\nsize: %d", str, b);
// }