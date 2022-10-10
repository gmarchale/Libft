NAME = libft.a
 
SRCS = ft_strlen.c  \
	   ft_isalpha.c \
	   ft_isdigit.c \
	   ft_isalnum.c \
	   ft_isascii.c \
	   ft_isprint.c \
	   ft_strncmp.c \
	   ft_strlcat.c \
	   ft_strlcpy.c \
	   ft_strnstr.c \
	   ft_atoi.c    \
	   ft_strdup.c  \
	   ft_strchr.c  \
	   ft_strrchr.c \
	   ft_memset.c  \
	   ft_bzero.c   \
	   ft_memcpy.c  \
	   ft_memmove.c \

OBJ = $(SRCS:.c=.o)

AR = ar -rc

CFLAGS = -Wall -Wextra -Werror

CC = cc

RM = rm -f

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all: $(NAME)

clean:
	$(RM) $(OBJ) 

fclean: clean 
	$(RM) $(NAME)

re :    fclean $(NAME) 

.PHONY: all clean fclean re
