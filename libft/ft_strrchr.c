/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevstign <aevstign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:15:47 by aevstign          #+#    #+#             */
/*   Updated: 2023/10/27 19:46:32 by aevstign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*result;

	result = NULL;
	while (*str)
	{
		if (*str == (char)c)
			result = (char *)str;
		str++;
	}
	if (*str == (char)c)
		return ((char *)str);
	return (result);
}

// int main () {
// 	char str[] = "https://www.tutorialspoint.com";
//    char ch = '.';
//    char *ret;
//    ret = ft_strrchr(str, ch);
//    printf("%s", ret);
//    return(0);
// }