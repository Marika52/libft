/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbolqvad <mbolqvad@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 18:02:53 by mbolqvad          #+#    #+#             */
/*   Updated: 2021/11/01 15:04:45 by mbolqvad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((char *)b)[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

// #include <stdio.h>
// void *ft_memset(void *b, int c, size_t len);

// int main()
// {
// 	char str[15] = "my head hurts";
// 	printf("after using memset : %s",ft_memset(str, '?', 1));
// 	return (0);
// }