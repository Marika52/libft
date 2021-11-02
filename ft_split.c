/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbolqvad <mbolqvad@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 00:25:45 by mbolqvad          #+#    #+#             */
/*   Updated: 2021/11/02 14:45:35 by mbolqvad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strlen1(const char *s, char c)
{
	size_t	a;

	a = 0;
	while (s[a] != '\0' && s[a] != c)
		a++;
	return (a);
}

static size_t	ft_word(char const *s, char c)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	if (s[i] != c)
		a++;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != 0)
			a++;
		i++;
	}
	return (a);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	p;
	char	**split;

	i = 0;
	p = 0;
	if (!s)
		return (0);
	split = ft_calloc((ft_word(s, c) + 1), sizeof(*split));
	if (!split)
		return (0);
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			split[p] = ft_substr(s, i, ft_strlen1(&s[i], c));
			i += (ft_strlen1(&s[i], c));
			p++;
		}
		else
			i++;
	}
	return (split);
}

// #include <stdio.h>

//  int main()
//  {
//  	char **p = ft_split("     ", ' ');
// 	 printf("%p", p);
//  	// for (int i = 0; p[i]; i++)
//  	// {
//  	// 	printf("i = %d | ", i);
//  	// 	printf("%s\n", p[i]);
//  	// }
//  }