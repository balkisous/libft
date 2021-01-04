/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 20:01:02 by bben-yaa          #+#    #+#             */
/*   Updated: 2020/12/13 17:43:21 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t i;
	char d;
	char *dst;
	char *s;

	i = 0;
	dst = (char *)dest;
	s = (char *)src;
	d = (char)c;

	while (s[i] != d && n + 1 > i)
	{
		dst[i] = s[i]; 
		i++;
		n--;
	}
	return(dst + i + 1);	
}
