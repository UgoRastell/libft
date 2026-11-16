/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urastell <urastell@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 21:09:37 by urastell          #+#    #+#             */
/*   Updated: 2026/11/16 15:59:33 by urastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	count;

	count = 0;
	while (lst)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}

/*
#include <stdio.h>

static t_list	*make_list(void)
{
	t_list	*l;

	l = NULL;
	ft_lstadd_back(&l, ft_lstnew(ft_strdup("a")));
	ft_lstadd_back(&l, ft_lstnew(ft_strdup("b")));
	ft_lstadd_back(&l, ft_lstnew(ft_strdup("c")));
	return (l);
}

int	main(void)
{
	t_list	*l;

	l = make_list();
	printf("ft_lstsize(a -> b -> c) = %u  (attendu 3)\n", ft_lstsize(l));
	printf("ft_lstsize(NULL)        = %u  (attendu 0)\n", ft_lstsize(NULL));
	ft_lstclear(&l, free);
	return (0);
}
*/
