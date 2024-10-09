/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfelici <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 20:16:39 by sfelici           #+#    #+#             */
/*   Updated: 2024/09/26 20:16:40 by sfelici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

/*int	main()
{
	char myStr[20] = "Hello World";
	printf("%lu\n", strlen(myStr));
    printf("%d\n", ft_strlen(myStr));
}*/
