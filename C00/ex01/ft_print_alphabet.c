/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbas <kbas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 15:07:15 by kbas              #+#    #+#             */
/*   Updated: 2025/12/02 15:07:15 by kbas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	first_alphabet;

	first_alphabet = 'a';
	while (first_alphabet <= 'z')
	{
		write(1, &first_alphabet, 1);
		first_alphabet++;
	}
}
