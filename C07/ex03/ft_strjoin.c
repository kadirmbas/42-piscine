/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbas <kbas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 16:01:30 by kbas              #+#    #+#             */
/*   Updated: 2025/12/03 16:01:30 by kbas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	int		total_len;
	char	*result;

	if (size == 0)
	{
		result = (char *)malloc(1);
		if (!result)
			return (NULL);
		result[0] = '\0';
		return (result);
	}

	total_len = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			j++;
		total_len += j;
		i++;
	}

	j = 0;
	while (sep[j])
		j++;
	total_len += j * (size - 1);

	result = (char *)malloc(total_len + 1);
	if (!result)
		return (NULL);

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			result[k++] = strs[i][j++];
		j = 0;
		while (i < size - 1 && sep[j])
			result[k++] = sep[j++];
		i++;
	}
	result[k] = '\0';
	return (result);
}
