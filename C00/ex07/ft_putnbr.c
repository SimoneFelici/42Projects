/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfelici <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:44:07 by sfelici           #+#    #+#             */
/*   Updated: 2024/09/19 17:44:15 by sfelici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	idk[10];
	int		counter;

	counter = 0;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	while (nb > 0)
	{
		idk[counter] = nb % 10 + '0';
		counter ++;
		nb = nb / 10;
	}
	while (counter > 0)
	{
		counter --;
		write(1, &idk[counter], 1);
	}
}
