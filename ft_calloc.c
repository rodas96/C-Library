/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:51:14 by marvin            #+#    #+#             */
/*   Updated: 2022/10/28 17:51:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void *ptr;

	ptr = malloc(nitems * size);
	if (ptr == NULL)
		return (ptr);
	ft_bzero(ptr, size * nitems);
	return (ptr);
}