/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 10:44:33 by bben-yaa          #+#    #+#             */
/*   Updated: 2021/01/08 13:12:26 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static	char	*ft_select_fill_1(char *s, char *sep, char *str)
{
	int i;
	int j;
	int l;

	i = 0;
	j = 0;
	l = 0;
	while (s[l])
	{
		while (sep[j])
		{
			if (s[i] == sep[j])
				i++;
			j++;
		}
		j = 0;
		l++;
	}
	l = 0;
	while (s[i])
	{
		str[l] = s[i];
		i++;
		l++;
	}
	return (str);
}

static	char	*ft_select_fill_2(char *s, char *sep, char *str)
{
	int i;
	int j;
	int l;
	int k;

	i = ft_strlen(str);
	j = 0;
//	l = ft_strlen(str);
	l = 13;
	printf("l %d\n", l);
	k = 1;
	while (k != 0)
	{
		printf("la grande boucle\n");
		while (sep[j])
		{
			printf("lool\n");
			printf("s %c\n",str[13]);
			printf("sep %c\n",sep[j]);
			if (s[l] == sep[j])
			{
				printf("here\n");
				i--;
				k++;
				break;
			}
			k = 0;
			j++;
		}
		printf("heeeere\n");
		j = 0;
		if (k > 0)
			l--;
		else
			str[i] = '\0';
	}
	printf("%s\n", str);
	str[i] = '\0';
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s;
	char	*sep;
	char	*str;
	int		j;

	s = (char *)s1;
	sep = (char *)set;
	j = ft_strlen(s);
	str = malloc(sizeof(char) * (j + 1));
	if (str == 0)
		return (0);
	str = ft_select_fill_1(s, sep, str);
	str = ft_select_fill_2(s, sep, str);
	return (str);
}

#include <stdio.h>
int main()
{
	int i = 0;
	char *s = "forêt bleu__/";
	char *sep = "/____";
	char *str;
	printf("strlen of s %zu\n", ft_strlen(s));
	str = malloc(sizeof(char) * ft_strlen(s) + 1);
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	printf("str avant %s\n",str);
	printf("%s\n", ft_select_fill_2(s, sep, str));
//	printf("%s\n", ft_strtrim(s, sep));
	return(0);
}
