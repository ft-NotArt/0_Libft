NAME		=	libft.a
CFLAGS		=	-Wall -Wextra -Werror -g

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

FILES_BONUS	=	ft_lstnew_bonus ft_lstsize_bonus ft_lstlast_bonus		\
				ft_lstadd_front_bonus ft_lstadd_back_bonus				\
				ft_lstdelone_bonus ft_lstclear_bonus					\
				ft_lstiter_bonus ft_lstmap_bonus						\

SRC_BONUS	=	$(addsuffix .c, $(FILES_BONUS))
OBJ_BONUS	=	$(addsuffix .o, $(FILES_BONUS))

ARFLAGS		=	rcs

%.o:		%.c
			@$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJ)
			@$(AR) $(ARFLAGS) $(NAME) $^
			@echo -e '\x1b[38;2;182;229;168m \tCompiled\x1b[38;2;51;133;26m $(NAME)\x1b[38;2;182;229;168m that include\x1b[38;2;73;190;37m $(FILES)'

all:		$(NAME)

bonus:		$(OBJ) $(OBJ_BONUS)
			@$(AR) $(ARFLAGS) $(NAME) $^
			@echo -e '\x1b[38;2;182;229;168m \tCompiled\x1b[38;2;51;133;26m $(NAME)\x1b[38;2;182;229;168m that include\x1b[38;2;73;190;37m $(FILES)$(FILES_BONUS)'

clean:
			@rm -f $(OBJ) $(OBJ_BONUS)
			@echo -e '\x1b[38;2;182;229;168m \tCleaned\x1b[38;2;73;190;37m $(OBJ) $(OBJ_BONUS)'

fclean:		clean
			@rm -f $(NAME)
			@echo -e '\x1b[38;2;182;229;168m \tCleaned\x1b[38;2;51;133;26m $(NAME)'

re:			fclean all

.PHONY:		all clean fclean re bonus
