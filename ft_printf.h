/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 12:49:44 by niromano          #+#    #+#             */
/*   Updated: 2023/05/12 12:49:47 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *f, ...);
char	*ft_unsigned_itoa(unsigned int n);
char	*ft_conv_hexa(unsigned int nb, char *hexa);
char	*ft_hexa_address(unsigned long nb, char *hexa);
int		tempo(int temp, char *s);

#endif
