/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbolqvad <mbolqvad@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 17:26:27 by mbolqvad          #+#    #+#             */
/*   Updated: 2021/11/02 14:46:46 by mbolqvad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;

	p = (char *) malloc ((ft_strlen(s1) + ft_strlen(s2) + 1));
	if (p)
	{
		ft_strlcpy(p, (char *)s1, (ft_strlen(s1) + 1));
		ft_strlcpy(p + ft_strlen(s1), s2, (ft_strlen(s2) + 1));
	}
	return (p);
}

// #include <stdio.h>

// int main()
// {
// 	char str[] = "ra abdala xar. -";
// 	char str1[] = "ho martali xar.";

// 	char *p = str;
// 	char *p1 = str1;
// 	char *newstr = ft_strjoin(p, p1);
// 	printf("%s", newstr);
// }