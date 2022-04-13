/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsaglam <ilsaglam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 20:45:59 by ilsaglam          #+#    #+#             */
/*   Updated: 2022/02/20 21:41:09 by dsoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	main(int argc, char **argv)
{
	char						**char_table;
	unsigned long long int		*int_table;

	if (argc == 2)
	{
		int_table = ft_read_dict2("numbers.dict");
		char_table = ft_read_dict("numbers.dict");
		ft_nb(argv[1], int_table, char_table);
	}
	else if (argc == 3)
	{
		int_table = ft_read_dict2(argv[1]);
		char_table = ft_read_dict(argv[1]);
		ft_nb(argv[2], int_table, char_table);
	}
	else
		ft_putstr("You need at least 1, maximum 2 arguments !");
	return (0);
}
