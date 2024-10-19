NAME		:=	libft.a
TEST		:=	test
TESTB		:=	testb
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
				ft_putchar_fd.c ft_putstr_fd.c										\
				ft_putendl_fd.c ft_putnbr_fd.c										\

OBJ			:=	$(SRC:.c=.o)

SRC_BONUS	:=	ft_lstnew.c ft_lstsize.c ft_lstlast.c								\
				ft_lstadd_front.c ft_lstadd_back.c									\
				ft_lstdelone.c ft_lstclear.c										\
				ft_lstiter.c ft_lstmap.c											\

OBJ_BONUS	:=	$(SRC_BONUS:.c=.o)

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
				test_ft_putchar_fd.c test_ft_putstr_fd.c							\
				test_ft_putendl_fd.c test_ft_putnbr_fd.c							\

DIR_TEST	:= tests/

OBJ_TEST	:=	$(addprefix $(DIR_TEST), $(SRC_TEST:.c=.o))

SRC_TEST_B	:=	test_main_bonus.c													\
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
				test_ft_putchar_fd.c test_ft_putstr_fd.c							\
				test_ft_putendl_fd.c test_ft_putnbr_fd.c							\
\
\
				test_ft_lstnew.c test_ft_lstsize.c test_ft_lstlast.c				\
				test_ft_lstadd_front.c test_ft_lstadd_back.c						\
				test_ft_lstdelone.c test_ft_lstclear.c								\
				test_ft_lstiter.c test_ft_lstmap.c									\

OBJ_TEST_B	:=	$(addprefix $(DIR_TEST), $(SRC_TEST_B:.c=.o))

ARFLAGS		:=	rcs

%.o:		%.c
			@$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJ)
			@$(AR) $(ARFLAGS) $(NAME) $<

$(TEST):	$(OBJ) $(OBJ_TEST)
			@$(CC) $(CFLAGS) $^ -o $@ -lbsd

$(TESTB):	$(OBJ) $(OBJ_BONUS) $(OBJ_TEST_B)
			@$(CC) $(CFLAGS) $^ -o $@ -lbsd

all:		$(NAME)

bonus:		$(OBJ) $(OBJ_BONUS)
			@$(AR) $(ARFLAGS) $(NAME) $^

clean:
			@rm -f $(OBJ) $(OBJ_TEST) $(OBJ_BONUS) $(OBJ_TEST_B)

fclean:		clean
			@rm -f $(NAME) $(TEST) $(TESTB) $(DIR_TEST)/txt/*

re:			fclean all

.PHONY:		all clean fclean re bonus test testb