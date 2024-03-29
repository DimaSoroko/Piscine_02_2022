/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoroko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 08:11:36 by dsoroko           #+#    #+#             */
/*   Updated: 2022/02/03 14:59:52 by dsoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_chars(char a, char b, char c)
{
	ft_putchar (a);
	ft_putchar (b);
	ft_putchar (c);
	if (a < '7')
	{
		ft_putchar (',');
		ft_putchar (' ');
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_print_chars (a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
