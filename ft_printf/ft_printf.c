/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevstign <aevstign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:13:44 by aevstign          #+#    #+#             */
/*   Updated: 2023/11/05 14:45:59 by aevstign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_spec_checker(char specifier, va_list *args, int *len, int *i)
{
	if (specifier == 's')
		ft_putstr_len(va_arg(*args, char *), len);
	else if (specifier == 'd' || specifier == 'i')
		ft_putnbr_len(va_arg(*args, int), len);
	else if (specifier == 'u')
		ft_print_unsigned_int(va_arg(*args, unsigned int), len);
	else if (specifier == 'x')
		ft_print_hex(va_arg(*args, unsigned int), len, 'x');
	else if (specifier == 'X')
		ft_print_hex(va_arg(*args, unsigned int), len, 'X');
	else if (specifier == 'p')
		ft_print_pointer(va_arg(*args, size_t), len);
	else if (specifier == 'c')
		ft_putchar_len(va_arg(*args, int), len);
	else if (specifier == '%')
		ft_putchar_len('%', len);
	else
		(*i)--;
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		length;
	va_list	args;

	i = 0;
	length = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			ft_spec_checker(format[i], &args, &length, &i);
			i++;
		}
		else
		{
			ft_putchar_len((char)format[i], &length);
			i++;
		}
	}
	va_end(args);
	return (length);
}

// int main()
// {
// 	// int a = 5;
// 	// printf("%c %s %d %p %lu %% %i\n", 'g', "hello",  
// 	// 2147483647, &a, 4294967295, 2147483647);
// 	// ft_printf("%c %s %d %p %u %% %i\n", 'g', "hello",  
// 	// 2147483647, &a, 4294967295, 2147483647);
// 	// ft_printf("%p", ((void*)0));
// 	// ft_printf(" %x ", -99);
// 	// char *s2 = "Mussum Ipsum, cacilds vidis litroisi.";
// 	// ft_printf(" %s %s ", " - ", "");
// 	// printf(".\n");
// 	// printf(" %s %s ", " - ", "");
// 	// int c = ft_printf(" %s %s %s %s ", " - ", "", "4", "");
// 	// int c = ft_printf(" %s %s %s %s ", " - ", "", "4", s2);
// 	// printf("\n");
//  	// int g = printf(" %s %s %s %s ", " - ", "", "4", s2);
// 	// printf("\n");
// 	// printf("%d", c);
// 	// printf("\n");
// 	// printf("%d", g);
// 	return (0);
// }
