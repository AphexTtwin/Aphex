CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
HEADER = libft.h

# Source files
SOURCES = ft_isprint.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
          ft_isalnum.c ft_strlen.c  ft_memset.c ft_bzero.c \
          ft_memmove.c ft_memchr.c ft_memcmp.c \
          ft_memcpy.c ft_strlcpy.c ft_strchr.c  ft_strrchr.c \
          ft_toupper.c ft_tolower.c ft_strncmp.c ft_strlcat.c \
          ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c \
          ft_strtrim.c ft_strjoin.c ft_substr.c ft_split.c \
          ft_itoa.c ft_strmapi.c  ft_striteri.c \
          ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c  ft_putnbr_fd.c

BSOURCES = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
           ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
           ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c 

# Convert .c to .o
OBJECTS = $(SOURCES:.c=.o)
BOBJECTS = $(BSOURCES:.c=.o)

# Build everything
all: $(NAME)

# Static library
$(NAME): $(OBJECTS)
	ar -rsc $(NAME) $(OBJECTS)

bonus: $(BOBJECTS)
	ar -rsc $(NAME) $(BOBJECTS)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

# Clean
clean:
	rm -f $(OBJECTS) $(BOBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
