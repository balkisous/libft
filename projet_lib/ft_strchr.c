/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 17:47:22 by bben-yaa          #+#    #+#             */
/*   Updated: 2021/01/17 18:24:48 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	d;
	char	*t;

	d = (char)c;
	t = (char *)s;
	i = 0;
	while (t[i] != '\0')
	{
		if (t[i] == d)
		{
			return (&t[i]);
		}
		i++;
	}
	if (t[i] == d)
		return (&t[i]);
	else
		return (0);
}
