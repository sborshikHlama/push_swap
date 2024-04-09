/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevstign <aevstign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:57:32 by aevstign          #+#    #+#             */
/*   Updated: 2023/11/05 14:21:05 by aevstign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_len(int number, int	*len)
{
	if (number == -2147483648)
	{
		write(1, "-2147483648", 11);
		(*len) += 11;
		return ;
	}
	if (number < 0)
	{
		ft_putchar_len('-', len);
		ft_putnbr_len(number * -1, len);
	}
	else
	{
		if (number > 9)
			ft_putnbr_len(number / 10, len);
		ft_putchar_len(number % 10 + '0', len);
	}
}

void	ft_print_pointer(size_t pointer, int *len)
{
	char	string[25];
	int		i;
	char	*base_char;

	base_char = "0123456789abcdef";
	i = 0;
	if (!pointer)
	{
		ft_putstr_len("(nil)", len);
		return ;
	}
	write(1, "0x", 2);
	(*len) += 2;
	while (pointer != 0)
	{
		string[i] = base_char[pointer % 16];
		pointer = pointer / 16;
		i++;
	}
	while (i--)
	{
		ft_putchar_len(string[i], len);
	}
}

void	ft_print_unsigned_int(unsigned int u, int *len)
{
	if (u >= 10)
		ft_print_unsigned_int(u / 10, len);
	ft_putchar_len(u % 10 + '0', len);
}
