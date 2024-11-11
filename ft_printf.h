/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:30:50 by root              #+#    #+#             */
/*   Updated: 2024/11/08 18:47:34 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include "../libft/libft.h"
#include <stdarg.h>

#define SPECIFIERS "cspdiuxX%"
#define HEX_LOW "0123456789abcdef"
#define HEX_UPP "0123456789ABCDEF"

int	ft_printf(const char *format, ...);
int	ft_printchar(int c);
int	ft_printstr(char *str);

int	ft_printptr(unsigned long n);

#endif