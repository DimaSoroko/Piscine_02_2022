/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict_lines.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsaglam <ilsaglam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 19:15:15 by ilsaglam          #+#    #+#             */
/*   Updated: 2022/02/20 21:31:24 by dsoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	ft_dict_lines(char *dict) // calc lines nums in dict
{
	char	c;
	int		i;
	int		fd;

	fd = open(dict, O_RDONLY);
	i = 0;
	while (read(fd, &c, 1) != '\0')
	{
		if (c == '\n')
		{
			i++;
		}
	}
	close(fd);
	return (i + 1);
}
