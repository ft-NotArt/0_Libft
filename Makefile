NAME	:=	libft.a
CFLAGS	:=	-Wall -Wextra -Werror

SRC		:=	ft_isalnum.c\
			ft_isdigit.c\
			ft_memmove.c\
			ft_strlcat.c\
			ft_toupper.c\
			ft_isalpha.c\
			ft_isprint.c\
			ft_memset.c\
			ft_strlcpy.c\
			ft_strrchr.c\
			ft_bzero.c\
			ft_isascii.c\
			ft_memcpy.c\
			ft_strchr.c\
			ft_strlen.c\
			ft_tolower.c\
			ft_strncmp.c\
			ft_memchr.c\
			ft_memcmp.c\
			ft_strnstr.c\

OBJ			:=	$(SRC:.c=.o)
ARFLAGS		:=	rcs

%.o:		%.c
			$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJ)
			$(AR) $(ARFLAGS) $(NAME) $(OBJ)

all:		$(NAME)

clean:
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re