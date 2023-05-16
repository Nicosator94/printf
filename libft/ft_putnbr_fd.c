/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 09:36:17 by niromano          #+#    #+#             */
/*   Updated: 2023/05/10 10:10:41 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	char	nb[10];
	long	tmp;

	i = 0;
	tmp = n;
	if (tmp == 0)
		ft_putchar_fd('0', fd);
	if (tmp < 0)
	{
		ft_putchar_fd('-', fd);
		tmp = -tmp;
	}
	while (tmp > 0)
	{
		nb[i] = tmp % 10 + 48;
		tmp = tmp / 10;
		i ++;
	}
	while (i > 0)
	{
		ft_putchar_fd(nb[i - 1], fd);
		i --;
	}
}
