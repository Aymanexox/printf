/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrani <asebrani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 00:08:22 by asebrani          #+#    #+#             */
/*   Updated: 2023/12/07 21:12:43 by asebrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;
	int		i;

	i = 0;
	va_start(ap, format);
	count = 0;
	if (write(1, 0, 0) == -1)
		return (-1);
	while (*format != '\0')
	{
		if (format[i] == '%' && format[i + 1])
			count += ft_print_format(*(++format), ap);
		else if (format[i] != '%')
			count += write(1, format, 1);
		++format;
	}
	va_end(ap);
	return (count);
}
