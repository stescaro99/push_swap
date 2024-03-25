/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stescaro <stescaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 08:48:14 by stescaro          #+#    #+#             */
/*   Updated: 2023/11/23 08:48:15 by stescaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list **a, int **final_arr)
{
	t_list	*tmp;

	if (!a)
		return ;
	ft_lstadd_back(a, f_lstnew((*a)->nbr));
	tmp = (*a)->next;
	f_lstdelone(*a);
	*a = tmp;
	**final_arr = 1;
	(*final_arr)++;
}

void	rb(t_list **b, int **final_arr)
{
	t_list	*tmp;

	if (!b)
		return ;
	ft_lstadd_back(b, f_lstnew((*b)->nbr));
	tmp = (*b)->next;
	f_lstdelone(*b);
	*b = tmp;
	**final_arr = 2;
	(*final_arr)++;
}
