/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsimecek <jsimecek@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 15:27:04 by jsimecek          #+#    #+#             */
/*   Updated: 2022/10/22 15:27:08 by jsimecek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	solve(char *v[], char *p);

int	error_check(int c, char *v[])
{
	int	i;

	i = 0;
	if (c != 2)
		return (1);
	while (v[1][i] != '\0')
	{
		if (i % 2 == 0)
		{
			if (v[1][i] < 49 || v[1][i] > 52)
				return (1);
		}
		else
		{
			if (v[1][i] != 32)
				return (1);
		}
		i++;
	}
	if (i != 31)
		return (1);
	return (0);
}

void	print_solved(char *p)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		write(1, &p[i], 1);
		if (i % 4 != 3)
			write(1, " ", 1);
		if (i % 4 == 3)
			write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int		i;
	char	*p;

	i = 0;
	if (error_check(argc, argv) == 1)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	p = malloc(17);
	while (i < 16)
	{
		p[i] = '0';
		i++;
	}
	p[16] = '\0';
	if (solve(argv, p) == 1)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	print_solved(p);
	free(p);
	return (0);
}
