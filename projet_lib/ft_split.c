/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 11:57:48 by bben-yaa          #+#    #+#             */
/*   Updated: 2021/01/07 10:00:54 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int ft_count(char *s, char sep)
{
	int i;
	int count;

	i = 0;
	count = 0;

	while(s[i])
	{
		if (s[i] == sep && s[i + 1] != sep && s[i + 1] != '\0')
			count++;
		i++;
	}
	printf("count vaut %d\n", count);
	return (count);
}

char *ft_strdup_sep(char *s, char sep)
{
	int 	i;
	char	*dest;
	
	i = 0;
	while(s[i] != sep)
		i++;
	dest = malloc(sizeof(char) * (i + 1));
	if(dest == NULL)
		return(0);
	i = 0;
	while(s[i] != sep)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	printf("%s\n", dest);
	return(dest);
}

char **ft_split(char const *s, char c)
{
	char	**new;
	char	*str;
	int	i;
	int 	j;
	int 	k;

	str = (char *)s;
	i = 0;
	k = 1;
	j = ft_count(str, c);
	if (str == 0)
		return(0);
	new = malloc(sizeof(char) * j);
		if(new == NULL)
			return (0);
	j = 0;
	while (str[i])
	{
		printf("j vaut %d\n", j);
		if (str[j - 1] == c && str[j] != c)
		{
			printf("first i = %d\n", i);
			new[k] = ft_strdup_sep(&str[i], c);
			k++;
			printf("i avant while vaut %d\n", i);
			while (!(str[i] = c && str[i + 1] != c))
				i++;
			printf("i apres while vaut %d\n", i);
		}
		j++;
	}
	return(new);
}
#include <stdio.h>
int main ()
{
	char *s = "Hello     les      gens";
	char c = ' ';
//	int i = 10;
	ft_split(s, c);
//	printf("count == %d\n", ft_count(s, c));
//	printf("strdup = %s\n", ft_strdup_sep(&s[i], c));
	return(0);
}
