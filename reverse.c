/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stescaro <stescaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 08:48:11 by stescaro          #+#    #+#             */
/*   Updated: 2023/11/23 08:48:12 by stescaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*lst_bef_last(t_list *lst)
{
	while (lst && lst->next && lst->next->next != NULL)
		lst = lst->next;
	return (lst);
}

void	rra(t_list **a, int **final_arr)
{
	t_list	*tmp;
	t_list	*last;
	t_list	*before_last;

	last = ft_lstlast(*a);
	before_last = lst_bef_last(*a);
	tmp = *a;
	*a = last;
	(*a)->next = tmp;
	before_last->next = NULL;
	**final_arr = 3;
	(*final_arr)++;
}

void	rrb(t_list **b, int **final_arr)
{
	t_list	*tmp;
	t_list	*last;
	t_list	*before_last;

	last = ft_lstlast(*b);
	before_last = lst_bef_last(*b);
	tmp = *b;
	*b = last;
	(*b)->next = tmp;
	before_last->next = NULL;
	**final_arr = 4;
	(*final_arr)++;
}
