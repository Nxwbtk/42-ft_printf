/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_util.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 16:46:44 by bsirikam          #+#    #+#             */
/*   Updated: 2022/09/06 21:16:03 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	int	i;
	int	len;

	i = 0;
	if (!s)
		return (ft_putstr("(null)"));
	len = ft_strlen(s);
	while (s[i] && i < len)
	{
		write(1, &(s[i]), 1);
		i++;
	}
	return (len);
}

int ft_putnbr(int n)
{
	int		len;
	char	c;

	len = 0;
	if (n == -2147483648)
		return (ft_putstr("-2147483648"));
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
		len++;
	}
	
}