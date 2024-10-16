/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoteris <noterisarthur42@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 18:02:53 by anoteris          #+#    #+#             */
/*   Updated: 2024/10/16 02:50:38 by anoteris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *nptr)
{
	int result ;
	int sign ;

	result = 0 ;
	sign = 1 ;
	while (NotArt_isspace(*nptr))
		nptr++ ;
	if (*nptr == '+' || *nptr == '-')
		if (*nptr++ == '-')
			sign = -1 ;
	while (NotArt_isdigit(*nptr))
	{
		result *= 10 ;
		result += (*nptr - '0') ;
		nptr++ ;
	}
	return result * sign ;
}