/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevstign <aevstign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 19:56:43 by aevstign          #+#    #+#             */
/*   Updated: 2023/10/27 16:34:51 by aevstign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
// int main () {
//     char str[] = "abcdcdee";
//     int c = 6;
//     ft_bzero(str, c);
//     printf("String after first |%d| bytes changes to 0 is - |%s|\n", c, str);
//    return(0);
// }
