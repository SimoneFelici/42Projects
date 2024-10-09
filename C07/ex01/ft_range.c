/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfelici <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 18:29:48 by sfelici           #+#    #+#             */
/*   Updated: 2024/10/04 18:29:49 by sfelici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	*start;

	if (min >= max)
	{
		array = NULL;
		return (array);
	}
	array = (int *)malloc((max - min) * sizeof(int));
	start = array;
	while (min < max)
	{
		*array++ = min++;
	}
	return (start);
}
/*
int	main()
{
	int	*range = ft_range(12, 32);

	while(*range)
	{
		printf("%d ", *range++);
	}
}
*/
