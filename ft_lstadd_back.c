/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stescaro <stescaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 09:14:47 by stescaro          #+#    #+#             */
/*   Updated: 2023/12/12 09:14:48 by stescaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!lst)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		tmp = ft_lstlast(*lst);
		tmp->next = new;
	}
}

void	lst_copy(t_list **copy, t_list *lst)
{
	while (lst)
	{
		ft_lstadd_back(copy, f_lstnew(lst->nbr));
		lst = lst->next;
	}
}

/*int		main(void)
{
	char	*last = "prova";
	char	*first = "12345";
	t_list	*begin_list = ft_lstnew(first);

	ft_lstadd_back(&begin_list, (void *)last);
	printf("%s\n", (char *)begin_list->content);
	printf("%s\n", (char *)begin_list->next->content);
	return(0);
}*/
