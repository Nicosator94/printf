/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:05:08 by niromano          #+#    #+#             */
/*   Updated: 2023/05/10 12:29:17 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*d;
	int		i;

	i = 0;
	d = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (d == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		d[i] = s[i];
		i ++;
	}
	d[i] = '\0';
	return (d);
}
