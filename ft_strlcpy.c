/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoteris <noterisarthur42@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 08:17:06 by anoteris          #+#    #+#             */
/*   Updated: 2024/10/04 17:34:00 by anoteris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t i ;

	i = 0 ;
	while ((i + 1) < size && src[i] != 0)
	{
		dest[i] = src[i] ;
		i++ ;
	}
	if (size > 0 && ft_strlen((char *) src) >= size)
		dest[i] = 0 ;
	return ft_strlen((char *) src) ;
}