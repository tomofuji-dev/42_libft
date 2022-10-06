SRCS			=	ft_isalnum.c ft_isprint.c ft_isdigit.c ft_isalpha.c ft_isascii.c \
					ft_strlcat.c ft_strlcpy.c ft_strlen.c \
					ft_memcpy.c ft_memmove.c \
					ft_bzero.c ft_memset.c
OBJS			= $(SRCS:.c=.o)
# BONUS			=	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
# 					ft_lstdelone.c ft_lstiter.c ft_lstlast.c \
# 					ft_lstmap.c ft_lstnew.c ft_lstsize.c
# BONUS_OBJS		= $(BONUS:.c=.o)

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)
#				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

# bonus:			$(OBJS) $(BONUS_OBJS)
# 				ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY:			all clean fclean re