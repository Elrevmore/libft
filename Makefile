NAME = libft.a

SRCS = ft_strlen.c \
	   ft_strlcpy.c \
	   ft_strlcat.c \
	   ft_isalpha.c \
	   ft_isdigit.c \
	   ft_isalnum.c \
	   ft_isascii.c \
	   ft_isprint.c \
	   ft_memset.c \
	   ft_bzero.c \
	   ft_toupper.c \
	   ft_tolower.c \
	   ft_strchr.c \
	   ft_strrchr.c \
	   ft_strncmp.c \


OBJS = $(SRCS:.c=.o)

LIBC = ar rc
CC = cc
RM = rm -rf
CFLAGS = -Wall -Werror -Wextra

$(NAME): $(OBJS)
	$(LIBC) $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
	
re: fclean all

.PHONY: all clean fclean re