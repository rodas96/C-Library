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
	unsigned char *d;
	unsigned const char *s;

	d = dest;
	s = src;
	if (dest < src)
	{
		ft_memcpy(dest, src, n);

	}
	else
		while(n > 0)
		{
			*d++ = *s++;
			n--;
		}
	return(dest);
}
