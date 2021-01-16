/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 20:01:02 by bben-yaa          #+#    #+#             */
/*   Updated: 2021/01/16 23:31:03 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t		i;
	unsigned char	d;
	char		*dst;
	char		*s;

	i = 0;
	dst = (char *)dest;
	s = (char *)src;
	d = (unsigned char)c;
	while (s[i] != d && n > i)
	{
		dst[i] = s[i];
		i++;
	}
	if (s[i] == d)
		return (dst[i]);
	else
		return (0);
}
