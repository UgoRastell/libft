/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urastell <urastell@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 16:23:44 by urastell          #+#    #+#             */
/*   Updated: 2026/11/16 15:57:13 by urastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		next = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next;
	}
	*lst = NULL;
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
	ft_lstclear(&l, free);
	printf("apres ft_lstclear, l == NULL : %d  (attendu 1)\n", l == NULL);
	ft_lstclear(&l, free);
	printf("ft_lstclear sur une liste vide : pas de crash\n");
	printf("Lance avec valgrind : aucune fuite attendue.\n");
	return (0);
}
*/
