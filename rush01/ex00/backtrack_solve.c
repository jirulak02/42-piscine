/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrack_solve.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsimecek <jsimecek@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:09:46 by jsimecek          #+#    #+#             */
/*   Updated: 2022/10/23 15:09:48 by jsimecek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_case(char *v[], char *p, int pos);

int	find_empty(char *p)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if (p[i] == '0')
			return (i);
		i++;
	}
	return (20);
}

int	check_double(char *p, int pos, int num)
{
	int		i;
	int		nb;

	i = 0;
	nb = (pos / 4) * 4;
	while (i < 4)
	{
		if (p[nb] == num + '0')
			return (1);
		i++;
		nb++;
	}
	i = 0;
	nb = pos % 4;
	while (i < 4)
	{
		if (p[nb] == num + '0')
			return (1);
		i++;
		nb = nb + 4;
	}
	return (0);
}

int	solve(char *v[], char *p)
{
	int	pos;
	int	j;

	pos = 0;
	j = 0;
	if (find_empty(p) == 20)
	{
		if (check_case(v, p, 20) == 0)
			return (0);
	}
	pos = find_empty(p);
	while (++j < 5)
	{
		if (check_double(p, pos, j) == 0)
		{
			if (check_case(v, p, pos) == 0)
			{
				p[pos] = j + '0';
				if (solve(v, p) == 0)
					return (0);
				p[pos] = '0';
			}
		}
	}
	return (1);
}
