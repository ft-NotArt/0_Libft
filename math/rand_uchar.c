/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rand.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoteris <noterisarthur42@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 05:12:48 by anoteris          #+#    #+#             */
/*   Updated: 2024/12/12 05:17:18 by anoteris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned char	rand_uchar(void)
{
	int				fd ;
	unsigned char	c[1];

	fd = open("/dev/random", O_RDONLY);
	if (fd == -1)
		c[0] = 1 ;
	else
		read(fd, c, 1);
	close(fd);
	return (c[0]);
}
