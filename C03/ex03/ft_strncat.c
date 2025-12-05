/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbas <kbas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 22:53:07 by kbas              #+#    #+#             */
/*   Updated: 2025/12/04 22:53:07 by kbas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	destlen(char *dest2)
{
	unsigned int	i;

	i = 0;
	while (dest2[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	z;
	unsigned int	i;

	z = 0;
	i = destlen(dest);
	while (src[z] != '\0' && z < nb)
	{
		dest[i] = src[z];
		z++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
