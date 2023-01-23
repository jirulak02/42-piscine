/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsimecek <jsimecek@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 11:57:34 by jsimecek          #+#    #+#             */
/*   Updated: 2022/10/15 11:57:40 by jsimecek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	pos_nbr(int nb)
{
	char	c;
	char	d[15];
	int		i;

	i = 0;
	while (nb > 0)
	{
		c = (char)(nb % 10) + '0';
		nb = nb / 10;
		d[i] = c;
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		write (1, &d[i], 1);
		i--;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
		write (1, "0", 1);
	else if (nb > 0)
	{
		pos_nbr(nb);
	}
	else if (nb == -2147483648)
		write (1, "-2147483648", 11);
	else
	{
		nb = nb * (-1);
		write (1, "-", 1);
		pos_nbr(nb);
	}
}
