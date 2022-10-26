/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorais <rmorais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:36:27 by rmorais           #+#    #+#             */
/*   Updated: 2022/10/26 19:53:27 by rmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;
	int	i;

	result = 0;
	sign = 1;
	i = 0;
	while (str[i] != '\0' || (str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
	{
		if (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				sign = -1;
			i++;
		}
		if (str[i] == '-' || str[i] == '+')
			return (0);
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

/* int main()  
{  
	char str[] = "2147483647";     
	printf("%d", ft_atoi(str));  
}  */