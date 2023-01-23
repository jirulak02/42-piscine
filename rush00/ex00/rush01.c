/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 18:12:47 by cvidot            #+#    #+#             */
/*   Updated: 2022/10/16 09:08:48 by cvidot           ###   ########.fr       */
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
		ft_putchar('/');
	}
	else if (x == 2)
	{
		ft_putchar('/');
		ft_putchar('\\');
	}
	else
	{
		ft_putchar('/');
		x = x - 2;
		while (i < x)
		{
			ft_putchar('*');
			i++;
		}
		ft_putchar('\\');
	}
	ft_putchar('\n');
}

void	middle(int x)
{
	int	i;

	i = 0;
	if (x == 1)
	{
		ft_putchar('*');
	}
	else if (x == 2)
	{
		ft_putchar('*');
		ft_putchar('*');
	}
	else
	{
		ft_putchar('*');
		x = x - 2;
		while (i < x)
		{
			ft_putchar(' ');
			i++;
		}
		ft_putchar('*');
	}
	ft_putchar('\n');
}

void	last(int x)
{
	int	i;

	i = 0;
	if (x == 1)
	{
		ft_putchar('\\');
	}
	else if (x == 2)
	{
		ft_putchar('\\');
		ft_putchar('/');
	}
	else
	{
		ft_putchar('\\');
		x = x - 2;
		while (i < x)
		{
			ft_putchar('*');
			i++;
		}
		ft_putchar('/');
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
