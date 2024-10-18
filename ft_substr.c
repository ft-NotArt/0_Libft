/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoteris <noterisarthur42@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 03:15:31 by anoteris          #+#    #+#             */
/*   Updated: 2024/10/18 17:32:24 by anoteris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *res ;

	res = malloc(len + 1) ;
	if (!res)
		return NULL ;
	ft_strlcpy(res, s+start, len + 1) ;
	return res ;
}