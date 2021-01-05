/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 15:06:10 by bben-yaa          #+#    #+#             */
/*   Updated: 2020/11/23 12:16:59 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

#include<stdio.h>
size_t ft_strlen(const char *s)
{
	int i;

	i = 0;

	while(s[i] != '\0')
		i++;
	return(i);
}
