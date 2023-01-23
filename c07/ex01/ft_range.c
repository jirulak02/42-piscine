/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsimecek <jsimecek@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:44:21 by jsimecek          #+#    #+#             */
/*   Updated: 2022/10/28 12:44:28 by jsimecek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*p;
	int	i;

	if (min >= max)
		return (0);
	p = malloc((max - min) * sizeof(int));
	if (!p)
		return (0);
	i = 0;
	while (min < max)
	{
		p[i] = min;
		min++;
		i++;
	}
	return (p);
}
