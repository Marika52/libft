/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchaniot <kchaniot@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 23:49:04 by mbolqvad          #+#    #+#             */
/*   Updated: 2021/11/02 20:37:09 by kchaniot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digit(int c)
{
	int	i;

	i = 0;
	if (c <= 0)
		i++;
	while (c > 0 || c < 0)
	{
		c = c / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*nstr;

	i = ft_digit(n);
	nstr = malloc (i + 1);
	if (!nstr)
		return (0);
	if (n == 0)
		nstr[0] = '0';
	nstr[i] = 0;
	while (n > 0 && i > 0)
	{
		nstr[i - 1] = n % 10 + '0';
		n = n / 10;
		i--;
	}
	while (n < 0 && i > 0)
	{
		nstr[0] = 45;
		nstr[i - 1] = -(n % 10) + '0';
		n = n / 10;
		i--;
	}
	return (nstr);
}
