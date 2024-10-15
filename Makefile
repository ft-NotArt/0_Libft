NAME		:=	libft.a
TEST		:=	test
CFLAGS		:=	-Wall -Wextra -Werror -g

SRC			:=	ft_isalnum.c\
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

SRC_TEST	:= tests/test_main.c\
			tests/test_ft_isalpha.c\
			tests/test_ft_isdigit.c\
			tests/test_ft_isalnum.c\
			tests/test_ft_isascii.c\
			tests/test_ft_isprint.c\
			tests/test_ft_strlen.c\
			tests/test_ft_memset.c\
			tests/test_ft_bzero.c\
			tests/test_ft_memcpy.c\
			tests/test_ft_memmove.c\
			tests/test_ft_strlcpy.c\
			tests/test_ft_strlcat.c\

OBJ			:=	$(SRC:.c=.o)

OBJ_TEST	:=	$(SRC_TEST:.c=.o)

ARFLAGS		:=	rcs

%.o:		%.c
			@$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJ)
			@$(AR) $(ARFLAGS) $(NAME) $(OBJ)

$(TEST):	$(OBJ) $(OBJ_TEST)
			@$(CC) $(CFLAGS) $^ -o $@ -lbsd

all:		$(NAME)

clean:
			@rm -f $(OBJ) $(OBJ_TEST)

fclean:		clean
			@rm -f $(NAME) $(TEST)

re:			fclean all

.PHONY:		all clean fclean re