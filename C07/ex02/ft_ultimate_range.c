/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfelici <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 18:29:15 by sfelici           #+#    #+#             */
/*   Updated: 2024/10/04 18:40:14 by sfelici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*array;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	array = (int *)malloc((max - min) * sizeof(int));
	if (!array)
		return (-1);
	*range = array;
	i = 0;
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (i);
}

/*
int main()
{
    int *tab;
    int size = ft_ultimate_range(&tab, 1, 9);
    printf("Size: %d\n", size);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }
    return 0;
}
*/
