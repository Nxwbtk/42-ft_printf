/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 19:38:34 by bsirikam          #+#    #+#             */
/*   Updated: 2022/09/09 00:20:10 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_fmt(char c, va_list arg)
{
	if (c == 'c')
		return (ft_putchar(va_arg(arg, int)));
	if (c == 's')
		return (ft_putstr(va_arg(arg, char *)));
	if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(arg, int)));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		count;
	va_list	arg;

	va_start(arg, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			count += ft_fmt(format[i], arg);
		}
		else
			count += ft_putchar(format[i]);
		i++;
	}
	return (count);
}
