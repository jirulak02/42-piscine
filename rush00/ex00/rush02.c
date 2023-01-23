/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 18:12:47 by cvidot            #+#    #+#             */
/*   Updated: 2022/10/16 09:32:53 by cvidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	first(int x)
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
		ft_putchar('A');
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
		ft_putchar('A');
	}
	ft_putchar('\n');
}

void	middle(int x)
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

void	last(int x)
{
	int	i;

	i = 0;
	if (x == 1)
	{
		ft_putchar('C');
	}
	else if (x == 2)
	{
		ft_putchar('C');
		ft_putchar('C');
	}
	else
	{
		ft_putchar('C');
		x = x - 2;
		while (i < x)
		{
			ft_putchar('B');
			i++;
		}
		ft_putchar('C');
	}
}

void	rush(int x, int y)
{
	int	j;

	j = 0;
	if (x <= 0 || y <= 0)
		return ;
	if (y == 1)
	{
		first(x);
	}
	else if (y == 2)
	{
		first(x);
		last(x);
	}
	else
	{
		first(x);
		y = y - 2;
		while (j < y)
		{
			middle(x);
			j++;
		}
		last(x);
	}
}
