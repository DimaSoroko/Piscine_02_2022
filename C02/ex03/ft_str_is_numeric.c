/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoroko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 12:31:39 by dsoroko           #+#    #+#             */
/*   Updated: 2022/02/06 12:37:41 by dsoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_ascii(char c)
{
	int	i;

	i = 0;
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_numeric(char *str)
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
