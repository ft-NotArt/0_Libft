/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoteris <noterisarthur42@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 05:56:04 by anoteris          #+#    #+#             */
/*   Updated: 2024/10/18 21:39:27 by anoteris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int count_words(char const *s, char c)
{
	int res ;

	while (*s == c && *s)
		s++ ;	
	res = 0 ;
	while (*s)
	{
		while (*s != c && *s)
			s++ ;
		res++ ;
		while (*s == c && *s)
			s++ ;
	}
	return res ;
}

char **ft_split(char const *s, char c)
{
	char **res ;
	int words ;
	int i ;
	int j ;

	words = count_words(s, c) ;
	res = malloc((words + 1) * sizeof(char *)) ;
	if (!res)
		return NULL ;
	res[words] = NULL ;
	i = 0 ;
	while (*s)
	{
		if (*s != c)
		{
			j = 0 ;
			while (s[j] != c && s[j])
				j++ ;
			res[i++] = ft_substr(s, 0, j) ;
			s += j ;
		}
		if (*s)
			s++ ;
	}
	return res ;
}
