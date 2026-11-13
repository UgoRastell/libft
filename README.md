*This activity has been created as part of the 42 curriculum by urastell.*

# libft

## Description

**libft** is the first project of the 42 Common Core. The goal is to rewrite a
set of functions from the C standard library, plus some extra utilities, and to
gather them into a static library, `libft.a`, that will be reused in the
following projects.

Writing these functions by hand is a way to understand how memory, strings,
pointers and dynamic allocation really work, instead of using them as black
boxes.

## Instructions

### Compilation

```sh
make        # builds libft.a
make clean  # removes the object files (.o)
make fclean # removes the object files and libft.a
make re     # fclean, then make
```

Everything is compiled with `cc -Wall -Wextra -Werror`, and the Makefile does
not relink when nothing has changed.

### Usage

Include the header and link the library:

```c
#include "libft.h"

int	main(void)
{
	char	*s;

	s = ft_strjoin("Hello, ", "42!");
	if (!s)
		return (1);
	ft_putendl_fd(s, 1);
	free(s);
	return (0);
}
```

```sh
cc -Wall -Wextra -Werror main.c -L. -lft -o test
./test
```

## Library description

All the functions are prototyped in `libft.h`.

### Part 1 — libc functions

They behave like their libc counterparts (see `man 3 <function>`), but with the
`ft_` prefix.

| Category   | Functions |
|------------|-----------|
| Characters | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower` |
| Memory     | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc` |
| Strings    | `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup` |
| Conversion | `ft_atoi` |

### Part 2 — Additional functions

| Function        | Description |
|-----------------|-------------|
| `ft_substr`     | Returns a new string: the substring of `s` that starts at `start`, with at most `len` characters. |
| `ft_strjoin`    | Returns a new string: `s1` followed by `s2`. |
| `ft_strtrim`    | Returns a copy of `s1` without the characters of `set` at its beginning and end. |
| `ft_split`      | Splits `s` on the delimiter `c`, and returns a NULL-terminated array of strings. |
| `ft_itoa`       | Converts an `int` to a newly allocated string. |
| `ft_strmapi`    | Applies `f(index, char)` to each character of `s`, and returns the results in a new string. |
| `ft_striteri`   | Applies `f(index, &char)` to each character of `s`, modifying it in place. |
| `ft_putchar_fd` | Writes the character `c` to the file descriptor `fd`. |
| `ft_putstr_fd`  | Writes the string `s` to `fd`. |
| `ft_putendl_fd` | Writes the string `s` followed by a newline to `fd`. |
| `ft_putnbr_fd`  | Writes the integer `n` to `fd`. |

### Part 3 — Linked lists

The lists use this structure:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;
```

| Function          | Description |
|-------------------|-------------|
| `ft_lstnew`       | Allocates a new node whose `content` is the given pointer, and whose `next` is NULL. |
| `ft_lstadd_front` | Adds a node at the beginning of the list. |
| `ft_lstadd_back`  | Adds a node at the end of the list. |
| `ft_lstsize`      | Returns the number of nodes in the list. |
| `ft_lstlast`      | Returns the last node of the list. |
| `ft_lstdelone`    | Frees the content of a node with `del`, then frees the node. |
| `ft_lstclear`     | Deletes and frees every node of the list, then sets the pointer to NULL. |
| `ft_lstiter`      | Applies `f` to the content of each node. |
| `ft_lstmap`       | Builds a new list by applying `f` to the content of each node. If an allocation fails, the new list is freed with `del`. |

### Technical choices

- Every allocation failure is checked: the functions return NULL, and free
  whatever they had already allocated (for example `ft_split` and `ft_lstmap`).
- `ft_memmove` copies from the end when the destination overlaps the source
  after it, so overlapping memory areas are handled.
- `ft_itoa` works on a `long`, so `INT_MIN` is converted correctly.

## Resources

- Linux manual pages: `man 3 strlcpy`, `man 3 memmove`, `man 3 atoi`, `man 3 malloc`, …
- [The C Programming Language](https://en.wikipedia.org/wiki/The_C_Programming_Language) — Kernighan & Ritchie
- [cppreference — C standard library](https://en.cppreference.com/w/c)
- The 42 Norm (norminette)

### Use of AI

<!-- TODO -->
