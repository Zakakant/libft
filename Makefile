# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zkantara <zkantara@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/13 02:33:55 by zkantara          #+#    #+#              #
#    Updated: 2022/12/28 14:09:18 by zkantara         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =  ft_memset.c        \
		ft_bzero.c        \
		ft_memcpy.c        \
		ft_memchr.c        \
		ft_memcmp.c        \
		ft_memmove.c    \
		ft_strlen.c        \
		ft_isalpha.c     \
		ft_isdigit.c    \
		ft_isalnum.c    \
		ft_isascii.c    \
		ft_isprint.c    \
		ft_toupper.c    \
		ft_tolower.c    \
		ft_strchr.c        \
		ft_atoi.c        \
		ft_calloc.c        \
		ft_strdup.c        \
		ft_substr.c        \
		ft_strjoin.c     \
		ft_strtrim.c    \
		ft_split.c        \
		ft_itoa.c        \
		ft_strnstr.c    \
		ft_strrchr.c    \
		ft_strmapi.c    \
		ft_putchar_fd.c    \
		ft_putstr_fd.c    \
		ft_putendl_fd.c    \
		ft_putnbr_fd.c   \
		ft_strncmp.c    \
		ft_strlcat.c    \
		ft_strlcpy.c    \
		ft_striteri.c    \

NAME = libft.a

OBJS = $(SRCS:.c=.o)


CC_FLAGS = -Wall -Wextra -Werror

all: $(NAME)

%.o : %.c libft.h
	cc $(CC_FLAGS) -c $<

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	rm -rf *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: fclean clean all re
