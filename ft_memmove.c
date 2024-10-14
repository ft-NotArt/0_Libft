/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoteris <noterisarthur42@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 08:11:20 by anoteris          #+#    #+#             */
/*   Updated: 2024/10/16 15:38:43 by anoteris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove (void *dest, const void * src, size_t n)
{
	char *char_src ;
	char *cpy ;
	size_t i ;

	char_src = (char *) src ;
	cpy = dest ;
	i = 0 ;
	if (dest <= src)
		while (i < n)
		{
			cpy[i] = char_src[i] ;
			i++ ;
		}
	else
		while (i < n)
		{
			cpy[(n - 1) - i] = char_src[(n - 1) - i] ;
			i++ ;
		}
	return dest ;
}