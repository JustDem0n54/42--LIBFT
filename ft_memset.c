/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrontard <nrontard@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:27:43 by nrontard          #+#    #+#             */
/*   Updated: 2024/11/12 16:43:08 by nrontard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	unsigned char *str;
	int i;
	
	str = s;
	while (n > 0)
	{
		*str++ = c;
		n--;
	}
	return(s);
}

// #include <stdio.h>

// int main(void)
// {
// 	char str[50] = "test test test test";
// 	printf("%s\n", str);
// 	ft_memset(str + 5, 98, 25);
// 	printf("%s\n", str);
// 	return(0);
// }