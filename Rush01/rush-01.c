/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoroko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 11:27:10 by dsoroko           #+#    #+#             */
/*   Updated: 2022/02/13 14:27:28 by dsoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putstr(char *str)
{
	while (*str)
		write (1, str++, 1);
}

int	*toprow(int col1up, int col2up, int col3up, int col4up)
{
	int	tab[4];
	int	*ptr;

	ptr = malloc(sizeof(*tab) * 4);
	tab[0] = col1up;
	tab[1] = col2up;
	tab[2] = col3up;
	tab[3] = col4up;
	return (ptr);
}

int	*buttomrow(int col1down, int col2down, int col3down, int col4down)
{
	int	tab[4];
	int	*ptr;

	ptr = malloc(sizeof(*tab) * 4);
	tab[0] = col1down;
	tab[1] = col2down;
	tab[2] = col3down;
	tab[3] = col4down;
	return (ptr);
}

int	*leftcollumn(int row1left, int row2left, int row3left, int row4left)
{
	int	tab[4];
	int	*ptr;

	ptr = malloc(sizeof(*tab) * 4);
	tab[0] = row1left;
	tab[1] = row2left;
	tab[2] = row3left;
	tab[3] = row4left;
	return (ptr);
}

int	*rightcollumn(int row1right, int row2right, int row3right, int row4right)
{
	int	tab[4];
	int	*ptr;

	ptr = malloc(sizeof(*tab) * 4);
	tab[0] = row1right;
	tab[1] = row2right;
	tab[2] = row3right;
	tab[3] = row4right;
	return (ptr);
}

void	is_error(void)
{
	ft_putstr("Error");
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc < 17)
		is_error();
	toprow((int)argv[1], (int)argv[2], (int)argv[3], (int)argv[3]);
	buttomrow(atoi(argv[5]), atoi(argv[6]), atoi(argv[7]), atoi(argv[8]));
	leftcollumn(atoi(argv[9]), atoi(argv[10]), atoi(argv[11]), atoi(argv[12]));
	rightcollumn(atoi(argv[13]), atoi(argv[14]), atoi(argv[15]), atoi(argv[16]));
	return (0);
}
