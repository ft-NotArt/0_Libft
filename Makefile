NAME		:=	libft.a
TEST		:=	test
CFLAGS		:=	-Wall -Wextra -Werror -g -I .

SRC			:=	ft_isalnum.c ft_isdigit.c ft_isalpha.c ft_isprint.c ft_isascii.c	\
\
				ft_toupper.c ft_tolower.c											\
\
				ft_strlen.c ft_strncmp.c ft_strnstr.c								\
				ft_strchr.c ft_strrchr.c											\
				ft_strlcpy.c ft_strlcat.c											\
				ft_strdup.c															\
\
				ft_memset.c ft_bzero.c ft_memmove.c									\
				ft_memcpy.c ft_memchr.c ft_memcmp.c									\
				ft_calloc.c															\
\
				ft_atoi.c															\
\
\
				ft_substr.c ft_strjoin.c ft_strtrim.c								\
				ft_split.c															\
				ft_itoa.c															\
				ft_strmapi.c ft_striteri.c											\

OBJ			:=	$(SRC:.c=.o)

SRC_TEST	:=	test_main.c															\
\
				test_ft_isalnum.c test_ft_isdigit.c test_ft_isalpha.c				\
				test_ft_isprint.c test_ft_isascii.c									\
\
				test_ft_toupper.c test_ft_tolower.c									\
\
				test_ft_strlen.c test_ft_strncmp.c test_ft_strnstr.c				\
				test_ft_strchr.c test_ft_strrchr.c									\
				test_ft_strlcpy.c test_ft_strlcat.c									\
				test_ft_strdup.c													\
\
				test_ft_memset.c test_ft_bzero.c test_ft_memmove.c					\
				test_ft_memcpy.c test_ft_memchr.c test_ft_memcmp.c					\
				test_ft_calloc.c													\
\
				test_ft_atoi.c														\
\
\
				test_ft_substr.c test_ft_strjoin.c test_ft_strtrim.c				\
				test_ft_split.c														\
				test_ft_itoa.c														\
				test_ft_strmapi.c test_ft_striteri.c								\

DIR_TEST	:= tests/

OBJ_TEST	:=	$(addprefix $(DIR_TEST), $(SRC_TEST:.c=.o))

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