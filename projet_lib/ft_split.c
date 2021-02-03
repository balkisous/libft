/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 11:57:48 by bben-yaa          #+#    #+#             */
/*   Updated: 2021/02/03 10:20:54 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_count(char *s, char sep)
{
	int i;
	int count;

	i = 1;
	count = 0;
	if (s[0] != sep)
	{
		count++;
	}
	while (s[i])
	{
		if (s[i - 1] == sep && s[i] != sep)
		{
			count++;
		}
		i++;
	}
	return (count);
}

static char	*ft_strdup_sep(char *s, char sep)
{
	int		i;
	char	*dest;

	i = 0;
	while (s[i] != sep && s[i] != '\0')
		i++;
	dest = malloc(sizeof(char) * (i + 1));
	if (dest == NULL)
		return (0);
	i = 0;
	while (s[i] != sep && s[i] != '\0')
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static char	**ft_fill(int j, char **new, char *s, char c)
{
	int k;
	int l;

	k = 0;
	l = 1;
	if (s[0] != c && k < j)
	{
		new[0] = ft_strdup_sep(&s[0], c);
		k++;
	}
	while (s[l] && k < j)
	{
		if (s[l - 1] == c && s[l] != c)
		{
			new[k] = ft_strdup_sep(&s[l], c);
			k++;
		}
		l++;
	}
	return (new);
}

char		**ft_split(char const *s, char c)
{
	char	**new;
	char	*str;
	int		j;

	if (!s)
		return (NULL);
	str = (char *)s;
	j = ft_count(str, c);
	new = malloc(sizeof(char *) * j + 1);
	if (new == NULL)
		return (NULL);
	new = ft_fill(j, new, str, c);
	new[j] = NULL;
	return (new);
}
