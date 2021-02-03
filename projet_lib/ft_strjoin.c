/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 07:40:06 by bben-yaa          #+#    #+#             */
/*   Updated: 2021/02/02 15:21:13 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_fill(char *new, const char *s, int k)
{
	int i;

	i = 0;
	while (s[i])
	{
		new[k] = s[i];
		i++;
		k++;
	}
	return (new);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		i;
	int		j;
	int		k;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
	k = 0;
	if(s1 == NULL || s2 == NULL)
		return(NULL);
	new = malloc(sizeof(char) * (i + j + 1));
	if (new == NULL)
		return (NULL);
	new = ft_fill(new, s1, k);
	k = i;
	new = ft_fill(new, s2, k);
	new[i + j] = '\0';
	return (new);
}
