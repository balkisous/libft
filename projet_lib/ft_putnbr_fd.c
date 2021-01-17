/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 13:55:18 by bben-yaa          #+#    #+#             */
/*   Updated: 2021/01/17 18:27:21 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

static	void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

void			ft_putnbr_fd(int n, int fd)
{
	if (n >= 0 && n <= 9)
		ft_putchar(n + '0', fd);
	else if (n < 0)
	{
		if (n == -2147483648)
			write(fd, "-2147483648", 11);
		else
		{
			ft_putchar('-', fd);
			ft_putnbr_fd(-n, fd);
		}
	}
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
}
