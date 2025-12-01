/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbas <kbas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 09:35:29 by kbas              #+#    #+#             */
/*   Updated: 2025/12/01 22:46:26 by kbas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_puterr(void)
{
	write(1, "map error\n", 10);
}

int	ft_atoi_n(const char *s, int n)
{
	long	res;
	int		i;

	if (!s || n <= 0)
		return (-1);
	res = 0;
	i = 0;
	while (i < n)
	{
		if (s[i] < '0' || s[i] > '9')
			return (-1);
		res = res * 10 + (s[i] - '0');
		if (res > 2147483647)
			return (-1);
		i++;
	}
	return ((int)res);
}

void	free_map(t_map *m)
{
	if (!m)
		return ;
	if (m->data)
		free(m->data);
	free(m);
}
