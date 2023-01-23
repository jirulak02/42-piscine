/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsimecek <jsimecek@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 19:09:37 by jsimecek          #+#    #+#             */
/*   Updated: 2022/10/13 19:09:58 by jsimecek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int		i;
	int		j;
	char	c;

	i = -1;
	while (++i <= 98)
	{
		j = i;
		while (++j <= 99)
		{
			c = (char)(i / 10) + '0';
			write (1, &c, 1);
			c = (char)(i % 10) + '0';
			write (1, &c, 1);
			write (1, " ", 1);
			c = (char)(j / 10) + '0';
			write (1, &c, 1);
			c = (char)(j % 10) + '0';
			write (1, &c, 1);
			if (i != 98)
				write (1, ", ", 2);
		}
	}
}
