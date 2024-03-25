/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stescaro <stescaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 08:50:29 by stescaro          #+#    #+#             */
/*   Updated: 2024/03/18 10:23:47 by stescaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int		*nbr;
	int		i;
	t_list	*lst;
	char	**args;

	if (argc < 2)
		return (0);
	args = set_args(argc, argv);
	argc = set_argc(argc, argv);
	if (check_args(args, argc) < 0)
	{
		write(2, "Error!\n", 7);
		ft_freesplit(args, argc);
		return (-1);
	}
	nbr = set_nbr(args, argc);
	ft_freesplit(args, argc);
	lst = NULL;
	i = -1;
	while (++i < argc)
		ft_lstadd_back(&lst, f_lstnew(nbr[i]));
	push_swap(&lst);
	f_lstclear(&lst);
	free(nbr);
	return (0);
}
