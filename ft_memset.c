/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorais <rmorais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:26:14 by rmorais           #+#    #+#             */
/*   Updated: 2022/10/26 17:12:53 by rmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


void	*ft_memset(void *s, int c, size_t n)
{
	char	*position;
	
	position = s;
	while (n > 0)
	{
		position[n-1] = c;
		n--;
	}
	return (position);
}

/* int main()
{
    char str[50] = '\0';
    printf("\nBefore memset(): %s\n", str);
  
    // Fill 8 characters starting from str[13] with '.'
    ft_memset(str + 13, '.', 8*sizeof(char));
  
    printf("After memset():  %s", str);
    return 0;
} */