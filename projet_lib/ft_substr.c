/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 16:44:50 by bben-yaa          #+#    #+#             */
/*   Updated: 2020/11/23 12:06:03 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)

{
	char *new;
	unsigned int i;

	i = 0;
	new = malloc(sizeof(char) * (len + 1));
	if (new == 0)
		return (0);
	while (s[i] != '\0')
		i++;
	if (i < start)
		return(0);
	i = 0;
	while (s[start] != '\0')
	{
		new[i] = s[start];
		start++;
		i++;
	}
	new[i] = '\0';
	return(new);
}
