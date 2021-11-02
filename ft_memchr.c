/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbolqvad <mbolqvad@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 22:34:59 by mbolqvad          #+#    #+#             */
/*   Updated: 2021/10/26 02:13:52 by mbolqvad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)s + i);
		i++;
		n--;
	}
	return (0);
}

// #include <stdio.h>

// int main()
// {
// 	const char str[] = "Gamarjoba";
// 	printf("%s", ft_memchr(str, 'a', 0));
// }