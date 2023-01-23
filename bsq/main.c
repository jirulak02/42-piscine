/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsimecek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 19:41:57 by jsimecek          #+#    #+#             */
/*   Updated: 2022/11/02 19:41:58 by jsimecek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int		valid(char *map);
char	*solve(char *map);
void	print_sol(char *store, char *map);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	input_lenght(char *input)
{
	int		fd;
	int		size;
	char	*buf;

	fd = open(input, O_RDONLY);
	if (fd == -1)
		return (-1);
	buf = (char *) malloc(sizeof(char));
	if (!buf)
		return (-1);
	size = 0;
	while (read(fd, buf, 1))
		size++;
	free(buf);
	close(fd);
	return (size);
}

char	*input_content(char *input, int size)
{
	int		fd;
	char	*map;

	fd = open(input, O_RDONLY);
	map = (char *) malloc(sizeof(char) * (size + 1));
	read(fd, map, size);
	close(fd);
	map[size - 1] = '\0';
	return (map);
}

int	map_handle(char *map)
{
	char	*store;

	if (valid(map) == 1)
	{
		ft_putstr("map error\n");
		return (1);
	}
	else
	{
		store = solve(map);
		print_sol(store, map);
		free(map);
		free(store);
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int		size;
	int		i;

	if (argc < 2)
		return (1);
	else
	{
		i = 1;
		while (i < argc)
		{
			size = input_lenght(argv[i]);
			if (size == -1)
				ft_putstr("map error\n");
			else
				map_handle(input_content(argv[i], size));
			i++;
		}
	}
	return (0);
}
