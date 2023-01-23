/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsimecek <jsimecek@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:09:57 by jsimecek          #+#    #+#             */
/*   Updated: 2022/10/17 18:10:07 by jsimecek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;
	int	j;

	i = 0;
	j = n;
	while (i < j && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < j)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
