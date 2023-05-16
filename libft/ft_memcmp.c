/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:38:09 by niromano          #+#    #+#             */
/*   Updated: 2023/05/12 07:47:22 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int		i;
	unsigned char		*s3;
	unsigned char		*s4;

	i = 0;
	if ((int)n < 0)
		return (0);
	s3 = (unsigned char *)s1;
	s4 = (unsigned char *)s2;
	while (s3[i] == s4[i] && i < n - 1)
		i ++;
	if (s3[i] - s4[i] > 0)
		return (n);
	else if (s3[i] - s4[i] == 0)
		return (0);
	else
		return (-1);
}
