/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsimecek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 19:42:27 by jsimecek          #+#    #+#             */
/*   Updated: 2022/11/02 19:42:29 by jsimecek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);

char	ful_char(char *map)
{
	int	i;

	i = 0;
	while (map[i] != '\n')
		i++;
	i -= 1;
	return (map[i]);
}

int	bigest_sqr(char *store)
{
	int		i;
	int		c;
	char	fin_nb;

	i = 0;
	c = 0;
	fin_nb = store[0];
	while (store[i] != '\0')
	{
		if (store[i] > fin_nb)
		{
			fin_nb = store[i];
			c = i;
		}
		i++;
	}
	return (c);
}

int	line_count(char *map)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (map[i] != '\n')
		i++;
	i++;
	while (map[i + j] != '\n')
		j++;
	return (j);
}

int	first_line(char *map)
{
	int	i;

	i = 0;
	while (map[i] != '\n')
		i++;
	i++;
	return (i);
}

void	print_sol(char *store, char *map)
{
	int	bg_sq;
	int	j;
	int	i;
	int	sq;
	int	sec_line;

	bg_sq = bigest_sqr(store) + first_line(map);
	sq = store[bigest_sqr(store)] - 48;
	j = 0;
	sec_line = line_count(map);
	while (j < sq)
	{
		i = 0;
		while (i < sq)
		{
			map[bg_sq + i] = ful_char(map);
			i++;
		}
		j++;
		bg_sq = bg_sq + sec_line + 1;
	}
	ft_putstr(map);
}
