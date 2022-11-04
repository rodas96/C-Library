/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorais <rmorais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:59:21 by marvin            #+#    #+#             */
/*   Updated: 2022/11/04 18:22:00 by rmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include "libft.h"

static int	word_count(const char *str, char c)
{
	size_t	words;
	size_t	separator;
	size_t	i;

	words = 0;
	separator = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c && separator == 0)
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

static	char	*word_dup(const char *str, int s, int f)
{
	char	*word;
	size_t	i;

	i = 0;
	word = malloc((f - s + 1) * sizeof(char));
	while (s < f)
	{
		word[i++] = str[s++];
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	index;
	char	**split;

	split = malloc((word_count(s, c) + 1) * sizeof(char *));
	if (!s || !split)
		return (0);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			split [j++] = word_dup(s, index, i);
			index = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}
 */