/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 07:40:06 by bben-yaa          #+#    #+#             */
/*   Updated: 2021/01/05 19:28:38 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1,
		char const *s2)
{
	char *new;
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	new = malloc(sizeof(char) * (i + j));
	if (malloc(sizeof(char) * (i + j)) == 0)
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		new[k] = s1[i];
		i++;
		k++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		new[k] = s2[i];
		k++;
		i++;
	}
	return (new);
}
