/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoroko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 15:50:48 by dsoroko           #+#    #+#             */
/*   Updated: 2022/02/06 15:53:28 by dsoroko          ###   ########.fr       */
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

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (check_ascii(str[i]) == 1)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
