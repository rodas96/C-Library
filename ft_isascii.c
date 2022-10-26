/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorais <rmorais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:23:21 by rmorais           #+#    #+#             */
/*   Updated: 2022/10/25 18:18:37 by rmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0); 
}

/* #include <stdio.h>

int	main()
{
	int a;
	
	a = 128;
	
	printf("%d", ft_isascii(a));
} */