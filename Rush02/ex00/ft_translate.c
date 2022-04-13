/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   translateNorm.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsaglam <ilsaglam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 18:25:54 by dsoroko           #+#    #+#             */
/*   Updated: 2022/02/20 21:32:47 by dsoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	ft_create_table(char **char_table, char *dicto)
{
	int		i;
	int		j;
	char	c;
	int		dictionaire;

	i = 0;
	j = 0;
	dictionaire = open(dicto, O_RDONLY);
	while (read(dictionaire, &c, 1) != '\0')
	{
		if (c != ':' && (c != '\n' && c != ' ') && !(c >= '0' && c <= '9'))
			char_table[i][j++] = c;
		if (c == '\n')
		{
			char_table[i++][j] = 0;
			j = 0;
		}
	}
	close(dictionaire);
}

char	**ft_read_dict(char *dicto)
{
	int		i;
	char	**char_table;

	i = 0;
	char_table = malloc(sizeof(*char_table) * (ft_dict_lines(dicto) + 1));
	while (i < ft_dict_lines(dicto))
	{
		char_table[i] = malloc(sizeof(char) * ft_dict_word(dicto, i));
		i++;
	}
	if (!char_table)
		return (0);
	ft_create_table(char_table, dicto);
	return (char_table);
}

unsigned long long int	*ft_read_dict2(char *dicto)
{
	char					c;
	int						i;
	int						j;
	int						dictionaire;
	unsigned long long int	*char_table;

	i = 0;
	j = 0;
	char_table = malloc(sizeof(*char_table) * (ft_dict_lines(dicto) + 1));
	if (!char_table)
		return (0);
	dictionaire = open(dicto, O_RDONLY);
	i = 0;
	while (read(dictionaire, &c, 1) != '\0')
	{
		if (c != ':')
		{
			if ((c != '\n' && c != ' ') && (c >= '0' && c <= '9'))
				char_table[i] = (char_table[i] * 10) + (c - 48);
			if (c == '\n')
				i++;
		}
	}
	close(dictionaire);
	return (char_table);
}
