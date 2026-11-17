/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urastell <urastell@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 11:46:34 by urastell          #+#    #+#             */
/*   Updated: 2026/11/17 13:02:07 by urastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

static size_t	word_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

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
