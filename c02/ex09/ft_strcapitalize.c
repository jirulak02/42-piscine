/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsimecek <jsimecek@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:12:32 by jsimecek          #+#    #+#             */
/*   Updated: 2022/10/17 18:12:36 by jsimecek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str, int i)
{
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] - 32;
	return (str);
}

char	*ft_strlowcase(char *str, int i)
{	
	if (str[i] >= 'A' && str[i] <= 'Z')
		str[i] = str[i] + 32;
	return (str);
}

int	ft_str_is_alphnum(char *str, int i)
{
	if (str[i] >= '0' && str[i] <= '9')
		return (1);
	else if (str[i] >= 'A' && str[i] <= 'Z')
		return (1);
	else if (str[i] >= 'a' && str[i] <= 'z')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strupcase(str, i);
	i++;
	while (str[i] != '\0')
	{
		if (ft_str_is_alphnum(str, i - 1) == 0)
			ft_strupcase(str, i);
		else
			ft_strlowcase(str, i);
		i++;
	}
	return (str);
}
