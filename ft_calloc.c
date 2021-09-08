/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 14:06:07 by bben-yaa          #+#    #+#             */
/*   Updated: 2021/02/03 10:01:21 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*tab;
	size_t	i;

	i = 0;
	tab = malloc(size * nmemb);
	if (tab == 0)
		return (NULL);
	ft_bzero(tab, size * nmemb);
	return (tab);
}
