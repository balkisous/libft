/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 14:06:07 by bben-yaa          #+#    #+#             */
/*   Updated: 2021/01/17 18:18:36 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*tab;
	size_t	i;

	i = 0;
	if (nmemb == 0 || size == 0)
		return (0);
	tab = malloc(size * nmemb);
	if (tab == 0)
		return (0);
	while (nmemb > 0)
	{
		tab[i] = 0;
		i++;
		nmemb--;
	}
	return (tab);
}
