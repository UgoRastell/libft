/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urastell <urastell@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 15:23:24 by urastell          #+#    #+#             */
/*   Updated: 2026/11/16 15:57:13 by urastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
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
	printf("ft_lstlast(a -> b -> c) -> \"%s\"  (attendu \"c\")\n",
		(char *)ft_lstlast(l)->content);
	printf("ft_lstlast(NULL) == NULL : %d  (attendu 1)\n",
		ft_lstlast(NULL) == NULL);
	ft_lstclear(&l, free);
	return (0);
}
*/
