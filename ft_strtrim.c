/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 13:59:36 by marvin            #+#    #+#             */
/*   Updated: 2022/11/02 13:59:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//trimm the string with seted chars
char *ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int j;
	if (!s1 || !set)
		return (NULL);
	// itereate the string from left check for chars
	while (s1[j] != '\0' && ft_strchr(set, s1[j]))
	{
		j++;
	}
	//iterate the string from the right check for setted char
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
	{
		i--;
	}
	// returns chars from the string value at char pos
	return (ft_substr(s1, 0, i + 1));
}