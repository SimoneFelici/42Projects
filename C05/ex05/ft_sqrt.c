/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfelici <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:36:10 by sfelici           #+#    #+#             */
/*   Updated: 2024/10/01 17:32:21 by sfelici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	num;

	if (nb < 0)
		return (0);
	num = 1;
	while (num * num <= nb)
	{
		if (num * num == nb)
		{
			return (num);
		}
		num++;
	}
	return (0);
}
/*
int	main()
{
	printf("%d\n", ft_sqrt(-2));
//	printf("%d", sqrt(9));
}*/
