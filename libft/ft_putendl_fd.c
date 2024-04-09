/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevstign <aevstign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:52:25 by aevstign          #+#    #+#             */
/*   Updated: 2023/10/27 17:31:41 by aevstign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

// int main() {
//     int fd = open("test.txt", O_WRONLY);
//     if (fd == -1) {
//         return 1;
//     }

//     ft_putendl_fd("ABCDF", fd);

//     close(fd);
//     return 0;
// }