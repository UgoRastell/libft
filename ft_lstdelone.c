/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urastell <urastell@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 16:06:38 by urastell          #+#    #+#             */
/*   Updated: 2026/11/16 15:57:13 by urastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/*
#include <stdio.h>

int	main(void)
{
	t_list	*n;
	t_list	*next;

	n = ft_lstnew(ft_strdup("x"));
	next = ft_lstnew(ft_strdup("y"));
	n->next = next;
	ft_lstdelone(n, free);
	printf("apres ft_lstdelone(x), le suivant vaut \"%s\"  (attendu \"y\")\n",
		(char *)next->content);
	ft_lstdelone(next, free);
	printf("Lance avec valgrind : aucune fuite attendue.\n");
	return (0);
}
*/
