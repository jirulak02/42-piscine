/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:15:12 by cvidot            #+#    #+#             */
/*   Updated: 2022/10/16 09:18:29 by cvidot           ###   ########.fr       */
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
		ft_putchar('o');
	}
	else if (x == 2)
	{
		ft_putchar('o');
		ft_putchar('o');
	}
	else
	{
		ft_putchar('o');
		x = x - 2;
		while (i < x)
		{
			ft_putchar('-');
			i++;
		}
		ft_putchar('o');
	}
	ft_putchar('\n');
}

void	line2(int x)
{
	int	i;

	i = 0;
	if (x == 1)
	{
		ft_putchar('|');
	}
	else if (x == 2)
	{
		ft_putchar('|');
		ft_putchar('|');
	}
	else
	{
		ft_putchar('|');
		x = x -2;
		while (i < x)
		{
			ft_putchar(' ');
			i++;
		}
		ft_putchar('|');
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	j;

	j = 0;
	if (x < 0 || y <= 0)
		return ;
	if (y == 1)
	{
		line1(x);
	}
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
