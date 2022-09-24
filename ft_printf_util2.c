/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_util2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 17:08:11 by bsirikam          #+#    #+#             */
/*   Updated: 2022/09/24 23:38:14 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_xlek(unsigned long x)
{
	int		len;

	len = 0;
	if (x > 15)
		len += ft_xlek(x / 16);
	if ((x % 16) >= 10)
		len += ft_putchar(((x % 16) - 10) + 'a');
	else
		len += ft_putchar((x % 16) + '0');
	return (len);
}

int	ft_xyai(unsigned long X)
{
	int		len;

	len = 0;
	if (X > 15)
		len += ft_xyai(X / 16);
	if ((X % 16) >= 10)
		len += ft_putchar(((X % 16) - 10) + 'A');
	else
		len += ft_putchar((X % 16) + '0');
	return (len);
}
