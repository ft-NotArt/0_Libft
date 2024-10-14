/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoteris <noterisarthur42@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 09:13:08 by anoteris          #+#    #+#             */
/*   Updated: 2024/10/04 17:34:21 by anoteris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr (const char *s, int c)
{
	unsigned char c_cpy ;
	int i ;

	c_cpy = (unsigned char) c ;
	i = 0 ;
	while (s[i])
		i++ ;
	while (i > 0 && s[i] != c_cpy)
		i-- ;
	if (s[i] == c_cpy)
		return (char *) (s + i) ;
	return NULL ;
}