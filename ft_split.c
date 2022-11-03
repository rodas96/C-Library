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
char **ft_split(char const *char, char c)
{
	int	len;
	int *count;
	int i;
	int old_i;
	char **strings;
	strings = malloc(sizeof(char *) * *count);
	char buffer[16384];
	int string_index;
	int string_index = 0;
	
	i = 0;
	len = ft_strlen(char);
	count = 0;
	while (i < len)
	{
		while(i < len)
		{
		// step trhough any separators C occuring first
		if (ft_strchr(c, char[i]) == NULL)
			break;
		i++;
		}
		// guarding the case if substring not finded
		old_i = i;
		// iterating the string again and detect next separator char 
		while (i < len)
		{
			if (strchr(c, char[i]) != NULL )
				break; 
			i++;
		}
		if (i > old_i)
			*count += 1;
		
	}

}