/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 14:53:03 by bben-yaa          #+#    #+#             */
/*   Updated: 2021/01/17 16:32:46 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dst;
	char	*s;
	size_t	i;

	dst = (char *)dest;
	s = (char *)src;
	i = 0;
	if (s > dst)
	{
		while (n > i)
		{
			dst[i] = s[i];
			i++;
		}
		return (dst);
	}
	else 
	{
		i = n;
		while (i > 0)
		{
			i--;
			dst[i] = s[i];
		}
		return(dst);
	}
}
