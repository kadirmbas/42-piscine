/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbas <kbas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 15:11:26 by kbas              #+#    #+#             */
/*   Updated: 2025/12/03 15:11:26 by kbas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	if (min >= max)
	{
		return (NULL);
	}
	array = (int *)malloc(sizeof(int) * (max - min);
	if (!array)
	{
		return (NULL);
	}
	i = 0;
	while (i < (max - min);
	{
		array[i] = min + i;
		i++;
	}
	return(array);
}
