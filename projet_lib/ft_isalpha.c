/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 16:09:08 by bben-yaa          #+#    #+#             */
/*   Updated: 2020/11/23 12:23:17 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(int c)
{
	if((c >= 65 && c <= 90)||(c >= 97 && c <= 122))
		return(1);
	else 
		return(0);	
}
