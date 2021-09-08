/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 10:42:31 by bben-yaa          #+#    #+#             */
/*   Updated: 2021/01/13 22:40:26 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	limit;
	size_t	dst_size;
	size_t	src_size;

	if (dst && src)
	{
		src_size = ft_strlen(src);
		dst_size = ft_strlen(dst);
		if (size <= dst_size)
			return (size + src_size);
		i = 0;
		limit = size - dst_size - 1;
		while (src[i] && i < limit)
		{
			dst[dst_size + i] = src[i];
			i++;
		}
		dst[dst_size + i] = '\0';
		return (dst_size + src_size);
	}
	else
		return (0);
}
