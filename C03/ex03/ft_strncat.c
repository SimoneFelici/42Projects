/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfelici <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:54:29 by sfelici           #+#    #+#             */
/*   Updated: 2024/09/25 15:21:18 by sfelici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*temp;
	unsigned int	n;

	n = 0;
	temp = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src && n < nb)
	{
		*(dest)++ = *(src)++;
		n++;
	}
	*dest = '\0';
	return (temp);
}
