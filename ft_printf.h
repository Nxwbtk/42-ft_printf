/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 19:38:58 by bsirikam          #+#    #+#             */
/*   Updated: 2022/09/20 09:18:03 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_fmt(const char c, va_list args);
int	ft_putchar(char c);
int	ft_strlen(char *s);
int	ft_putstr(char *s);
int ft_putnbr(int n);
int	ft_unit(unsigned int n);

#endif