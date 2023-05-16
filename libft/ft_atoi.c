/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:34:12 by niromano          #+#    #+#             */
/*   Updated: 2023/05/10 10:53:32 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	negatif(int moins, int nb)
{
	if (moins == 1)
		return (-nb);
	return (nb);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	nb;
	int	moins;

	i = 0;
	nb = 0;
	moins = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i ++;
	if (nptr[i] == '-')
		moins ++;
	if (nptr[i] == '-' || nptr[i] == '+')
		i ++;
	if (nptr[i] >= '0' && nptr[i] <= '9')
	{
		while (nptr[i] >= '0' && nptr[i] <= '9')
		{
			nb = nb * 10;
			nb = nb + nptr[i] - 48;
			i ++;
		}
		return (negatif(moins, nb));
	}
	return (0);
}
