/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrontard <nrontard@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:10:57 by nrontard          #+#    #+#             */
/*   Updated: 2024/11/14 13:32:38 by nrontard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	n;

	res = 0;
	n = 1;
	i = 0;
	while (str[++i] != '\0')
	{
		while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
			i++;
		while (str[i] == '-' || str[i] == '+')
		{
			if (str[i + 1] == '-' || str[i + 1] == '+')
				return (0);
			if (str[i] == '-')
				n = -n;
			i++;
		}
		while (str[i] >= '0' && str[i] <= '9')
			res = res * 10 + (str[i++] - '0');
		return (n * res);
	}
	return (res);
}

// int main(void)
// {
// 	printf("%d\n", ft_atoi("  	 		 - 1234"));
// }