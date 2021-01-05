/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 10:44:33 by bben-yaa          #+#    #+#             */
/*   Updated: 2021/01/02 15:09:20 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include <stdlib.h>
#include <stdio.h>

/*
char *ft_choose(char *sep)
{
	int i;

	i = 0;
	while (sep[i])
	{
		if()

	}
}
*/
char *ft_select_fill_1(char *s, char *sep, char* str)
{
	int i;
	int j;
	int k;
	int l;

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	while(s[l])
	{
		while(sep[j])
		{
			if (s[i] == sep[j])
				i++;
			j++;
		}
		j = 0;
		l++;
	}
	while (s[i])
	{
		str[k] = s[i];
		i++;
		k++;
	}
	return(str);
}

char *ft_select_fill_2(char *s, char *sep, char *str)
{
	int i;
	int j;
	int k;
	int l;

	i = ft_strlen(str);
	j = 0;
	k = 0;
	l = ft_strlen(str);

	printf("str a %s\n", str);
	printf("l avant %d\n", l);
	printf("i avant %d\n", i);
	while(l > 0)
	{
		while (sep[j])
		{
			if(s[l] == sep[j])
			{
				printf("s[l] est %c\n",s[l]);
				printf("l  %d\n", l);
				printf("sep[j] est %c\n",sep[j]);
				printf("j  %d\n", j);
				printf("here\n");
				i--;
			}
			j++;
		}
		j = 0;
		l--;
	}
	/*
	while(l > i)
	{
		str[k] = s[i];
		printf("str %s\n", str);
		k++;
		i++;
	}
	*/
	str[i] = '\0';
	printf("str vaut %s\n", str);
	return(str);
}

char *ft_strtrim(char const *s1, char const *set)
{
	char *s;
	char *sep;
	char *str;
	int j;

	s = (char *)s1;
	sep = (char *)set;
	j = ft_strlen(s);
	str = malloc(sizeof(char)*(j + 1));
	if (str == 0)
		return(0);
	str = ft_select_fill_1(s, sep, str);
	str = ft_select_fill_2(s, sep, str);
	return(str);
}

int main()
{
	char *s = "papforêt bleuappa";
	char *sep = "ip";
	char *str;
	str = malloc(sizeof(char) * 20);
	printf("%s\n", ft_strtrim(s, sep));
	return(0);
}
