/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevstign <aevstign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 18:23:00 by aevstign          #+#    #+#             */
/*   Updated: 2023/10/27 17:16:06 by aevstign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	str = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		str[j++] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		str[j++] = s2[i];
		i++;
	}
	str[j] = 0;
	return (str);
}

// int	main(void)
// {
// 	char *strings1[] = {"Hello", "world", "!"};
// 	char *strings2[] = {"This", "is", "a", "test"};
// 	char *sep1 = ", ";
// 	char *sep2 = "-";
// 	char *sep3 = "";

// 	char *result1 = ft_strjoin(3, strings1, sep1);
// 	printf("Expected: Hello, world, ! | Got: %s\n", result1);
// 	free(result1);

// 	char *result2 = ft_strjoin(4, strings2, sep2);
// 	printf("Expected: This-is-a-test | Got: %s\n", result2);
// 	free(result2);

// 	char *result3 = ft_strjoin(2, strings1, sep3);
// 	printf("Expected: Helloworld | Got: %s\n", result3);
// 	free(result3);

// 	return (0);
// }
