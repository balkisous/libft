/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 11:57:48 by bben-yaa          #+#    #+#             */
/*   Updated: 2021/01/07 17:09:23 by bben-yaa         ###   ########.fr       */
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
	if (s[0] != sep)
	{
		count++;
	}
	while(s[i])
	{
		if (s[i - 1] == sep && s[i] != sep)
		{
			count++;
		}
		i++;
	}
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
	return(dest);
}

char** ft_fill(int j, char **new, char *s, char c)
{
	int k;
	int l;

	k = 0;
	l = 0;
	if (s[0] != c && k < j)
	{
		new[k] = ft_strdup_sep(&s[0], c);
//		printf("here\n");
		printf("%s\n", new[0]);
		k++;
//		printf("k dasn 0 %d\n", k);
	}
	while(s[l] && k < j)
	{
		if (s[l - 1] == c && s[l] != c) 
		{

//			printf("k dasn lol  %d\n", k);
			new[k] = ft_strdup_sep(&s[l], c);
			printf("%s\n", new[k]);
			k++;
		}
		l++;
	}
	return(new);
}

char **ft_split(char const *s, char c)
{
	char	**new;
	char	*str;
	int	i;
	int 	j;

	str = (char *)s;
	i = 0;
	j = ft_count(str, c);
	if (str == 0)
		return(0);
	new = malloc(sizeof(char) * j);
	if(new == NULL)
		return (0);
	new = ft_fill(j, new, str, c);
	printf("new[0] %s\n", new[0]);
	printf("new[1] %s\n", new[1]);
	printf("new[2] %s\n", new[2]);
	printf("new[3] %s\n", new[3]);
	printf("new[4] %s\n", new[4]);
	return (new);

}
#include <stdio.h>
int main ()
{
	char *s ="Hello   Coucou    les amis  berk";	
	char c = ' ';
	ft_split(s, c);
//	printf("%d\n", ft_count(s, c));
	return(0);
}
