/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchaniot <kchaniot@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 15:09:39 by mbolqvad          #+#    #+#             */
/*   Updated: 2021/11/02 20:39:58 by kchaniot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	val;

	i = 0;
	res = 0;
	val = 1;
	while ((str[i] > 7 && str[i] < 14) || str[i] == 32)
		i++;
	if (str[i] == 43 && str[i + 1] != 45)
		i++;
	if (str[i] == 45)
	{
		val = -1;
		i++;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * val);
}
