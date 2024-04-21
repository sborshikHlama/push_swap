/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsenii <arsenii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 16:09:25 by aevstign          #+#    #+#             */
/*   Updated: 2024/04/21 15:24:37 by arsenii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = *lst;
	while (last->next)
	{
		last = last->next;
	}
	last->next = new;
}

void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("%d -> ", *(int *)(lst->content));
		lst = lst->next;
	}
	printf("NULL\n");
}

// int	main(void)
// {
// 	t_list *head = NULL;
// 	int val1 = 5, val2 = 10, val3 = 15;

// 	ft_lstadd_back(&head, ft_lstnew(&val1));
// 	ft_lstadd_back(&head, ft_lstnew(&val2));
// 	ft_lstadd_back(&head, ft_lstnew(&val3));

// 	print_list(head);

// 	return (0);
// }