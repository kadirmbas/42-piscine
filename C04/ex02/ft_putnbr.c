/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbas <kbas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 10:25:49 by kbas              #+#    #+#             */
/*   Updated: 2025/12/07 10:25:49 by kbas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	while (nb == -2147483648)
	{
		write(1, -2147483648, 11);
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + 48);
	}
}
