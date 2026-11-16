/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urastell <urastell@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 11:46:34 by urastell          #+#    #+#             */
/*   Updated: 2026/11/09 15:51:50 by urastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** count_words : compte les mots de s.
** Un mot est une suite de caracteres differents de c.
** On parcourt s avec i, et on compte chaque DEBUT de mot :
**   - s[i] != c           -> on est sur un caractere d'un mot ;
**   - i == 0              -> c'est le tout debut de la chaine,
**   - ou s[i - 1] == c    -> le caractere d'avant etait un separateur.
** Exemple : "  ab  cd " avec ' ' -> debuts en 'a' et 'c' -> 2 mots.
*/
static size_t	count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

/*
** free_all : appelee quand un malloc (ft_substr) echoue au milieu.
** Les cases pas encore remplies valent NULL (grace a ft_calloc),
** donc on libere les mots un par un jusqu'au premier NULL,
** puis le tableau lui-meme.
** Elle renvoie NULL pour pouvoir ecrire : return (free_all(arr));
*/
static char	**free_all(char **arr)
{
	size_t	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

/*
** word_len : longueur du mot qui commence en s.
** On avance tant qu'on n'est ni a la fin ('\0') ni sur un separateur c.
** Exemple : word_len("cd ef", ' ') -> 2.
*/
static size_t	word_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

/*
** ft_split : decoupe s en mots separes par c.
** Renvoie un tableau de chaines termine par NULL, ou NULL si erreur.
**
** 1. Si s est NULL, on renvoie NULL.
** 2. On compte les mots (nb_words) pour savoir quelle taille allouer.
** 3. ft_calloc alloue nb_words + 1 cases, toutes a NULL :
**    la case en plus est le NULL final, deja en place.
** 4. Pour chaque mot (w = numero du mot, i = position dans s) :
**    - on saute les separateurs c ;
**    - ft_substr copie le mot qui commence en i (longueur word_len) ;
**    - si la copie echoue, free_all libere tout et on renvoie NULL ;
**    - on avance i juste apres le mot (i += longueur du mot copie).
**
** Exemple : ft_split("  ab  cd ", ' ') -> {"ab", "cd", NULL}
*/
char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	nb_words;
	size_t	w;
	size_t	i;

	if (!s)
		return (NULL);
	nb_words = count_words(s, c);
	arr = ft_calloc(nb_words + 1, sizeof(char *));
	if (!arr)
		return (NULL);
	i = 0;
	w = 0;
	while (w < nb_words)
	{
		while (s[i] == c)
			i++;
		arr[w] = ft_substr(s, i, word_len(s + i, c));
		if (!arr[w])
			return (free_all(arr));
		i += ft_strlen(arr[w]);
		w++;
	}
	return (arr);
}

/*
** Test rapide de ft_split. Il reste en commentaire : libft.a ne doit
** pas contenir de main. Pour l'essayer, apres un make, retire les deux
** lignes qui ouvrent et ferment le bloc suivant, puis lance :
**   cc -Wall -Wextra -Werror ft_split.c libft.a && ./a.out
** Remets-le en commentaire avant le prochain make.
*/

/*
#include <stdio.h>

static void	show(const char *call, char **tab, const char *want)
{
	size_t	i;

	printf("%s -> {", call);
	i = 0;
	while (tab && tab[i])
	{
		printf("\"%s\", ", tab[i]);
		free(tab[i]);
		i++;
	}
	printf("NULL}  (attendu %s)\n", want);
	free(tab);
}

int	main(void)
{
	show("ft_split(\"  hello world  42 \", ' ')",
		ft_split("  hello world  42 ", ' '),
		"{\"hello\", \"world\", \"42\", NULL}");
	show("ft_split(\"hello\", ' ')", ft_split("hello", ' '),
		"{\"hello\", NULL}");
	show("ft_split(\"\", ' ')", ft_split("", ' '), "{NULL}");
	show("ft_split(\",,,,\", ',')", ft_split(",,,,", ','), "{NULL}");
	show("ft_split(\"a,b,,c,\", ',')", ft_split("a,b,,c,", ','),
		"{\"a\", \"b\", \"c\", NULL}");
	show("ft_split(\"a b\", '\\0')", ft_split("a b", '\0'),
		"{\"a b\", NULL}");
	return (0);
}
*/
