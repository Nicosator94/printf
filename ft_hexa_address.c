/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_address.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 09:42:52 by niromano          #+#    #+#             */
/*   Updated: 2023/05/16 09:43:04 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

char	*ft_hexa_address(unsigned long nb, char *hexa)
{
	char			*s;
	int				i;
	unsigned long	temp;

	i = 0;
	temp = nb;
	if (nb == 0)
		return (NULL);
	while (temp > 0)
	{
		temp = temp / 16;
		i ++;
	}
	s = malloc(sizeof(char) * (i + 1));
	if (s == NULL)
		return (NULL);
	s[i] = '\0';
	while (i != 0)
	{
		s[i - 1] = hexa[nb % 16];
		nb = nb / 16;
		i --;
	}
	return (s);
}
