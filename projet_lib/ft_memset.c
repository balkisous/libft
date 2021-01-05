/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 10:24:16 by bben-yaa          #+#    #+#             */
/*   Updated: 2020/11/26 08:07:57 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

#include<stdio.h>

void *ft_memset(void *s, int c, size_t n)
{
	int i;
	char d;
	char *t;

	i = 0;
	d = (char)c;
	t = (char *)s;
	while (n > 0)
	{
		t[i] = d;
		n--;
		i++;
	}
	return (t);
}
