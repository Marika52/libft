/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchaniot <kchaniot@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 14:34:57 by mbolqvad          #+#    #+#             */
/*   Updated: 2021/11/02 20:46:03 by kchaniot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(char const c, char const *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	l;
	char	*p;

	if (!s1)
		return (0);
	i = 0;
	l = ft_strlen(s1);
	while (ft_check(s1[i], set))
		i++;
	while (ft_check(s1[l - 1], set) && i < l)
		l--;
	p = ft_substr(s1, i, l - i);
	return (p);
}
