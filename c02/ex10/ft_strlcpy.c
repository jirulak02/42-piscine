/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsimecek <jsimecek@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:13:10 by jsimecek          #+#    #+#             */
/*   Updated: 2022/10/17 18:13:14 by jsimecek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int				i;
	int				j;
	unsigned int	k;

	i = 0;
	j = size - 1;
	while (src[i] != '\0')
		i++;
	k = i;
	i = 0;
	while (i < j && src[i] != '\0')
	{
		if (dest[i] == '\0')
			break ;
		dest[i] = src[i];
		i++;
	}
	if (size != 0)
		dest[i] = '\0';
	return (k);
}
