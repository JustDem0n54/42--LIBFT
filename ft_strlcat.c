/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrontard <nrontard@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 11:40:30 by nrontard          #+#    #+#             */
/*   Updated: 2024/11/13 12:44:00 by nrontard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t ft_strlcat(char *dest, const char *src, size_t n)
// {
// 	size_t i;
// 	size_t j;

// 	i = 0;
// 	j = 0;
// 	while (dest[i] != '\0')
// 		i++;
// 	while (src[j])
// 		j++;
// 	while (n-- > 1 && *src != '\0')
// 	{
// 		dest[i++] = *src++;
// 	}
// 	dest[i++] = '\0';
// 	return (i);
// }

size_t	ft_strlcat(char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t j;

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
	return (j + ft_strlen(s2));
}

int main(void)
{
	char dest[20] = "hello ";
	char src[] = "World !";
	printf("%s\n", dest);
	printf("%zu\n", ft_strlcat(dest, src, 20));
	printf("%s\n", dest);

	return (0);
}