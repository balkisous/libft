/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 12:18:54 by bben-yaa          #+#    #+#             */
/*   Updated: 2021/01/05 19:38:08 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int	ft_sstrlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] =! '\0')
		i++;
	return (i);
}
char	*ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
	char *str;
	char *st;
	int i;

	i = 0;
	st = (char *)s;
	str = malloc(sizeof(char) * (ft_sstrlen(st) + 1));
	if (str == 0)
		return (0);
	while (st[i])
	{
		str[i] = st[i];
		i++;
	}
	i = 0;
	while (str[i])
	{
		str[i] = (*f)(i, str[i]);
		i++;
	}
	return (str);
}
/*
char ft_a()
{	
}
int main ()
{
	printf("%s\n", ft_strmapi("La belle au bois dormant"));
	return(0);
}
*/
