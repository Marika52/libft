/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbolqvad <mbolqvad@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 00:50:07 by mbolqvad          #+#    #+#             */
/*   Updated: 2021/11/02 14:46:27 by mbolqvad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	char			*p;

	i = 0;
	p = s;
	if (!s)
		return ;
	while (i < ft_strlen(s))
	{
		f(i, p + i);
		i++;
	}
}

// #include <stdio.h>

// int main()
// {
// 	char *g = "ratom";
// 	ft_striteri(g, &ft_ratom);
// 	printf("%s", g);
// }