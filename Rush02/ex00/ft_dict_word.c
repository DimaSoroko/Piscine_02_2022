/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict_word.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsaglam <ilsaglam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 19:16:00 by ilsaglam          #+#    #+#             */
/*   Updated: 2022/02/20 21:31:40 by dsoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	ft_dict_word(char *dict, int x) // calc words per line x
{
	char	c;
	int		i;
	int		fd;
	int		nb;

	fd = open(dict, O_RDONLY);
	nb = 0;
	i = 0;
	while (read(fd, &c, 1) != '\0')
	{
		if (c != '\n')
			i++;
		else
		{
			if (nb == x)
			{
				close(fd);
				return (i + 1);
			}
			nb++;
			i = 0;
		}
	}
	close(fd);
	return (i + 1);
}
