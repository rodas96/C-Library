/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorais <rmorais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:51:14 by marvin            #+#    #+#             */
/*   Updated: 2022/11/09 19:04:35 by rmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*ptr;
	size_t	var;

	var = nitems * size;
	if (size != (var / nitems))
		return (NULL);
	ptr = malloc(var);
	if (ptr == NULL)
		return (ptr);
	ft_bzero(ptr, var);
	return (ptr);
}
