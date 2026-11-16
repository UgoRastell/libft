/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urastell <urastell@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 17:12:52 by urastell          #+#    #+#             */
/*   Updated: 2026/11/10 17:13:20 by urastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			del(new_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

/*
** Test rapide de ft_lstmap. Il reste en commentaire : libft.a ne doit
** pas contenir de main. Pour l'essayer, apres un make, retire les deux
** lignes qui ouvrent et ferment le bloc suivant, puis lance :
**   cc -Wall -Wextra -Werror ft_lstmap.c libft.a && ./a.out
** Remets-le en commentaire avant le prochain make.
*/

/*
#include <stdio.h>

static void	*dup_upper(void *p)
{
	char	*s;

	s = ft_strdup(p);
	if (s)
		s[0] = ft_toupper(s[0]);
	return (s);
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
	t_list	*m;

	l = make_list();
	m = ft_lstmap(l, dup_upper, free);
	print_list("nouvelle liste ", m);
	printf("attendu         : \"A\" -> \"B\" -> \"C\" -> NULL\n");
	print_list("liste d'origine", l);
	printf("attendu         : \"a\" -> \"b\" -> \"c\" -> NULL\n");
	ft_lstclear(&m, free);
	ft_lstclear(&l, free);
	return (0);
}
*/
