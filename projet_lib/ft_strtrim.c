/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 10:44:33 by bben-yaa          #+#    #+#             */
/*   Updated: 2021/01/11 16:04:14 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_strleng(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i - 1);
}

static char	*ft_fill(char *str, char *s, int i)
{
	int l;

	l = 0;
	while (s[i])
	{
		str[l] = s[i];
		i++;
		l++;
	}
	str[l] = '\0';
	return (str);
}

static char	*ft_select_1(char *s, char *sep, char *str)
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
	str = ft_fill(str, s, i);
	return (str);
}

static	char	*ft_select_fill_2(char *sep, char *str)
{
	int j;
	int l;
	int k;

	j = 0;
	l = ft_strleng(str);
	k = 1;
	while (k != 0)
	{
		while (sep[j])
		{
			if (str[l] == sep[j])
			{
				k++;
				break ;
			}
			k = 0;
			j++;
		}
		j = 0;
		if (k > 0)
			l--;
	}
	str[l + 1] = '\0';
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
	j = ft_strleng(s);
	str = malloc(sizeof(char) * (j + 1));
	if (str == 0)
		return (0);
	str = ft_select_1(s, sep, str);
	str = ft_select_fill_2(sep, str);
	return (str);
}
