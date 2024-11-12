/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrontard <nrontard@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:08:47 by nrontard          #+#    #+#             */
/*   Updated: 2024/11/12 14:18:19 by nrontard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *s)
{
	int i;
	
	i = 0;
	while(s[i])
		i++;
	return(i);
}

#include <stdio.h>

int main(void)
{
	printf("%zu\n", ft_strlen("Test"));
	printf("%zu\n", ft_strlen("Gros TeST !"));
	printf("%zu\n", ft_strlen(""));
}