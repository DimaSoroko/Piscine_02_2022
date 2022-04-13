/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsaglam <ilsaglam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 20:13:18 by ilsaglam          #+#    #+#             */
/*   Updated: 2022/02/20 21:29:41 by dsoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>

unsigned long long int	*ft_read_dict2(char *dicto);
char					**ft_read_dict(char *dicto);
char					*ft_strcpy(char *dest, char *src);
int						ft_dict_lines(char *dict);
int						ft_dict_word(char *dict, int x);
void					ft_putstr(char *str);
void					ft_malloc(char **char_table, int dicto);
int						ft_strlen(char *str);
char					ft_nb(char *strc, unsigned long long int *tab_int,
							char **tab_char);
int						ft_table_maker(char *strc, char *tab, int tc);
unsigned long long int	expo_max(int expo);
void					ft_lookfor(unsigned long long int nbr,
							unsigned long long int *tab_int,
							char **tab_char, int tc);
#endif
