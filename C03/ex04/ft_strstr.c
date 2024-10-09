/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfelici <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:51:55 by sfelici           #+#    #+#             */
/*   Updated: 2024/09/25 11:20:37 by sfelici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*d;

	if (*to_find)
	{
		while (*str)
		{
			d = str;
			if (*str++ == *to_find)
			{
				while (*str)
				{
					str++;
				}
				return (d);
			}
		}
	}
	return (NULL);
}
