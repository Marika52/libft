/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchaniot <kchaniot@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 03:44:57 by mbolqvad          #+#    #+#             */
/*   Updated: 2021/11/02 20:40:43 by kchaniot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_n_digit(int c)
{
	int	i;

	i = 0;
	while (c > 0 || c < 0)
	{
		c = c / 10;
		i++;
	}
	return (i);
}

static int	ft_power(int x)
{
	int	z;

	z = 1;
	while (x >= 2)
	{
		z = 10 * z;
		x--;
	}
	return (z);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	s;
	int		a;

	a = ft_n_digit(n);
	if (n == 0)
		write(fd, "0", 1);
	while (n >= 0 && a > 0)
	{
		s = n / ft_power(a) + '0';
		n = n % ft_power(a);
		write(fd, &s, 1);
		a--;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		while (a > 0)
		{
			s = -(n / ft_power(a)) + '0';
			n = n % ft_power(a);
			write(fd, &s, 1);
			a--;
		}
	}
}
