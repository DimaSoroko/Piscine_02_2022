/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsaglam <ilsaglam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 13:44:30 by sel-yagh          #+#    #+#             */
/*   Updated: 2022/02/20 21:39:54 by dsoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Online C compiler to run C program online
#include "ft_header.h"

char	ft_nb(char *strc, unsigned long long int *tab_int, char **tab_char)
{
	char					*tab;
	int						tc;
	unsigned long long int	puiss10;
	unsigned long long int	nb;
	int res;

	tc = ft_strlen(strc) - 1;
	puiss10 = expo_max(tc);
	tab = malloc(sizeof(char) * (ft_strlen(strc) + 1));
	if (!tab)
		return (0);
	res = ft_table_maker(strc, tab, tc);
	if (res == 0)
		return (0);
	if (tab[0] == '0' && tab[1] == '\0')
		ft_putstr("zero");
	while (tc >= 0)
	{
		if ((tc % 3 == 1) && (tab[tc] != '0'))
		{
			if (tab[tc] == '1')
			{
				nb = ((tab[tc] - '0') * 10) + (tab[tc - 1] - '0');
				tc--;
				puiss10 /= 10;
			}
			else
				nb = (tab[tc] - '0') * 10;
			ft_lookfor(nb, tab_int, tab_char, tc);
		}
		else if ((tc % 3 == 2) && (tab[tc] != '0'))
		{
			nb = (tab[tc] - '0');
			ft_lookfor(nb, tab_int, tab_char, tc);
			ft_lookfor(100, tab_int, tab_char, tc);
		}
		else if (tab[tc] != '0')
		{
			nb = tab[tc] - '0';
			ft_lookfor(nb, tab_int, tab_char, tc);
		}
		if ((tc / 3 != (tc - 1) / 3))
			ft_lookfor(puiss10, tab_int, tab_char, tc);
		tc--;
		puiss10 /= 10;
	}
	return (0);
}
