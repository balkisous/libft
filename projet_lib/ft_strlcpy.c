/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 11:17:49 by bben-yaa          #+#    #+#             */
/*   Updated: 2020/12/04 14:55:11 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

#include<stdio.h>
size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t s1;
	size_t s2;
	size_t i;
	char *s;

	s =(char *)src;
	s1 = ft_strlen(dst);
	s2 = ft_strlen(s);
	i = 0;
	
	if(size - 1 <= s1)
		return(s2);
	while (s1 + i < size - 1)
	{
		dst[s1 + i] = src[i];
		i++;
	}
	dst[s1 + i] = '\0';
	return(s2);
}
