# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Meakfile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lkazaz <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/05 00:10:40 by lkazaz            #+#    #+#              #
#    Updated: 2023/11/14 15:41:28 by lkazaz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

srcs	= ft_atoi.c ft_bzero.c ft_calloc.c \
		ft_isalnum.c ft_isalpha.c ft_isascii.c \
		ft_isdigit.c ft_isprint.c ft_itoa.c \
		ft_memchr.c ft_memcmp.c ft_memcpy.c \
		ft_memmove.c ft_memset.c ft_putchar_fd.c \
		ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
		ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c \
		ft_strjoin.c ft_strlcat.c ft_strlcpy.c \
		ft_strlen.c ft_strmapi.c ft_strncmp.c \
		ft_strnstr.c ft_strrchr.c ft_strtrim.c \
		ft_substr.c ft_tolower.c ft_toupper.c \
		
srcsB	= ft_lstdelone_bonus.c ft_lstmap_bonus.c  ft_lstclear_bonus.c\
		ft_lstadd_back_bonus.c ft_lstlast_bonus.c ft_lstsize_bonus.c \
		ft_lstadd_front_bonus.c ft_lstnew_bonus.c ft_lstiter_bonus.c\
		
OBJS	= ${srcs:.c=.o}
OBJSB	= ${srcsB:.c=.o}
NAME	= libft.a
LIBC	= ar rc
CC		= cc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror

.c.o: $(srcs)
	$(CC) $(CFLAGS) -c $^ -o ${<:.c=.o}

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}

all: ${NAME}

$(OBJSB) : $(srcsB)
	$(CC) $(CFLAGS) -c $^
	${LIBC} ${NAME} ${OBJSB}

bonus: ${OBJSB}

clean:
	${RM} ${OBJS} ${OBJSB}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY : all bonus clean fclean re
