/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoteris <noterisarthur42@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 09:08:49 by anoteris          #+#    #+#             */
/*   Updated: 2024/10/04 17:33:50 by anoteris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	unsigned char c_cpy ;

	c_cpy = (unsigned char) c ;
	while (*s && *s != c_cpy)
		s++ ;
	if (*s == c_cpy)
		return (char *) s ;
	return NULL ;
}