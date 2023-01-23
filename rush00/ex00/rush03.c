/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidot <cvidot@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 09:54:53 by cvidot            #+#    #+#             */
/*   Updated: 2022/10/15 09:58:02 by cvidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	line1(int x)
{
	int	i;

	i = 0;
	if (x == 1)
	{
		ft_putchar('A');
	}
	else if (x == 2)
	{
		ft_putchar('A');
		ft_putchar('C');
	}
	else
	{
		ft_putchar('A');
		x = x - 2;
		while (i < x)
		{
			ft_putchar('B');
			i++;
		}
		ft_putchar('C');
	}
	ft_putchar('\n');
}

void	line2(int x)
{
	int	i;

	i = 0;
	if (x == 1)
	{
		ft_putchar('B');
	}
	else if (x == 2)
	{
		ft_putchar('B');
		ft_putchar('B');
	}
	else
	{
		ft_putchar('B');
		x = x - 2;
		while (i < x)
		{
			ft_putchar(' ');
			i++;
		}
		ft_putchar('B');
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	j;

	j = 0;
	if (x <= 0 || y <= 0)
		return ;
	if (y == 1)
		line1(x);
	else if (y == 2)
	{
		line1(x);
		line1(x);
	}
	else
	{
		line1(x);
		y = y - 2;
		while (j < y)
		{
			line2(x);
			j++;
		}
		line1(x);
	}
}
