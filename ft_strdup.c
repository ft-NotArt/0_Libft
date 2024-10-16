/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoteris <noterisarthur42@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 21:07:15 by anoteris          #+#    #+#             */
/*   Updated: 2024/10/16 01:37:17 by anoteris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
	char *ptr ;

	ptr = malloc(ft_strlen(s) + 1) ;
	ft_strlcpy(ptr, s, ft_strlen(s) + 1) ;
	return ptr ;
}