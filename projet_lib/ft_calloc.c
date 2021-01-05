/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 14:06:07 by bben-yaa          #+#    #+#             */
/*   Updated: 2020/12/13 17:40:01 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

#include <stdlib.h>

void *ft_calloc(size_t nmemb, size_t size)
{	
	char *tab;
	size_t i;

	i = 0;
	
	if (nmemb == 0 || size == 0)
		return(0);
	tab = malloc(sizeof(nmemb) * (size + 1));
	if (tab == 0)
		return(0);
	while(size > 0)
	{
		tab[i] = '\0';
		i++;
		size--;	
	}
	return(tab);
}
