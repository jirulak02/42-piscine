/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsimecek <jsimecek@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:44:35 by jsimecek          #+#    #+#             */
/*   Updated: 2022/10/28 12:44:37 by jsimecek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;
	int	*buf;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	buf = malloc((max - min) * sizeof(int));
	if (!buf)
	{
		*range = 0;
		return (-1);
	}
	*range = buf;
	i = 0;
	len = max - min;
	while (min < max)
	{
		buf[i] = min;
		min++;
		i++;
	}
	return (len);
}
