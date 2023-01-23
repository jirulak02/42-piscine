/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsimecek <jsimecek@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:44:47 by jsimecek          #+#    #+#             */
/*   Updated: 2022/10/28 12:44:51 by jsimecek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	lenght(int size, char **strs, char *sep)
{
	int	j;
	int	len;

	j = 0;
	len = 0;
	while (j < size)
	{
		len += ft_strlen(strs[j]);
		j++;
	}
	len += ft_strlen(sep) * (size - 1);
	return (len);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	error(int size, char *p)
{
	if (size == 0)
	{
		*p = 0;
		return (1);
	}
	return (0);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*p;

	p = malloc(sizeof(char));
	if (error(size, p) == 1)
		return (p);
	p = malloc((lenght(size, strs, sep) + 1) * sizeof(char));
	if (!p)
		return (0);
	j = -1;
	k = 0;
	while (++j < size)
	{
		i = 0;
		while (strs[j][i] != '\0')
			p[k++] = strs[j][i++];
		i = 0;
		while (j < size - 1 && sep[i] != '\0')
			p[k++] = sep[i++];
	}
	p[k] = '\0';
	return (p);
}
