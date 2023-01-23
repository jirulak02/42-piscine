/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsimecek <jsimecek@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:50:29 by jsimecek          #+#    #+#             */
/*   Updated: 2022/10/20 17:50:31 by jsimecek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	str_returnlen(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	k;

	i = 0;
	k = 0;
	while (dest[i] != '\0')
		i++;
	k = i;
	i = 0;
	while (src[i] != '\0' && i < size)
		i++;
	k = k + i;
	return (k);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	unsigned int	n;

	i = 0;
	j = 0;
	k = str_returnlen(dest, src, size);
	while (dest[j] != '\0')
		j++;
	n = size - j - 1;
	while (j < size && src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	if (i < n)
		dest[j] = '\0';
	return (k);
}
