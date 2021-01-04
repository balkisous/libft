/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 14:53:03 by bben-yaa          #+#    #+#             */
/*   Updated: 2020/12/13 17:45:27 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memmove(void *dest, const void *src, size_t n)
{
	char *dst;
	char *s;
	char temp[n];
	size_t i;

	dst = (char *)dest;
	s = (char *)src;
	i = 0;


	while(n >= i)
	{
		temp[i] = s[i];
		i++;
		n--;
	}


	printf("%s\n", temp);

	i = 0;
	while (n > i && temp[i] != '\0')
	{
		dst[i] = temp[i];
		i++;
		n--;
	}

	return(dest);
}
