# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marcsilv <marcsilv@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/23 01:14:20 by marcsilv          #+#    #+#              #
#    Updated: 2025/01/18 13:41:03 by marcsilv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        =   libft.a
CC          =   cc
CFLAGS      =   -Wall -Wextra -Werror
SRC_DIR     =   srcs
INC_DIR     =   includes
OBJ_DIR     =   objects
HEADER      =   libft.h

CTYPE       =   ./ctype/ft_isalnum.c             \
                ./ctype/ft_isascii.c             \
                ./ctype/ft_isdigit.c             \
                ./ctype/ft_islower.c             \
                ./ctype/ft_isupper.c             \
                ./ctype/ft_isprint.c             \
                ./ctype/ft_isspace.c             \
                ./ctype/ft_tolower.c             \
                ./ctype/ft_isalpha.c             \
                ./ctype/ft_toupper.c

PRINTF      =   ./custom_functions/prints/ft_put.c           \
                ./custom_functions/prints/ft_printf.c        \
                ./custom_functions/prints/ft_fprintf/ft_fprintf.c	\
				./custom_functions/prints/ft_fprintf/ft_fprintf_utils.c

CUSTOM      =   ./custom_functions/ft_split.c                \
                ./custom_functions/get_next_line.c          \
                ./custom_functions/ft_itoa.c                         \
				./custom_functions/safe_malloc.c

CUSTOM_     =   ./custom_functions/length/numlen.c           \
                ./custom_functions/length/tablen.c

MATRIX      =   ./custom_functions/matrix/copy_matrix.c      \
                ./custom_functions/matrix/free_matrix.c      \
                ./custom_functions/matrix/matrix_len.c       \
                ./custom_functions/matrix/add_str_matrix.c   \
                ./custom_functions/matrix/rm_str_matrix_index.c

BOOLS       =   ./custom_functions/bools/isneg.c             \
                ./custom_functions/bools/ispos.c            \
                ./custom_functions/bools/in_range.c         \
                ./custom_functions/bools/contains_char.c

LISTS       =   ./lists/ft_lstadd_back.c                    \
                ./lists/ft_lstadd_front.c                  \
                ./lists/ft_lstclear.c                      \
                ./lists/ft_lstdelone.c                     \
                ./lists/ft_lstiter.c                       \
                ./lists/ft_lstlast.c                       \
                ./lists/ft_lstmap.c                        \
                ./lists/ft_lstnew.c                        \
                ./lists/ft_lstsize.c                       \
                ./lists/list_to_matrix.c                   \
                ./lists/qsort_list.c

MATH        =   ./math/ft_pow.c                             \
                ./math/ft_sqrt.c


STRING      =   ./string/ft_bzero.c                         \
                ./string/ft_memchr.c                       \
                ./string/ft_memcmp.c                       \
                ./string/ft_memcpy.c                       \
                ./string/ft_memmove.c                      \
                ./string/ft_memset.c                       \
                ./string/ft_putchar_fd.c                   \
                ./string/ft_putendl_fd.c                   \
                ./string/ft_putstr_fd.c                    \
                ./string/ft_putnbr_fd.c                    \
                ./string/ft_strcat.c                       \
                ./string/ft_strchr.c                       \
                ./string/ft_strcmp.c                       \
                ./string/ft_strdup.c                       \
                ./string/ft_striteri.c                     \
                ./string/ft_strjoin.c                      \
                ./string/ft_strlcat.c                      \
                ./string/ft_strlcpy.c                      \
                ./string/ft_strlen.c                       \
                ./string/ft_strmapi.c                      \
                ./string/ft_strncat.c                      \
                ./string/ft_strncmp.c                      \
                ./string/ft_strnstr.c                      \
                ./string/ft_strrchr.c                      \
                ./string/ft_strscat.c                      \
                ./string/ft_strsjoin.c                     \
                ./string/ft_strsncat.c                     \
                ./string/ft_strtrim.c                      \
                ./string/ft_substr.c                       \
                ./string/ft_strndup.c                      \
                ./string/ft_strnchr.c                      \
                ./string/ft_strcpy.c                       \
                ./string/ft_strncpy.c                      \
                ./string/ft_string_split.c                 \
                ./string/ft_strcspn.c                      \
                ./string/ft_strstr.c                       \
                ./string/ft_strspn.c                       \
                ./string/ft_replace.c                      \
                ./string/ft_strjoin_free.c

STDLIB      =   ./stdlib/ft_abs.c                           \
                ./stdlib/ft_atof.c                         \
                ./stdlib/ft_atoi.c                         \
                ./stdlib/ft_calloc.c                       \
                ./stdlib/ft_realloc.c                      \
                ./stdlib/quicksort.c                       \
                ./stdlib/r_quicksort.c

SRC_FILES   = $(CTYPE) $(PRINTF) $(CUSTOM) $(LISTS) $(MATH) $(SAFE_FUNCTIONS) $(STRING) $(STDLIB) $(CUSTOM_) $(MATRIX) $(BOOLS)
OBJ_FILES   = $(SRC_FILES:.c=.o)
OBJ_PATHS   = $(addprefix $(OBJ_DIR)/, $(OBJ_FILES))

TOTAL_FILES = $(words $(OBJ_PATHS))
CURRENT_FILE = 0

all: $(NAME)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)
	@mkdir -p $(dir $@)
	$(eval CURRENT_FILE := $(shell echo $$(($(CURRENT_FILE)+1))))
	@printf "\033[33m[Building]\033[0m [%-3d%%] %-50s\r" $(shell echo $$((100 * $(CURRENT_FILE) / $(TOTAL_FILES)))) "$@"
	@$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@

$(NAME): $(OBJ_PATHS)
	@echo "\033[34m[Archiving] $(NAME)\033[0m"
	@ar rcs $(NAME) $(OBJ_PATHS)
	@echo "\033[32m[Success] $(NAME) has been created!\033[0m"

clean:
	@rm -rf $(OBJ_DIR)
	@echo "\033[31m[Cleaned] Object files removed.\033[0m"

fclean: clean
	@rm -f $(NAME)
	@echo "\033[31m[Cleaned] $(NAME) removed.\033[0m"

re: fclean all

.PHONY: all clean fclean re
