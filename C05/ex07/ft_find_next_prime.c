/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoroko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 15:42:08 by dsoroko           #+#    #+#             */
/*   Updated: 2022/02/10 15:50:10 by dsoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

int	ft_is_prime(int nb)
{
	int	div;

	if (nb <= 1)
		return (0);
	div = 2;
	while (nb % div != 0)
		div++;
	if (div == nb)
		return (1);
	return (0);
}

int	ft_find_next_prime(int nb)
{
	while (nb < INT_MAX && !ft_is_prime(nb))
		
	return (nb);
}
