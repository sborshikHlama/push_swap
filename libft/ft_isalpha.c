/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevstign <aevstign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 17:05:27 by aevstign          #+#    #+#             */
/*   Updated: 2023/10/21 17:33:07 by aevstign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

// int main () {
//    int var1 = 'd';
//    int var2 = '2';
//    int var3 = '\t';
//    int var4 = ' ';
//    if( ft_isalpha(var1) ) {
//       printf("var1 = |%c| is an alphabet\n", var1 );
//    } else {
//       printf("var1 = |%c| is not an alphabet\n", var1 );
//    }
//    if( ft_isalpha(var2) ) {
//       printf("var2 = |%c| is an alphabet\n", var2 );
//    } else {
//       printf("var2 = |%c| is not an alphabet\n", var2 );
//    }
//    if( ft_isalpha(var3) ) {
//       printf("var3 = |%c| is an alphabet\n", var3 );
//    } else {
//       printf("var3 = |%c| is not an alphabet\n", var3 );
//    }
//    if( ft_isalpha(var4) ) {
//       printf("var4 = |%c| is an alphabet\n", var4 );
//    } else {
//       printf("var4 = |%c| is not an alphabet\n", var4 );
//    }
//    return(0);
// }
