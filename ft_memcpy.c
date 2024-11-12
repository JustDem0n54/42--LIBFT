/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrontard <nrontard@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:22:03 by nrontard          #+#    #+#             */
/*   Updated: 2024/11/12 17:53:59 by nrontard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest_str, const void *src_str, size_t n)
{
	unsigned char *dest;
	unsigned const char *src;
	
	dest = dest_str;
	src = src_str;
	while (n > 0)
	{
		*dest++ = *src++;
		n--;
	}
	return(dest);
}

#include <stdio.h>

int main(void)
{
	char dest[20] = "Bonjour";
	char src[] = "Hello World !";
	printf("%s\n", dest);
	ft_memcpy(dest, src, 14);
	printf("%s", dest);
}