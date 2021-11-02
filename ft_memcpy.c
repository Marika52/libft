/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbolqvad <mbolqvad@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 19:24:54 by mbolqvad          #+#    #+#             */
/*   Updated: 2021/11/01 15:06:06 by mbolqvad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((char *)dst + i) = *((char *)src + i);
		i++;
	}
	return (dst);
}

// #include <stdio.h>
// void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);

// int main()
// {
// 	char str[42] = "horey,I'm finishing third function today";
// 	char str1[42] = "hehe,you still have a lot left:P";
// 	printf("result of copy: %s", ft_memcpy(str+6, str, 22));
// 	return (0);
// }