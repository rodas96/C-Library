/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorais <rmorais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:25:42 by rmorais           #+#    #+#             */
/*   Updated: 2022/10/25 18:04:09 by rmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_digits(int nb)
{
	size_t	len;
	if (nb == 0)
		return (1);
	len = 0;
	while (nb)
	{
		len++;
		nb = nb / 10;
	}
	return (len);
}

/*
inter to char
dsc: allocate a new string that contains the integer into char
arg - 
*/
char *ft_itoa(int n)
{
	char *str;
	size_t digits;
	
}