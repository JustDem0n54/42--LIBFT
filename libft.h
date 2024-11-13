/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrontard <nrontard@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:11:49 by nrontard          #+#    #+#             */
/*   Updated: 2024/11/13 11:08:40 by nrontard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __libft_h
#define __libft_h

#include <unistd.h>
#include <stdio.h>
#include <string.h>
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
size_t ft_strlen(const char *s);
void *ft_memset(void *s, int c, size_t n);
void ft_bzero(void *s,  size_t n);
void *ft_memcpy(void *dest_str, const void *src_str, size_t n);

#endif // __libft_h