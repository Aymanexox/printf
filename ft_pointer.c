/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrani <asebrani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 01:35:35 by asebrani          #+#    #+#             */
/*   Updated: 2023/12/13 20:58:45 by asebrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_put_digit(unsigned long n, int base)
{
	int		count;
	char	*symbols;

	symbols = "0123456789abcdef";
	if (n < 0)
	{
		write(1, "-", 1);
		return (ft_put_digit(-n, base) + 1);
	}
	else if (n < (unsigned long)base)
		return (ft_putchar(symbols[n]));
	else
	{
		count = ft_put_digit(n / base, base);
		return (count + ft_put_digit(n % base, base));
	}
}

int	ft_pointer(unsigned long n)
{
	ft_putstr("0x");
	return (ft_put_digit(n, 16) + 2);
}
