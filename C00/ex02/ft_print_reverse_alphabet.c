/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbas <kbas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 15:07:29 by kbas              #+#    #+#             */
/*   Updated: 2025/12/02 15:07:29 by kbas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	last_alphabet;

	last_alphabet = 'z';
	while (last_alphabet >= 'a')
	{
		write(1, &last_alphabet, 1);
		last_alphabet--;
	}
}
