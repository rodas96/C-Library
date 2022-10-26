/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorais <rmorais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:13:51 by rmorais           #+#    #+#             */
/*   Updated: 2022/10/25 19:20:46 by rmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 'A' && 'Z') || (c >= 'a' && c >= 'z') || (c >= 0 && c <= 9))
		return (1);
	return (0);
}