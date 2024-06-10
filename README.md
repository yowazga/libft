Libft is a custom C library that includes various general-purpose functions. This project involves re-creating standard C library functions and implementing additional utility functions. These functions are fundamental tools that will be useful in future C programming projects.

Table of Contents
Introduction
Common Instructions
Mandatory Part
Libc Functions
Additional Functions
Bonus Part
Submission
License
Introduction
Libft is a custom library written in C that re-implements several standard C library functions and includes additional utility functions. The goal is to understand how these functions work, implement them, and learn to use them effectively.

Common Instructions
All code must be written in C.
Adhere to the project Norm. All files must be norm compliant.
Avoid any memory leaks: all allocated memory must be freed appropriately.
Provide a Makefile with the following rules: $(NAME), all, clean, fclean, and re.
All source files must compile with the flags -Wall, -Wextra, and -Werror.
Include test programs for easy testing and peer evaluation.
Mandatory Part
Libc Functions
Re-implement the following standard C library functions with the ft_ prefix:

ft_isalpha
ft_isdigit
ft_isalnum
ft_isascii
ft_isprint
ft_strlen
ft_memset
ft_bzero
ft_memcpy
ft_memmove
ft_strlcpy
ft_strlcat
ft_toupper
ft_tolower
ft_strchr
ft_strrchr
ft_strncmp
ft_memchr
ft_memcmp
ft_strnstr
ft_atoi
ft_calloc
ft_strdup
Additional Functions
Implement the following utility functions:

ft_substr
ft_strjoin
ft_strtrim
ft_split
ft_itoa
ft_strmapi
ft_striteri
ft_putchar_fd
ft_putstr_fd
ft_putendl_fd
ft_putnbr_fd
Bonus Part
Implement functions for manipulating linked lists using the provided t_list struct:

ft_lstnew
ft_lstadd_front
ft_lstsize
ft_lstlast
ft_lstadd_back
ft_lstdelone
ft_lstclear
ft_lstiter
ft_lstmap
Submission
Place all your files at the root of your repository.
Ensure the Makefile correctly compiles your library and its dependencies.
Submit your work to your assigned Git repository. Only the files in the repository will be evaluated.
