/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsimecek <jsimecek@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:09:55 by jsimecek          #+#    #+#             */
/*   Updated: 2022/10/23 15:09:57 by jsimecek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_up(char *v[], char *p, int pos)
{
	int	i;
	int	num;
	int	max;
	int	count;

	i = 0;
	max = 0;
	count = 0;
	while (i < 4)
	{
		num = (i * 4) + (pos % 4);
		if (p[num] > max && p[num] != '0')
		{
			max = p[num];
			count++;
		}
		i++;
	}
	if (v[1][(pos % 4) * 2] < count + '0')
		return (1);
	return (0);
}

int	check_down(char *v[], char *p, int pos)
{
	int	i;
	int	num;
	int	max;
	int	count;

	i = 3;
	max = 0;
	count = 0;
	while (i >= 0)
	{
		num = (i * 4) + (pos % 4);
		if (p[num] > max && p[num] != '0')
		{
			max = p[num];
			count++;
		}
		i--;
	}
	if (v[1][((pos % 4) * 2) + 8] < count + '0')
		return (1);
	return (0);
}

int	check_left(char *v[], char *p, int pos)
{
	int	i;
	int	num;
	int	max;
	int	count;

	i = 0;
	max = 0;
	count = 0;
	while (i < 4)
	{
		num = i + ((pos / 4) * 4);
		if (p[num] > max && p[num] != '0')
		{
			max = p[num];
			count++;
		}
		i++;
	}
	if (v[1][((pos / 4) * 2) + 16] < (char)count + '0')
		return (1);
	return (0);
}

int	check_right(char *v[], char *p, int pos)
{
	int	i;
	int	num;
	int	max;
	int	count;

	i = 3;
	max = 0;
	count = 0;
	while (i >= 0)
	{
		num = i + ((pos / 4) * 4);
		if (p[num] > max && p[num] != '0')
		{
			max = p[num];
			count++;
		}
		i--;
	}
	if (v[1][((pos / 4) * 2) + 24] < (char)count + '0')
		return (1);
	return (0);
}

int	check_case(char *v[], char *p, int pos)
{
	int	i;

	i = 0;
	if (check_up(v, p, pos) == 1)
		return (1);
	if (check_left(v, p, pos) == 1)
		return (1);
	if (pos == 20)
	{
		while (i < 16)
		{
			if (check_down(v, p, i) == 1)
				return (1);
			if (check_right(v, p, i) == 1)
				return (1);
			if (check_up(v, p, i) == 1)
				return (1);
			if (check_left(v, p, i) == 1)
				return (1);
			i++;
		}
	}
	return (0);
}
