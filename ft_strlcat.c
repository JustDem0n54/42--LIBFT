/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrontard <nrontard@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 11:40:30 by nrontard          #+#    #+#             */
/*   Updated: 2024/11/14 13:16:31 by nrontard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s1[i] != '\0' && i < n)
		i++;
	j = i;
	while (s2[i - j] != '\0' && i < n - 1)
	{
		s1[i] = s2[i - j];
		i++;
	}
	if (j < n)
		s1[i] = '\0';
	i = 0;
	while (s1[i])
		i++;
	return (j + i);
}

// int main(void)
// {
// 	char dest[20] = "hello ";
// 	char src[] = "World !";
// 	printf("%s\n", dest);
// 	printf("%zu\n", ft_strlcat(dest, src, 20));
// 	printf("%s\n", dest);

// 	return (0);
// }