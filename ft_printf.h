/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 19:38:58 by bsirikam          #+#    #+#             */
/*   Updated: 2022/09/19 16:58:48 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_putchar(int c);
int	ft_strlen(char *s);
int	ft_putstr(char *s);
int ft_putnbr(int n);

#endif