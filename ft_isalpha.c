/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorais <rmorais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:21:42 by rmorais           #+#    #+#             */
/*   Updated: 2022/10/26 17:26:58 by rmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	{
		if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
			return (1);
	}
	return (0);
}

/* #include <stdio.h>
int	main()
{
	int a;
	
	a = 62;
	printf("%d", ft_isalpha(a));
} */
