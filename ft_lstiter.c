/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urastell <urastell@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 16:50:58 by urastell          #+#    #+#             */
/*   Updated: 2026/11/10 17:12:10 by urastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*
** Test rapide de ft_lstiter. Il reste en commentaire : libft.a ne doit
** pas contenir de main. Pour l'essayer, apres un make, retire les deux
** lignes qui ouvrent et ferment le bloc suivant, puis lance :
**   cc -Wall -Wextra -Werror ft_lstiter.c libft.a && ./a.out
** Remets-le en commentaire avant le prochain make.
*/

/*
#include <stdio.h>

static void	inc_first(void *p)
{
	((char *)p)[0]++;
}

static t_list	*make_list(void)
{
	t_list	*l;

	l = NULL;
	ft_lstadd_back(&l, ft_lstnew(ft_strdup("a")));
	ft_lstadd_back(&l, ft_lstnew(ft_strdup("b")));
	ft_lstadd_back(&l, ft_lstnew(ft_strdup("c")));
	return (l);
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

	l = make_list();
	ft_lstiter(l, inc_first);
	print_list("apres ft_lstiter(inc_first)", l);
	printf("attendu                     : \"b\" -> \"c\" -> \"d\" -> NULL\n");
	ft_lstclear(&l, free);
	return (0);
}
*/
