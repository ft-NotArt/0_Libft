/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoteris <noterisarthur42@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 21:07:15 by anoteris          #+#    #+#             */
/*   Updated: 2024/10/15 21:32:23 by anoteris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
	char *ptr ;

	ptr = malloc(ft_strlen(s)) ;
	ft_strlcpy(ptr, s, ft_strlen(s)) ;
	return ptr ;
}