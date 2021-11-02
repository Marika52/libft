/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchaniot <kchaniot@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 14:59:11 by mbolqvad          #+#    #+#             */
/*   Updated: 2021/11/02 20:40:59 by kchaniot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;

	s2 = (char *) malloc ((ft_strlen(s1) + 1));
	if (s2)
	{
		ft_strlcpy(s2, s1, ft_strlen(s1) + 1);
	}
	return (s2);
}
