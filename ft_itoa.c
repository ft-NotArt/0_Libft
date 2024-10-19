/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoteris <noterisarthur42@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 07:30:30 by anoteris          #+#    #+#             */
/*   Updated: 2024/10/19 01:21:58 by anoteris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_itoa(int n)
{
	char *res ;
	int digits ;
	long n_cpy ;

	if (n == 0)
		return ft_strdup("0") ;
	n_cpy = NotArt_absolute(n) ;
	digits = n < 0 ;
	while (n_cpy > 0)
	{
		n_cpy /= 10 ;
		digits++;
	}
	res = ft_calloc(digits + 1, sizeof(char)) ;
	if (!res)
		return NULL ;
	if (n < 0)
		res[0] = '-' ;
	n_cpy = NotArt_absolute(n) ;
	while (n_cpy > 0)
	{
		res[--digits] = (n_cpy % 10) + '0' ;
		n_cpy /= 10 ;
	}
	return res ;
}
