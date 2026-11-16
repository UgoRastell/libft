/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urastell <urastell@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 12:38:19 by urastell          #+#    #+#             */
/*   Updated: 2026/11/10 12:56:02 by urastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*elem;

	elem = malloc(sizeof(t_list));
	if (!elem)
		return (NULL);
	elem->content = content;
	elem->next = NULL;
	return (elem);
}

/*
** Test rapide de ft_lstnew. Il reste en commentaire : libft.a ne doit
** pas contenir de main. Pour l'essayer, apres un make, retire les deux
** lignes qui ouvrent et ferment le bloc suivant, puis lance :
**   cc -Wall -Wextra -Werror ft_lstnew.c libft.a && ./a.out
** Remets-le en commentaire avant le prochain make.
*/

/*
#include <stdio.h>

int	main(void)
{
	t_list	*n;

	n = ft_lstnew("x");
	printf("ft_lstnew(\"x\") -> content = \"%s\", next == NULL : %d"
		"  (attendu \"x\", 1)\n", (char *)n->content, n->next == NULL);
	free(n);
	n = ft_lstnew(NULL);
	printf("ft_lstnew(NULL) -> content == NULL : %d  (attendu 1)\n",
		n->content == NULL);
	free(n);
	return (0);
}
*/
