/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoteris <noterisarthur42@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 20:44:25 by anoteris          #+#    #+#             */
/*   Updated: 2024/10/18 16:58:40 by anoteris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	void *ptr ;

	ptr = malloc(nmemb * size) ;
	if (!ptr)
		return NULL ;
	ft_bzero(ptr, nmemb * size) ;
	return ptr ;
}