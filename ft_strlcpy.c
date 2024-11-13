/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrontard <nrontard@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 10:54:24 by nrontard          #+#    #+#             */
/*   Updated: 2024/11/13 13:50:53 by nrontard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t i;
	
	i = 0;
	while(src[i])
		i++;
	while (n-- > 1 && *src != '\0')
		*dest++ = *src++;
	*dest++ = '\0';
	return (i);
}

// int main(void)
// {
// 	char dest[20] = "";
// 	char src[] = "Hello World !";
// 	printf("%s\n", dest);
// 	ft_strlcpy(dest, src, 20);
// 	printf("%s\n", dest);
// 	return (0);
// }