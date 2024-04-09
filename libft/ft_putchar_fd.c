/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevstign <aevstign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:18:10 by aevstign          #+#    #+#             */
/*   Updated: 2023/10/25 18:19:39 by aevstign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int main() {
//     int fd = open("test.txt", O_WRONLY);
//     if (fd == -1) {
//         return 1;
//     }

//     ft_putchar_fd('A', fd);

//     close(fd);
//     return 0;
// }
