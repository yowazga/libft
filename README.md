
# Libft

Your very first library

## Table of Contents

- [Introduction](#introduction)
- [Common Instructions](#common-instructions)
- [Mandatory Part](#mandatory-part)
- [Bonus Part](#bonus-part)
- [Compilation and Usage](#compilation-and-usage)

## Introduction

Libft is a custom C library that includes a collection of essential functions you will frequently use in your C programming journey. This project aims to deepen your understanding of standard library functions by re-implementing them from scratch and creating additional utility functions.

## Common Instructions

- The project is written in C.
- Adheres to the Norm coding standard.
- Functions should not cause unexpected crashes (e.g., segmentation faults, bus errors).
- Properly free all heap-allocated memory to avoid memory leaks.
- Use a Makefile to manage the build process.
- Include rules in the Makefile: `$(NAME)`, `all`, `clean`, `fclean`, `re`, and `bonus`.
- If bonus functions are implemented, they should be in separate files (`*_bonus.c` / `*_bonus.h`).

## Mandatory Part

### Technical Considerations

- No global variables.
- Helper functions should be defined as `static`.
- Place all files at the root of the repository.
- Ensure all `.c` files compile with `-Wall -Wextra -Werror` flags.
- Use the `ar` command to create the library (`libtool` is forbidden).

### Part 1 - Libc Functions

Re-implement the following standard library functions with the `ft_` prefix:

- `ft_isalpha`
- `ft_isdigit`
- `ft_isalnum`
- `ft_isascii`
- `ft_isprint`
- `ft_strlen`
- `ft_memset`
- `ft_bzero`
- `ft_memcpy`
- `ft_memmove`
- `ft_strlcpy`
- `ft_strlcat`
- `ft_toupper`
- `ft_tolower`
- `ft_strchr`
- `ft_strrchr`
- `ft_strncmp`
- `ft_memchr`
- `ft_memcmp`
- `ft_strnstr`
- `ft_atoi`
- `ft_calloc` (uses `malloc`)
- `ft_strdup` (uses `malloc`)

### Part 2 - Additional Functions

Additional custom functions:

- `ft_substr`
- `ft_strjoin`
- `ft_strtrim`
- `ft_split`
- `ft_itoa`
- `ft_strmapi`
- `ft_striteri`
- `ft_putchar_fd`
- `ft_putstr_fd`
- `ft_putendl_fd`
- `ft_putnbr_fd`

## Bonus Part

If the mandatory part is completed perfectly, additional bonus functions can be implemented for list manipulation using the following structure:

```c
typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;
```
## Bonus functions:
- `ft_lstnew`
- `ft_lstadd_front`
- `ft_lstsize`
- `ft_lstlast`
- `ft_lstadd_back`
- `ft_lstdelone`
- `ft_lstclear`
- `ft_lstiter`
- `ft_lstmap`

## Compilation and Usage
To compile the library, use the provided Makefile:
```bash
  make
```
To clean up object files:
```bash
make clean
```
To remove all compiled files and the library:
```bash
make clean
```
To recompile everything:
```bash
make re
```
To include bonus functions:
```bash
make bonus
```
