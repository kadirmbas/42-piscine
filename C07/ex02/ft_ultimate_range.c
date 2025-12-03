/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbas <kbas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 15:33:30 by kbas              #+#    #+#             */
/*   Updated: 2025/12/03 15:33:30 by kbas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*array;
	int	i;
	int	len;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	len = max - min;
	array = (int *)malloc(sizeof(int) * len);
	if (!array)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (i < len)
	{
		array[i] = min + i;
		i++;
	}
	*range = array;
	return (len);
}
