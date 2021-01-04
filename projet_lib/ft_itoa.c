/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 13:21:42 by bben-yaa          #+#    #+#             */
/*   Updated: 2020/12/12 18:36:36 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
int ft_strlen(char *n)
{
	int i;
	
	i = 0;
	while(n[i] != '\0')
		i++;
	return(i);
}

char *ft_reverse(char *str)
{
	int i;
	int j;
	char temp;

	i = 0;
	j = ft_strlen(str);

	while(j  > i)
	{
		temp = str[i];
		j--;
		str[i] = str[j];
		i++;
		str[j] = temp;
	}
	return(str);
}
char *ft_itoa(int n)
{
	char *str;
	int i;
	int sign;

	i = 0;
	sign = 0;
	str = malloc(sizeof(char) * 12);
	if (str == 0 || n == 0)
		return(0);
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
	if(sign == 1)
		str[i] = '-';
	return(ft_reverse(str));	
}
