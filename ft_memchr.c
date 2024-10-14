/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoteris <noterisarthur42@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:07:08 by anoteris          #+#    #+#             */
/*   Updated: 2024/10/04 17:33:35 by anoteris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *s_cpy ;
	unsigned char c_cpy ;
	size_t i ;

	if (n <= 0)
		return NULL ;
	s_cpy = (unsigned char *) s ;
	c_cpy = (unsigned char) c ;
	i = 0 ;
	while (i + 1 < n && s_cpy[i] != c_cpy)
		i++ ;
	if (s_cpy[i] == c_cpy)
		return (char *) (s + i) ;
	return NULL ;
}