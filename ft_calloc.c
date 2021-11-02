/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbolqvad <mbolqvad@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 16:32:55 by mbolqvad          #+#    #+#             */
/*   Updated: 2021/11/02 14:41:42 by mbolqvad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc (count * size);
	if (ptr)
	{
		ft_bzero(ptr, (count * size));
	}
	return (ptr);
}

// #include <stdio.h>

// int main()
// {
// 	char s[] = "Gamarjoba!";
// 	char *str = s;
// 	printf("%s\n", s);
// 	printf("%p\n", str);
// 	str = (char *) ft_calloc (6, sizeof(char));
// 	printf("%s\n", str);
// 	printf("%p\n", str);
// }