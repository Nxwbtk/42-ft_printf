/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 10:58:52 by bsirikam          #+#    #+#             */
/*   Updated: 2022/09/24 17:50:08 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	// int	count;
	// char	*c = "Hello World";
	// int	n = 2000;
	// // printf("")
	// count = ft_printf("%d\n", n);
	// // ft_printf("%s\n", c);
	// printf("%d\n", count);
	// char	a = 'c';
	// ft_printf("%%");
	// ft_printf("%c%c%c*\n", '\0', '1', 1);
	// printf("%c%c%c*\n", '\0', '1', 1);
	// for(int i = 0; i < 30; i++)
	// {
	// 	printf("%p\n", i);
	// }
	printf("%d\n", ft_printf("%p\n", 13));
	printf("%p\n", 13);
}