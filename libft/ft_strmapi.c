/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsenii <arsenii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:46:49 by aevstign          #+#    #+#             */
/*   Updated: 2024/04/21 15:25:00 by arsenii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned
int, char))
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// char	ft_toupper_indexed(unsigned int i, char c)
// {
// 	if (i % 2 == 0)
// 		return (c >= 'a' && c <= 'z') ? c - 'a' + 'A' : c;
// 	return c;
// }

// int	main(void)
// {
// 	char *input = "hello world";
// 	char *result = ft_strmapi(input, ft_toupper_indexed);
// 	printf("Original: %s\n", input);
// 	printf("Transformed: %s\n", result);

// 	// Clean up dynamically allocated memory.
// 	free(result);
// 	return 0;

// }
