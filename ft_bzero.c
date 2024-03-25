/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stescaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 10:35:37 by stescaro          #+#    #+#             */
/*   Updated: 2023/10/09 10:35:46 by stescaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_bzero(void *b, size_t n)
{
	unsigned char	*dest;
	size_t			i;

	dest = (unsigned char *)b;
	i = 0;
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
}

/*int main()
{
	char *str= "bohreyt";
	printf("%s\n", str);
	ft_bzero((void *)str, 3);
	printf("%s\n", str);
	return 0;
}*/
