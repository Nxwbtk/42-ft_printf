/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 10:58:52 by bsirikam          #+#    #+#             */
/*   Updated: 2022/09/04 01:00:02 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int	count;
	char	*c = "Hello World";
	// printf("")
	count = ft_printf("%s\n", c);
	// ft_printf("%s\n", c);
	printf("%d\n", count);
}