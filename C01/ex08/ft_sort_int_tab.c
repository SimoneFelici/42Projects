/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfelici <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 10:06:45 by sfelici           #+#    #+#             */
/*   Updated: 2024/10/08 16:38:24 by sfelici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printer(int *tab, int size)
{
	int		k;
	char	fire;

	k = 0;
	while (k < size)
	{
		fire = tab[k] + '0';
		write(1, &fire, 1);
		k++;
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int		i;
	int		j;
	int		temp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size -1)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
	printer(tab, size);
}

int	main()
{
	int	array[5] = {5,2,4,1,3};
	int size = 5;

	ft_sort_int_tab(array, size);
}


