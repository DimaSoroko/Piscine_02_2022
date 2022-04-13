/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoroko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 14:40:29 by dsoroko           #+#    #+#             */
/*   Updated: 2022/02/06 14:50:20 by dsoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_ascii(char c)
{
	int	i;

	i = 0;
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (check_ascii(str[i]) == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
