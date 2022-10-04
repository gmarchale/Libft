NAME = libft.a
 
SRCS = ft_strlen.c \
	   ft_isalpha.c \
	   ft_isdigit.c \
	   ft_isalnum.c \
	   ft_isascii.c \
	   ft_isprint.c \
	   ft_strlcpy.c \

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
