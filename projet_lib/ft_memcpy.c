/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 12:09:13 by bben-yaa          #+#    #+#             */
/*   Updated: 2020/12/13 17:45:01 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> 
#include <string.h>
#include <stdio.h>
void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;
	char *dst;
	char *s;

	i = 0;
	dst = (char*)dest;
	s = (char *)src;
		i = 0;
		while(n > i)
		{
			dst[i] = s[i];
			i++;
		}
		return(dst);	
}
