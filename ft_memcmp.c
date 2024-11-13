/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrontard <nrontard@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:18:12 by nrontard          #+#    #+#             */
/*   Updated: 2024/11/13 16:50:32 by nrontard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char *str1;
	const char *str2;

	str1 = s1;
	str2 = s2;
	if (n < 1)
		return (0);
	while(*str1 != '\0' && *str2 != '\0' && n > 0)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		if (*str1++ == *str2++)
			n--;
	}
	return (0);
}

int main(void)
{
	printf("%d", ft_memcmp("ABCD", "ABCD", 2));
}