/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevstign <aevstign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:43:47 by aevstign          #+#    #+#             */
/*   Updated: 2023/10/25 17:05:33 by aevstign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
	{
		ft_putchar_fd(*s, fd);
		s++;
	}
}

// int main() {
//     int fd = open("test.txt", O_WRONLY);
//     if (fd == -1) {
//         return 1;
//     }

//     ft_putstr_fd("ABCDF", fd);

//     close(fd);
//     return 0;
// }