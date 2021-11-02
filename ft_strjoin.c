/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchaniot <kchaniot@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 17:26:27 by mbolqvad          #+#    #+#             */
/*   Updated: 2021/11/02 20:45:28 by kchaniot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;

	if (!s1 || !s2)
		return (0);
	p = (char *) malloc ((ft_strlen(s1) + ft_strlen(s2) + 1));
	if (p)
	{
		ft_strlcpy(p, (char *)s1, (ft_strlen(s1) + 1));
		ft_strlcpy(p + ft_strlen(s1), s2, (ft_strlen(s2) + 1));
	}
	return (p);
}
