# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbenjbar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/29 12:36:35 by mbenjbar          #+#    #+#              #
#    Updated: 2024/10/29 12:47:51 by mbenjbar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler
CC = cc
# Compilation flags
CFLAGS = -Wall -Wextra -Werror
# Source files for the main library
SRCS =	ft_atoi.c \
		ft_isascii.c \
		ft_memcpy.c \
		ft_strlcat.c \
		ft_strrchr.c \
		ft_bzero.c \
		ft_isdigit.c \
		ft_memmove.c \
		ft_strlcpy.c \
		ft_tolower.c \
		ft_calloc.c \
		ft_isprint.c \
		ft_memset.c \
		ft_strlen.c \
		ft_toupper.c \
		ft_isalnum.c \
		ft_memchr.c \
		ft_strchr.c \
		ft_strncmp.c \
		ft_isalpha.c \
		ft_memcmp.c \
		ft_strdup.c \
		ft_strnstr.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
# Bonus source files	   
BONUS_SRC = ft_lstnew_bonus.c \
			ft_lstadd_front_bonus.c \
			ft_lstsize_bonus.c \
			ft_lstlast_bonus.c \
			ft_lstadd_back_bonus.c \
			ft_lstdelone_bonus.c \
			ft_lstclear_bonus.c \
			ft_lstiter_bonus.c \
			ft_lstmap_bonus.c \

# Object files : you're just defining a list of what those object files will be called if they are created
# make knows the names of all object files it will eventually need, but it hasn’t compiled them yet.
# The $() syntax in a Makefile is used for variable substitution.
OBJ = $(SRCS:.c=.o)
BONUS_OBJ = $(BONUS_SRC:.c=.o)
# Archive command
AR = ar rcs
# The r option tells ar to replace existing files in the archive.
# The c option indicates to ar to create the archive if it does not already exist
# The s option tells ar to create an index for the archive. This index allows the linker to find symbols in the object files more quickly
# Library name
NAME = libft.a
# Default target
all: $(NAME)
# Rule to create the library
$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)
# Bonus target to include bonus files in the library
bonus: $(OBJ) $(BONUS_OBJ)
	$(AR) $(NAME) $(OBJ) $(BONUS_OBJ)
# Pattern rule to compile .c files to .o files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
# -c $< tells the compiler to compile file.c.
# -o $@ tells the compiler to output the compiled code into file.o.
# Clean up object files
clean:
	rm -f $(OBJ) $(BONUS_OBJ)
# Full clean up (library + object files)
fclean: clean
	rm -f $(NAME)
# Rebuild everything
re: fclean all