/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 11:58:45 by bben-yaa          #+#    #+#             */
/*   Updated: 2021/01/16 10:49:43 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	d;
	char	*t;
	int		i;
	int		j;

	d = (char)c;
	t = (char *)s;
	i = 0;
	j = 0;
	while (t[i] != '\0')
	{
		if (t[i] == d)
			j = i;
		i++;
	}
	if (t[i] == '\0' && t[i] == d)
		return (&t[i]);
	else if (j > 0)
		return (&t[j]);
	else
		return (0);
}
