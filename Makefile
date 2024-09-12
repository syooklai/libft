# Compiler flags
CFLAGS = -Wall -Wextra -Werror

# Target executable
NAME = libft.a

# Source files
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c\
ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c\
ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c\
ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c\
ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c\
ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c\
ft_putnbr_fd.c\
# Bonus files
BONUS = ft_lstnew_bonus.c\
ft_lstadd_front_bonus.c\
ft_lstsize_bonus.c\
ft_lstlast_bonus.c\
ft_lstadd_back_bonus.c\
ft_lstdelone_bonus.c\
ft_lstclear_bonus.c\
ft_lstiter_bonus.c\
ft_lstmap_bonus.c

# Default rule
all: $(NAME)

# Rule to link the target executable
$(NAME):$(SRCS)
	cc $(CFLAGS) -c $(SRCS) -I./
	ar rcs $(NAME) *.o

bonus:
	cc $(CFLAGS) -c $(SRCS) $(BONUS) -I./
	ar rcs $(NAME) *.o

# Clean rule to remove generated files
clean:
	rm -f *.o
	rm -f *.out
	echo "LIBFT clean up all object!"

fclean: clean
	rm -f $(NAME)
	echo "LIBFT Fully clean already"

# Rebuild Target
re: fclean all

.PHONY: clean fclean all re bonus 