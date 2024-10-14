/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoteris <noterisarthur42@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 08:05:14 by anoteris          #+#    #+#             */
/*   Updated: 2024/10/04 17:48:11 by anoteris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy (void *dest, const void *src, size_t n)
{
	char *char_src ;
	char *cpy ;
	size_t i ;

	if (dest == NULL && src == NULL)
		return dest ;
	char_src = (char *) src ;
	cpy = dest ;
	i = 0 ;
	while (i < n)
	{
		cpy[i] = char_src[i] ;
		i++ ;
	}
	return dest ;
}