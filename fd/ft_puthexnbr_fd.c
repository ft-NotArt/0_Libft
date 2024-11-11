/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexnbr_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoteris <noterisarthur42@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 23:15:05 by anoteris          #+#    #+#             */
/*   Updated: 2024/11/07 06:11:51 by anoteris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_puthexnbr_fd(unsigned long n, int fd, char hex_case)
{
	char	*base ;

	base = "0123456789abcdef" ;
	if (hex_case == 'X')
		base = "0123456789ABCDEF" ;
	if (n > 15)
		ft_puthexnbr_fd((n / 16), fd, hex_case);
	ft_putchar_fd((base[n % 16]), fd);
}
