/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 16:44:50 by bben-yaa          #+#    #+#             */
/*   Updated: 2021/02/03 10:12:45 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*new;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_calloc(1, sizeof(char)));
	new = malloc(sizeof(char) * (len + 1));
	if (new == NULL)
		return (NULL);
	while (s[start] && len > 0)
	{
		new[i] = s[start];
		start++;
		i++;
		len--;
	}
	new[i] = '\0';
	return (new);
}
