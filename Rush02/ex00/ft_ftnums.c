/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftnums.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsaglam <ilsaglam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 20:10:15 by ilsaglam          #+#    #+#             */
/*   Updated: 2022/02/20 21:36:51 by dsoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

unsigned long long int	expo_max(int expo)
{
	unsigned long long int	puiss;

	puiss = 1;
	while (expo > 0)
	{
		puiss *= 10;
		expo--;
	}
	return (puiss);
}

void	ft_lookfor(unsigned long long int nbr,
	unsigned long long int *tab_int, char **tab_char, int tc) // comppare the dict
{
	int	i;

	i = 0;
	while (tab_char[i])
	{
		if ((tab_int[i] == nbr && (nbr != '0')))
		{
			ft_putstr(tab_char[i]);
			if (tc != 0)
				ft_putstr(" ");
			break ;
		}
		i++;
	}
}

int	ft_table_maker(char *strc, char *tab, int tc)
{
	int	cpt;

	cpt = 0;
	while (strc[cpt] != '\0')
	{
		if(strc[cpt] < '0' || strc[cpt] > '9')
		{
			ft_putstr("Error\n");
			return (0);
		}
		tab[tc - cpt] = strc[cpt];
		cpt++;
	}
	tab[cpt] = '\0';
	return (1);
}
