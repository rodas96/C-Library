/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorais <rmorais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:29:57 by rmorais           #+#    #+#             */
/*   Updated: 2022/10/26 18:57:15 by rmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*d;
	const	char	*s;
	
	
	d = dest;
	s = src;
	while (n > 0)
	{
		*d++ = *s++;
		n--;
	}
	return (dest);
}
