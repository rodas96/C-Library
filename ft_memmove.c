/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorais <rmorais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 19:00:02 by rmorais           #+#    #+#             */
/*   Updated: 2022/10/26 20:04:12 by rmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	size_t len;
	
	d = dest;
	s = src;
	len = 0;
	if (s < d)
	{
		while (n > 0)
		{
			n--;
			d[n] = s[n];
		}
	}
	else
	{
		while (len < n)
		{
			d[len] = s[len];
			len++;
		}
	}
	return (dest);
}
