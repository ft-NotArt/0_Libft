NAME		=	libft.a
TEST		=	test
TESTB		=	testb
CFLAGS		=	-Wall -Wextra -Werror -g -I .

FILES		=	ft_isalnum ft_isdigit ft_isalpha ft_isprint ft_isascii	\
\
				ft_toupper ft_tolower									\
\
				ft_strlen ft_strncmp ft_strnstr							\
				ft_strchr ft_strrchr									\
				ft_strlcpy ft_strlcat									\
				ft_strdup												\
\
				ft_memset ft_bzero ft_memmove							\
				ft_memcpy ft_memchr ft_memcmp							\
				ft_calloc												\
\
				ft_atoi													\
\
\
				ft_substr ft_strjoin ft_strtrim							\
				ft_split												\
				ft_itoa													\
				ft_strmapi ft_striteri									\
				ft_putchar_fd ft_putstr_fd								\
				ft_putendl_fd ft_putnbr_fd								\

SRC			=	$(addsuffix .c, $(FILES))
OBJ			=	$(addsuffix .o, $(FILES))

FILES_BONUS	=	ft_lstnew ft_lstsize ft_lstlast							\
				ft_lstadd_front ft_lstadd_back							\
				ft_lstdelone ft_lstclear								\
				ft_lstiter ft_lstmap									\

SRC_BONUS	=	$(addsuffix .c, $(FILES_BONUS))
OBJ_BONUS	=	$(addsuffix .o, $(FILES_BONUS))

FILES_TEST	=	test_main												\
\
				test_ft_isalnum test_ft_isdigit test_ft_isalpha			\
				test_ft_isprint test_ft_isascii							\
\
				test_ft_toupper test_ft_tolower							\
\
				test_ft_strlen test_ft_strncmp test_ft_strnstr			\
				test_ft_strchr test_ft_strrchr							\
				test_ft_strlcpy test_ft_strlcat							\
				test_ft_strdup											\
\
				test_ft_memset test_ft_bzero test_ft_memmove			\
				test_ft_memcpy test_ft_memchr test_ft_memcmp			\
				test_ft_calloc											\
\
				test_ft_atoi											\
\
\
				test_ft_substr test_ft_strjoin test_ft_strtrim			\
				test_ft_split											\
				test_ft_itoa											\
				test_ft_strmapi test_ft_striteri						\
				test_ft_putchar_fd test_ft_putstr_fd					\
				test_ft_putendl_fd test_ft_putnbr_fd					\

DIR_TEST	=	tests/
SRC_TEST	=	$(addprefix $(DIR_TEST), $(addsuffix .c, $(FILES_TEST)))
OBJ_TEST	=	$(addprefix $(DIR_TEST), $(addsuffix .o, $(FILES_TEST)))

FILES_TEST_B	=	test_main_bonus													\
\
				test_ft_isalnum test_ft_isdigit test_ft_isalpha				\
				test_ft_isprint test_ft_isascii									\
\
				test_ft_toupper test_ft_tolower									\
\
				test_ft_strlen test_ft_strncmp test_ft_strnstr				\
				test_ft_strchr test_ft_strrchr									\
				test_ft_strlcpy test_ft_strlcat									\
				test_ft_strdup													\
\
				test_ft_memset test_ft_bzero test_ft_memmove					\
				test_ft_memcpy test_ft_memchr test_ft_memcmp					\
				test_ft_calloc													\
\
				test_ft_atoi														\
\
\
				test_ft_substr test_ft_strjoin test_ft_strtrim				\
				test_ft_split														\
				test_ft_itoa														\
				test_ft_strmapi test_ft_striteri								\
				test_ft_putchar_fd test_ft_putstr_fd							\
				test_ft_putendl_fd test_ft_putnbr_fd							\
\
\
				test_ft_lstnew test_ft_lstsize test_ft_lstlast				\
				test_ft_lstadd_front test_ft_lstadd_back						\
				test_ft_lstdelone test_ft_lstclear								\
				test_ft_lstiter test_ft_lstmap									\

SRC_TEST_B	=	$(addprefix $(DIR_TEST), $(addsuffix .c, $(FILES_TEST_B)))
OBJ_TEST_B	=	$(addprefix $(DIR_TEST), $(addsuffix .o, $(FILES_TEST_B)))

ARFLAGS		=	rcs

%.o:		%.c
			@$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJ)
			@$(AR) $(ARFLAGS) $(NAME) $^
			@echo -e '\x1b[38;2;182;229;168m \tCompiled\x1b[38;2;51;133;26m $(NAME)\x1b[38;2;182;229;168m that include\x1b[38;2;73;190;37m $(FILES)'

$(TEST):	$(OBJ) $(OBJ_TEST)
			@$(CC) $(CFLAGS) $^ -o $@ -lbsd

$(TESTB):	$(OBJ) $(OBJ_BONUS) $(OBJ_TEST_B)
			@$(CC) $(CFLAGS) $^ -o $@ -lbsd

all:		$(NAME)

bonus:		$(OBJ) $(OBJ_BONUS)
			@$(AR) $(ARFLAGS) $(NAME) $^
			@echo -e '\x1b[38;2;182;229;168m \tCompiled\x1b[38;2;51;133;26m $(NAME)\x1b[38;2;182;229;168m that include\x1b[38;2;73;190;37m $(FILES)$(FILES_BONUS)'

clean:
			@rm -f $(OBJ) $(OBJ_TEST) $(OBJ_BONUS) $(OBJ_TEST_B)
			@echo -e '\x1b[38;2;182;229;168m \tCleaned\x1b[38;2;73;190;37m $(OBJ)'

fclean:		clean
			@rm -f $(NAME) $(TEST) $(TESTB) $(DIR_TEST)/txt/*
			@echo -e '\x1b[38;2;182;229;168m \tCleaned\x1b[38;2;51;133;26m $(NAME)'

re:			fclean all

.PHONY:		all clean fclean re bonus test testb
