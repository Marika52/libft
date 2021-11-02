/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbolqvad <mbolqvad@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 14:23:59 by mbolqvad          #+#    #+#             */
/*   Updated: 2021/11/01 15:05:23 by mbolqvad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((char *)s + i) = '\0';
		i++;
	}
}

// #include <stdio.h>
// void	ft_bzero(void *s, size_t n);

// int main()
// {
// 	char str[42] = "The Mantia of void, bibidi babidi...";
// 	ft_bzero(str, 0);
// 	printf("%sVanishing from the Terminal\n", str);
// 	printf("%c - but not totally", str[9]);
// 	return (0);
// }