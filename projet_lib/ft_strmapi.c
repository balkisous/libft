/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 12:18:54 by bben-yaa          #+#    #+#             */
/*   Updated: 2021/01/11 23:12:28 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char ft_a(unsigned int i, char d)
{
	(void) i;
	d = 'a';
	return (d);
}	
static	int	ft_sstrlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
	printf("i = %d\n", i);
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

	printf("%s\n ", st);
	while (st[i])
	{
		str[i] = st[i];
		str[i] = (*f)(i, str[i]);
		i++;
	}
	str[i] = '\0';
	printf("%s\n",st);
	return (str);
}

int main ()
{
	printf("jojo\n");
	printf("%d\n", ft_sstrlen("Hello world"));
	ft_strmapi("Hello world", ft_a);	
	return(0);
}
