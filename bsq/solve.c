/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsimecek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 19:42:44 by jsimecek          #+#    #+#             */
/*   Updated: 2022/11/02 19:42:46 by jsimecek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	find_biggest_square(char *map, int pos, char obst, int row)
{
	int	i;
	int	j;
	int	len;
	int	square;

	len = 0;
	square = 0;
	while (map[len] != '\0')
		len++;
	while (pos + (square * row) < len)
	{
		j = 0;
		while (j <= square * row)
		{
			i = -1;
			while (++i <= square)
			{
				if (map[pos + j + i] == obst || map[pos + j + i] == '\n')
					return (square + 48);
			}
			j = j + row;
		}
		square++;
	}
	return (square + 48);
}

int	map_lenght(char *map)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (map[j] != '\n')
		j++;
	while (map[j + i + 1] != '\0')
		i++;
	return (i);
}

char	*solve(char *map)
{
	int		i;
	int		j;
	int		row;
	char	*store;
	char	obst;

	i = 0;
	j = 0;
	while (map[j] != '\n')
		j++;
	row = 0;
	while (map[j + row + 1] != '\n')
		row++;
	obst = map[j - 2];
	j++;
	store = malloc(sizeof(char) * map_lenght(map));
	while (map[i + j] != '\0')
	{
		store[i] = find_biggest_square(map, i + j, obst, row + 1);
		i++;
	}
	store[i] = '\0';
	return (store);
}
