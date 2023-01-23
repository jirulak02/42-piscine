/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsimecek <jsimecek@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:48:17 by jsimecek          #+#    #+#             */
/*   Updated: 2022/10/26 13:48:19 by jsimecek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = nb;
	if (nb < 2)
		return (0);
	while (--i > 1)
	{
		if (nb % i == 0)
			return (0);
	}
	return (1);
}
