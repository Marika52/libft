/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbolqvad <mbolqvad@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 14:59:11 by mbolqvad          #+#    #+#             */
/*   Updated: 2021/11/02 14:46:06 by mbolqvad         ###   ########.fr       */
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

// #include <stdio.h>

// int main()
// {
// 	char s[] = "vaime";
// 	char *str = s;
// 	char *str2;
// 	printf("%s\n", s);
// 	printf("%p\n", str);
// 	str2 = ft_strdup (str);
// 	printf("%s\n", str2);
// 	printf("%p\n", str2);
// }