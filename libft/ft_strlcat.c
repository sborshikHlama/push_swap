/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevstign <aevstign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 17:48:47 by aevstign          #+#    #+#             */
/*   Updated: 2023/10/28 17:35:28 by aevstign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strncat(char *dest, char *src, size_t nb)
{
	char	*p;

	p = dest;
	while (*p)
		p++;
	while (nb-- > 0 && *src)
		*p++ = *src++;
	*p = 0;
	return (dest);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	bytes;

	dstlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	if (size <= dstlen)
		return (srclen + size);
	bytes = size - dstlen - 1;
	ft_strncat(dest, (char *)src, bytes);
	return (dstlen + srclen);
}

// int main(void)
// {
// 	char	str1[50] = "Hello ";
// 	char	str2[] = "World";
// 	unsigned int nb = 4;
// 	printf("%zu", ft_strlcat(str1, str2, nb));
// }
