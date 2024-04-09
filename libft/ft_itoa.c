/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevstign <aevstign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:09:40 by aevstign          #+#    #+#             */
/*   Updated: 2023/10/25 15:46:03 by aevstign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_num_len(int n)
{
	int	len;

	len = (n <= 0);
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	int		is_negative;
	char	*str;
	long	num;

	num = (long)n;
	is_negative = (n < 0);
	len = get_num_len(n);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (num == 0)
		str[0] = '0';
	if (is_negative)
		num = -num;
	while (num)
	{
		str[--len] = (num % 10) + '0';
		num /= 10;
	}
	if (is_negative)
		str[0] = '-';
	return (str);
}

// int	main(void)
// {
// 	int i = 0;
// 	int tab[5] = {-2147483648, -42, 0, 42, 2147483647};

// 	while (i < 5)
// 		printf("%s\n", ft_itoa(tab[i++]));

// 	return 0;
// }
