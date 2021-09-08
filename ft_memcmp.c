/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 17:24:46 by bben-yaa          #+#    #+#             */
/*   Updated: 2021/01/05 19:10:58 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*d1;
	unsigned char	*d2;
	size_t			i;

	d1 = (unsigned char *)s1;
	d2 = (unsigned char *)s2;
	i = 0;
	if (d1 == 0 || d2 == 0)
		return (0);
	while (n)
	{
		if (*d1 != *d2)
			return (*d1 - *d2);
		d1++;
		d2++;
		n--;
	}
	return (0);
}
