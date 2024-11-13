/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrontard <nrontard@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:03:55 by nrontard          #+#    #+#             */
/*   Updated: 2024/11/13 16:16:01 by nrontard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *str, int c, size_t n)
{
	int i;
	const char *s;
	
	i = 0;
	s = str;
	while (s[i] && n-- > 0)
	{
		if (s[i] == c) 
			return ((char*)str + i);	
		i++;
	}
	return (NULL);
}

int main(void)
{
	char *result;
	result = ft_memchr("Bonjour", 'j', 3);
	printf("%s", result);
}