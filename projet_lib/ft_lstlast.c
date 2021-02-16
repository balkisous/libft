/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 09:13:31 by bben-yaa          #+#    #+#             */
/*   Updated: 2021/02/16 18:05:05 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list *tmp;

	tmp = lst;
	if (lst == NULL)
		return (NULL);
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	return (tmp);
}
