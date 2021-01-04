/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 10:42:31 by bben-yaa          #+#    #+#             */
/*   Updated: 2020/12/04 14:55:41 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
	int i; 

	i = 0;

	while(str[i])
		i++;
	return(i);
}

size_t ft_strlcat(char *dst, const char *src, size_t size )
{
	size_t s1;
	size_t s2;
	size_t i;
	char *srrc;

	s1 = ft_strlen(dst);
	srrc = (char *)src;
	s2 = ft_strlen(srrc);
	i = 0;

	if (size - 1 < s1)
		return(size + s2);
	while(s1 + i < size - 1)
	{
		dst[s1 + i] = src[i];
		i++;	
	}
	dst[s1 + i] = '\0';
	return(s1 + s2);
}
