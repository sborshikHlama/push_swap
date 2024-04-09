/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevstign <aevstign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 17:15:02 by aevstign          #+#    #+#             */
/*   Updated: 2023/10/21 17:30:47 by aevstign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

// int main () {
//    int var = '2';
//    if( ft_isdigit(var) ) {
//       printf("|%c| is a digit\n", var );
//    } else {
//       printf("|%c| is not a digit\n", var );
//    }
//    return(0);
// }
