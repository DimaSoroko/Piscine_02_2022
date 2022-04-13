/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoroko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 10:59:02 by dsoroko           #+#    #+#             */
/*   Updated: 2022/02/06 12:30:34 by dsoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_ascii(char c)
{
	int	i;

	i = 0;
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_alpha(char *str)
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
