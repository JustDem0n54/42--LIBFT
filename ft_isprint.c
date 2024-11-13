/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrontard <nrontard@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 13:49:19 by nrontard          #+#    #+#             */
/*   Updated: 2024/11/13 10:49:53 by nrontard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return(1);
	return(0);
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("%d\n", ft_isprint(0));
// 	printf("%d\n", ft_isprint('1'));
// 	printf("%d\n", ft_isprint('/'));
// }