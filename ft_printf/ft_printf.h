/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevstign <aevstign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:40:42 by aevstign          #+#    #+#             */
/*   Updated: 2023/11/04 17:30:29 by aevstign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

int			ft_printf(const char *format, ...);
void		ft_spec_checker(char specifier, va_list *args, int *len, int *i);
void		ft_putchar_len(char c, int *len);
void		ft_putstr_len(char *args, int *len);
void		ft_putnbr_len(int number, int	*len);
void		ft_print_pointer(size_t pointer, int *len);
void		ft_print_hex(unsigned int x, int *len, char c);
void		ft_print_unsigned_int(unsigned int u, int *len);

#endif