/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsimecek <jsimecek@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:50:18 by jsimecek          #+#    #+#             */
/*   Updated: 2022/10/20 17:50:20 by jsimecek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	j;
	int	k;

	j = 0;
	if (to_find[0] == '\0')
		return (&str[0]);
	while (str[j] != '\0')
	{
		k = 0;
		while (str[j + k] == to_find[k])
		{
			if (to_find[k + 1] == '\0')
				return (&str[j]);
			k++;
		}
		j++;
	}
	return (0);
}
