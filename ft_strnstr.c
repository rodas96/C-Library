/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorais <rmorais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 23:21:19 by rmorais           #+#    #+#             */
/*   Updated: 2022/10/28 00:59:46 by rmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if (little == NULL)
		return ((char *)big);
	while (big[i] != '\0')
	{
		j = 0;
		while(little[j] && big[i + j] == little[j] && i + j < len)
		{
			j++;
		}
		if (little[j] == 0)
		{
			return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
