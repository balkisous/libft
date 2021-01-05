/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 09:02:34 by bben-yaa          #+#    #+#             */
/*   Updated: 2021/01/05 19:07:19 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *str;
	unsigned char d;
	size_t i;

	str = (unsigned char*)s;
	d = (unsigned char)c;
	i = 0;
	while (n > 0)
	{
		if (str[i] == d)
		{
			return (str + i);
		}
		i++;
		n--;
	}
	return (0);
}
