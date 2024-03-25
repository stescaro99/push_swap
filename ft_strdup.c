/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stescaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 09:33:14 by stescaro          #+#    #+#             */
/*   Updated: 2023/10/10 09:33:17 by stescaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strdup(const char *s)
{
	char	*d;
	size_t	len;
	size_t	i;

	len = ft_strlen(s);
	d = (char *) malloc(sizeof(char) * len + 1);
	if (d == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}

/*int main()
{
	const char	*s = "prova";
	
	printf("%p : %s\n", s, s);
	printf("%p : %s", ft_strdup(s), ft_strdup(s));
	return 0;
}*/
