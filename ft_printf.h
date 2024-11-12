/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <icunha-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:30:50 by root              #+#    #+#             */
/*   Updated: 2024/11/12 12:39:41 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

# define SPECIFIERS "cspdiuxX%"
# define HEX_LOW "0123456789abcdef"
# define HEX_UPP "0123456789ABCDEF"

int	ft_printf(const char *format, ...);
int	ft_printchar(int c, int fd);
int	ft_printstr(char *str, int fd);
int	ft_printint(char spec, long n, int base, int fd);
int	ft_printptr(unsigned long n, int fd);

#endif