/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoroko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 14:51:53 by dsoroko           #+#    #+#             */
/*   Updated: 2022/02/06 15:04:26 by dsoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_ascii(char c)
{
	int	i;

	i = 0;
	if (c >= 32 && c <= 127)
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_printable(char *str)
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
