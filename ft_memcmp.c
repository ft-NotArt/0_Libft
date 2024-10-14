/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoteris <noterisarthur42@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:15:48 by anoteris          #+#    #+#             */
/*   Updated: 2024/10/16 09:31:11 by anoteris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *s1_cpy ;
	unsigned char *s2_cpy ;
	size_t i ;

	s1_cpy = (unsigned char *) s1 ;
	s2_cpy = (unsigned char *) s2 ;
	i = 0 ;
	while (i < n && s1_cpy[i] == s2_cpy[i])
		i++ ;
	if (i == n)
		return 0 ;
	return (s1_cpy[i] - s2_cpy[i]) ;
}