/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrani <asebrani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 01:37:24 by asebrani          #+#    #+#             */
/*   Updated: 2023/12/07 05:31:53 by asebrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_format(char format, va_list ap)
{
	int	count;

	count = 0;
	if (format == 'c')
		count += ft_putchar(va_arg(ap, int));
	else if (format == 's')
		count += ft_putstr(va_arg(ap, char *));
	else if (format == 'd' )
		count += ft_putdigit(va_arg(ap, int), 10);
	else if (format == 'i' )
		count += ft_putdigit(va_arg(ap, int), 10);
	else if (format == 'x')
		count += ft_putdigit(va_arg(ap, unsigned int), 16);
	else if (format == 'u' )
		count += ft_putdigit(va_arg(ap, unsigned int), 10);
	else if (format == 'X' )
		count += ft_put__x(va_arg(ap, unsigned int), 16);
	else if (format == 'p')
		count += ft_pointer(va_arg(ap, unsigned long));
	else if (format == '%')
		count += ft_putchar('%');
	else
		count += write(1, &format, 1);
	return (count);
}
