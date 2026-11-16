/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urastell <urastell@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 12:57:23 by urastell          #+#    #+#             */
/*   Updated: 2026/11/16 15:57:13 by urastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/*
#include <stdio.h>

static void	del_nothing(void *p)
{
	(void)p;
}

static void	print_list(const char *name, t_list *l)
{
	printf("%s : ", name);
	while (l)
	{
		printf("\"%s\" -> ", (char *)l->content);
		l = l->next;
	}
	printf("NULL\n");
}

int	main(void)
{
	t_list	*l;

	l = NULL;
	ft_lstadd_front(&l, ft_lstnew("b"));
	ft_lstadd_front(&l, ft_lstnew("a"));
	print_list("apres add_front b puis a", l);
	printf("attendu                  : \"a\" -> \"b\" -> NULL\n");
	ft_lstclear(&l, del_nothing);
	return (0);
}
*/
