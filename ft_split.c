/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:59:21 by marvin            #+#    #+#             */
/*   Updated: 2022/11/02 15:59:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//contar as palavras delimitadas por "c"
//static para permanecer enquanto o prog corre
static	int 	word_count(const char *str, char c)
{
	int	words;
	int separator;
	int i;

	words = 0;
	separator = 0;
	while (str[i] != '\0')
	{
		if(str[i] != c && separator == 0)
		{
			separator = 1;
			words++;
		}
		else if (str[i] == c)
			separator = 0;
		str++;
	}
	return (words);
}
//duplicadas
static	char	*word_dup(const char *str, int s, int f)
{
	char	*word;
	int	i;

	i = 0;
	word = malloc((f-s + 1) * sizeof(char));
	while (s < f)
	{
		word[i++] = str[s++];
	}
	word[i] = '\0';
	return (word);
}

char **ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int	index;
	char **split;
	split = malloc((word_count(s, c) + 1) * sizeof(char *));
	if (!s || !split)
		reutrn (0);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if((s[i] == c || i == ft_strlen(s)) & index >= 0)
		{
			split[j++] = word_dup(s, index, i);
			index = - 1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}
