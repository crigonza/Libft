# Libft
Libft is a project at 42 that aims to recreate some of the standard C library functions and some additional ones that can be useful for later projects.

##  Getting Started
To use this library, you need to clone this repository and compile it with make. This will generate a libft.a file that you can link with your own source files.

##  Functions
The functions in this library are divided into three categories:

* Libc functions: These are functions that mimic the behavior of some of the standard C functions, such as `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_strlen`, `ft_strdup`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strnstr`, `ft_strncmp`, `ft_atoi`, `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower` and `ft_calloc`.
* Additional functions: These are functions that are not part of the standard C library, but are useful for some common tasks, such as `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd` and `ft_putnbr_fd`.
* Bonus functions: These are functions that deal with linked lists, such as `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter` and `ft_lstmap`.
You can find more details about each function in the header file `libft.h`.

##  Usage
To use this library in your own project, you need to include the header file `libft.h` in your source files and link the `libft.a` file when compiling. For example:
```
gcc -Wall -Wextra -Werror -I./libft -L./libft -lft main.c
```

