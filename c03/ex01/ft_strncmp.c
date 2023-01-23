/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsimecek <jsimecek@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:49:44 by jsimecek          #+#    #+#             */
/*   Updated: 2022/10/20 17:49:47 by jsimecek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	char			c;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] > s2[i])
		{
			c = s1[i] - s2[i];
			return (c);
		}
		else if (s1[i] < s2[i])
		{
			c = s1[i] - s2[i];
			return (c);
		}
		i++;
	}
	return (0);
}
