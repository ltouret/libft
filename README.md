# libft

My personal C library, started as the first project of the 42 curriculum and extended over time with
`get_next_line`, `ft_printf`, and some extra helpers I needed in later projects.

## Build

```sh
make        # builds libft.a
make clean  # removes object files
make fclean # removes object files and libft.a
make re     # fclean + all
```

Compiled with `gcc -Wall -Wextra -Werror`.

## Usage

```c
#include "libft.h"
```

```sh
gcc main.c -L. -lft -o program
```

## Contents

### Character checks / conversion
`ft_isalpha` `ft_isdigit` `ft_isalnum` `ft_isascii` `ft_isprint` `ft_toupper` `ft_tolower`

### Memory
`ft_memset` `ft_bzero` `ft_memcpy` `ft_memccpy` `ft_memmove` `ft_memchr` `ft_memcmp` `ft_calloc`

### Strings
`ft_strlen` `ft_strlcpy` `ft_strlcat` `ft_strchr` `ft_strrchr` `ft_strnstr` `ft_strncmp` `ft_strcmp`
`ft_strdup` `ft_substr` `ft_strjoin` `ft_strtrim` `ft_split` `ft_strmapi`

### Numbers
| Function | Description |
|---|---|
| `ft_atoi` / `ft_atol` | string to `int` / `long` |
| `ft_itoa` | `int` to newly allocated string |
| `ft_itoa_base` | `int` to string in any base (e.g. `"0123456789abcdef"`) |

### Output (to a file descriptor)
`ft_putchar_fd` `ft_putstr_fd` `ft_putendl_fd` `ft_putnbr_fd`

### Linked lists (`t_list`)
`ft_lstnew` `ft_lstadd_front` `ft_lstadd_back` `ft_lstsize` `ft_lstlast`
`ft_lstdelone` `ft_lstclear` `ft_lstiter` `ft_lstmap`

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

### Extras
| Function | Description |
|---|---|
| `ft_find(str, c)` | index of the first char `c` in `str`, or `-1` |
| `ft_malloc(size)` | `malloc` + zero-fill, returns `NULL` on failure, as calloc was forbidden in 42 |

### get_next_line (`gnl/`)
```c
int get_next_line(int fd, char **line);
```
Reads `fd` one line at a time into `*line` (without the `\n`).
Returns `1` when a line was read, `0` at EOF, `-1` on error. Buffer size is set by `BU` in
`gnl/get_next_line.h` (default `10`).

### ft_printf (`printf/`)
```c
int ft_printf(const char *format, ...);
```
A recreation of `printf` writing to stdout and returning the number of characters printed.

- Conversions: `%c` `%s` `%p` `%d` `%i` `%u` `%x` `%X` `%%`
- Flags: `-` `0` `.` (precision) and `*` (width/precision from arguments)

### cpp-like strings (`ft_string_*`) — work in progress
A growable string type (`str`, `len`, `capacity`) with `ft_string_new`, `ft_string_with_capacity`,
`ft_string_dup`, `ft_string_push`, `ft_string_push_char`, `ft_string_pop`, `ft_string_sub`,
`ft_string_remove`, `ft_string_clear` and `ft_string_destroy`.

> Not yet wired in: these files are not listed in the `Makefile` and `t_string` is not declared
> in `libft.h`, and they are not yet updated to Norm v3.
