/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsimecek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 19:42:03 by jsimecek          #+#    #+#             */
/*   Updated: 2022/11/02 19:42:19 by jsimecek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_lines(char *map)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (map[i] != '\0')
	{
		if (map[i] == '\n')
			count++;
		i++;
	}
	return (count - 1);
}

int	row_lenght(char *map, int i)
{
	int	j;
	int	lenght;
	int	l;

	lenght = 0;
	l = i - 1;
	while (map[i + lenght] != '\n')
		lenght++;
	while (map[i] != '\0')
	{
		j = 0;
		while (map[i] != '\n')
		{
			if ((map[i] != map[l - 2]) && (map[i] != map[l - 3]))
				return (1);
			i++;
			j++;
		}
		i++;
		if (j != lenght)
			return (1);
	}
	return (0);
}

int	valid(char *map)
{
	int	i;
	int	j;
	int	number;

	i = 0;
	while (map[i] != '\n')
	{
		if (map[i] < 32 || map[i] > 126)
			return (1);
		i++;
	}
	j = 0;
	number = 0;
	while (j < i - 3 && (map[j] >= '0' && map[j] <= '9') && map[0] != '0')
		number = number * 10 + (map[j++] - 48);
	if (number != ((int)count_lines(map)))
		return (1);
	if ((map[i - 3] == map[i - 2]) || (map[i - 2] == map[i - 1]))
		return (1);
	if (map[i - 3] == map[i - 1])
		return (1);
	if (row_lenght(map, i + 1) == 1)
		return (1);
	return (0);
}
