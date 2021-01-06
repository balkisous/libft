/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 11:57:48 by bben-yaa          #+#    #+#             */
/*   Updated: 2020/12/24 17:54:39 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

char **ft_split(char const *s, char c)
{
	char **new;
	char *str;
	int i;
	int j;

	str = (char *)s;
	i = 0;
	j = 1;
	if (str == 0)
		return(0);
	while (str[i] != '\0')
	{
		if (str[i] == c)
			j++;
		i++;
	}
	printf("%d\n", j);
	new = malloc(sizeof(char) * j);
	while (j > 0)
	{
		if (i == c)
		{
			ft_strdup(str);
		}
		j--;
		i--;
	}
	while(j > 0)
	{
		printf("%s\n", str);
		j--;
	}
	return(new);
}
int main ()
{
	char *s = "Hello/les/gens";
	char c = '/';
	ft_split(s, c);
	return(0);
}
