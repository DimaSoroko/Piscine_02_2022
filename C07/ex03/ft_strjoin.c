/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoroko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 08:31:57 by dsoroko           #+#    #+#             */
/*   Updated: 2022/02/22 12:36:14 by dsoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_seplen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strslen(int size, char **str)
{
	int	i;
	int	j;
	int	length;

	i = 0;
	length = 0;
	while (i < size)
	{
		j = 0;
		while (str[i][j])
		{
			j++;
			length++;
		}
		i++;
	}
	return (length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		length;
	char	*str;

	if (size == 0)
	{
		str = malloc(sizeof(char));
		*str = 0;
		return (str);
	}
	length = (size - 1) * ft_seplen(sep) + ft_strslen(size, strs) + 1;
	str = malloc(sizeof(char) * length);
	if (str == NULL)
		return (0);
	i = 0;
	*str = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1)
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}
/*
int  main ()
{
	char *text[4];

	text[0] = "1";
	text[1] = "2";
	text[2] = "3";
	text[3] = "4";

	printf("%s\n", ft_strjoin(4, text, " - "));
}
*/
