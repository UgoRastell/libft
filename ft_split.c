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

static size_t	ft_count_words(char *str, char charset)
{
	size_t	i;
	size_t	nb;

	i = 0;
	nb = 0;
	while (str[i])
	{
		while (str[i] == charset)
		{
			i++;
			if (str[i])
				nb++;
			while (str[i] && str[i] != charset)
				i++;
		}
	}
	return (nb);
}

static char	*ft_extract_word(const char *str, char charset)
{
	char	*word;
	int		i;
	int		len;

	len = 0;
	while (str[len] && str[len] != charset)
		len++;
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static char	*ft_word_into_array(const char *str, char charset, size_t i,
		char **arr)
{
	if (!str)
		return (NULL);
	arr[i] = ft_extract_word(str, charset);
	if (!arr[i])
	{
		while (i > 0)
		{
			i--;
			free(arr[i]);
		}
		free(arr);
		return (NULL);
	}
	return (arr[i]);
}

char	**ft_split(char const *s, char c)
{
	size_t	nb_words;
	size_t	i;
	char	**word_arr;

	if (!s)
		return (NULL);
	nb_words = ft_count_words(s, c);
	word_arr = malloc(sizeof(char *) * (nb_words + 1));
	if (!word_arr)
		return (NULL);
	i = -1;
	while (++i < nb_words)
	{
		while (*s && *s == c)
			s++;
		word_arr[i] = ft_word_into_array(s, c, i, word_arr);
		if (word_arr[i] == NULL)
			return (NULL);
		while (*s && *s != c)
			s++;
	}
	word_arr[i] = NULL;
	return (word_arr);
}
