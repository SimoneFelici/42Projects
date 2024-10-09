/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfelici <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:44:25 by sfelici           #+#    #+#             */
/*   Updated: 2024/10/09 18:44:26 by sfelici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_separator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && is_separator(str[i], charset))
			i++;
		if (str[i])
			count++;
		while (str[i] && !is_separator(str[i], charset))
			i++;
	}
	return (count);
}

char	*allocate_word(char *str, char *charset)
{
	int		i;
	char	*word;

	i = 0;
	while (str[i] && !is_separator(str[i], charset))
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (str[i] && !is_separator(str[i], charset))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		words;
	int		i;
	int		j;

	i = 0;
	j = 0;
	words = count_words(str, charset);
	result = (char **)malloc(sizeof(char *) * (words + 1));
	if (!result)
		return (NULL);
	while (str[i])
	{
		while (str[i] && is_separator(str[i], charset))
			i++;
		if (str[i])
		{
			result[j] = allocate_word(&str[i], charset);
			j++;
		}
		while (str[i] && !is_separator(str[i], charset))
			i++;
	}
	result[j] = NULL;
	return (result);
}
