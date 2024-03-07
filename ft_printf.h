/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrani <asebrani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 01:51:43 by asebrani          #+#    #+#             */
/*   Updated: 2023/12/07 01:59:24 by asebrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_putchar(int c);
int	ft_putdigit(long long n, int base);
int	ft_putstr(char *s);
int	ft_put__x(long n, int base);
int	ft_print_format(char format, va_list ap);
int	ft_pointer(unsigned long n);

#endif
