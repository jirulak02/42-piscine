/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsimecek <jsimecek@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:33:28 by jsimecek          #+#    #+#             */
/*   Updated: 2022/10/18 16:33:30 by jsimecek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			write(1, "\\", 1);
			c = (str[i] / 16) + '0';
			write(1, &c, 1);
			c = str[i] % 16;
			if (c < 10)
				putchar(c + '0');
			else
				putchar(c + 'W');
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
