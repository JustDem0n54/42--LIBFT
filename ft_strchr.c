/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrontard <nrontard@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:21:59 by nrontard          #+#    #+#             */
/*   Updated: 2024/11/14 13:23:47 by nrontard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != c && str[i] != '\0')
	{
		i++;
		if (str[i] == c)
			return ((char *)str + i);
	}
	return (NULL);
}

// int main(void)
// {
// 	printf("%s\n", ft_strchr("Bonjour", 'o'));
// }