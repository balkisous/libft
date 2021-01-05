/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 10:23:57 by bben-yaa          #+#    #+#             */
/*   Updated: 2020/11/20 10:39:13 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

#include<stdio.h>
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	char *ss1;
	char *ss2;
	size_t i;

	i = 0;
	ss1 = (char *)s1;
	ss2 = (char *)s2;
	if (n == 0)
		return(0);
	while (ss1[i] && ss2[i] && ss1[i] == ss2[i] && i < n - 1)
		i++;
	return (ss1[i] - ss2[i]);
}
