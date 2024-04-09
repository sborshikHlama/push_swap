/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevstign <aevstign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 16:28:55 by aevstign          #+#    #+#             */
/*   Updated: 2023/10/28 15:41:12 by aevstign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t n)
{
	size_t	str2_len;
	size_t	i;

	if (*str2 == '\0')
		return ((char *)str1);
	str2_len = 0;
	while (str2[str2_len])
	{
		str2_len++;
	}
	if (n < str2_len)
		return (NULL);
	while (*str1 && n-- >= str2_len)
	{
		i = 0;
		while (str1[i] == str2[i] && i < str2_len)
			i++;
		if (i == str2_len)
			return ((char *)str1);
		str1++;
	}
	return (NULL);
}
// char	*ft_strnstr(const char *big, const char *little, size_t len)
// {
// 	size_t	little_len;
// 	size_t	i;

// 	if (*little == '\0')
// 		return ((char *)big);
// 	little_len = 0;
// 	while (little[little_len])
// 		little_len++;
// 	if (len < little_len)
// 		return (NULL);
// 	while (*big && len-- >= little_len)
// 	{
// 		i = 0;
// 		while (big[i] == little[i] && i < little_len)
// 			i++;
// 		if (i == little_len)
// 			return ((char *)big);
// 		big++;
// 	}
// 	return (NULL);
// }

// int	main(void)
// {
// 	const char *largestring = "Foo Bar Baz";
//     const char *smallstring = "Bar";
//     char *ptr;

//     ptr = ft_strnstr(largestring, smallstring, 4);
// 	printf("%s", ptr);
// }
