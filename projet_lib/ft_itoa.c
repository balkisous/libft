/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 13:21:42 by bben-yaa          #+#    #+#             */
/*   Updated: 2021/02/02 15:17:41 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	*ft_reverse(char *str)
{
	int		i;
	int		j;
	char	temp;

	i = 0;
	j = ft_strlen(str);
	while (j > i)
	{
		temp = str[i];
		j--;
		str[i] = str[j];
		i++;
		str[j] = temp;
	}
	return (str);
}

static void	ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return ;
}

static char	*ft_check(int n, char *str)
{
	int i;

	i = 0;
	if (n == -2147483648)
	{
		ft_strcpy(str, "-2147483648");
		return (str);
	}
	else if (n == 0)
	{
		ft_strcpy(str, "0");
		return (str);
	}
	return (0);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		sign;

	i = 0;
	sign = 0;
	str = malloc(sizeof(char) * 13);
	if (str == NULL)
		return (NULL);
	if (n == -2147483648 || n == 0)
		return (ft_check(n, str));
	if (n < 0)
	{
		sign = 1;
		n = -n;
	}
	while (n != 0)
	{
		str[i] = (n % 10) + '0';
		i++;
		n /= 10;
	}
	if (sign == 1)
		str[i++] = '-';
	str[i] = '\0';
	return(ft_reverse(str));
}
