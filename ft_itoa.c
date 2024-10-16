/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoteris <noterisarthur42@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 07:30:30 by anoteris          #+#    #+#             */
/*   Updated: 2024/10/16 09:09:43 by anoteris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int nbr_digits(int n) //return how many digits there is in a given int
{
	int nbr ;

	if (n == 0)
		return 1 ;
	if (n == -2147483648)
		return 10 ;
	if (n < 0)
		n *= -1 ;
	nbr = 0 ;
	while (n > 0)
	{
		n /= 10 ;
		nbr++ ;
	}
	return nbr ;
}

static int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
		return (0);
	if (power != 0)
		res = nb * ft_recursive_power(nb, power -1);
	return (res);
}

#include <stdio.h>
char *ft_itoa(int n)
{
	char *res ;
	char digit ;

	res = malloc(nbr_digits(n) + NotArt_isnegative(n) + 1) ;
	if (n == -2147483648)
		ft_strlcat(res, "-2147483648", 12) ;
	else if (n == 0)
			ft_strlcat(res, "0", 2) ;
	else
	{
		if (n < 0)
		{
			n *= -1 ;
			ft_strlcat(res, "-", 2) ;
		}
		while (n >= 10)
		{
			digit = (char) ((n / (ft_recursive_power(10, nbr_digits(n) - 1))) + '0') ;
			ft_strlcat(res, &digit, ft_strlen(res) + 2) ;
			n = (n % (ft_recursive_power(10, nbr_digits(n) - 1))) ;
		}
		digit = (char) ((n / (ft_recursive_power(10, nbr_digits(n) - 1))) + '0') ;
		ft_strlcat(res, &digit, ft_strlen(res) + 2) ;
	}
	return res ;
}
