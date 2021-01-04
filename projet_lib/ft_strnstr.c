/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 11:01:16 by bben-yaa          #+#    #+#             */
/*   Updated: 2020/11/30 18:44:22 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	int i; 
	int j;
	char *b;
	char *l;

	i = 0;
	j = 0;
	b = (char *)big;
	l = (char *)little;

	if (l[j] == 0)
		return(b);
	while (b[i] != '\0' && len > 0)
	{	
		while(b[i + j] == l[j])
		{
			if(l[j + 1] == '\0')
				return(&b[i]);
			j++;
		}
		j = 0;
		i++;
		len--;
	}	
	return(0);
}

int main ()
{
	const char *big = "battitou";
	const char *little = "ti";
	size_t len = 10;

	printf("%s\n",ft_strnstr(big, little, len));
	return(0);
}
