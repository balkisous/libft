/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 07:40:06 by bben-yaa          #+#    #+#             */
/*   Updated: 2021/01/21 21:13:59 by bben-yaa         ###   ########.fr       */
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
	new[k] = '\0';
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
	new = malloc(sizeof(char) * (i + j + 1));
	if (malloc(sizeof(char) * (i + j)) == 0)
		return (0);
	new = ft_fill(new, s1, k);
	k = i;
	new = ft_fill(new, s2, k);
	return (new);
}
