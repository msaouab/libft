# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msaouab <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/13 19:53:14 by msaouab           #+#    #+#              #
#    Updated: 2021/11/15 13:25:33 by msaouab          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC =	ft_atoi.c\
		ft_striteri.c\
		ft_bzero.c\
	   	ft_strjoin.c\
		ft_calloc.c\
		ft_memchr.c\
		ft_strlcat.c\
		ft_isalnum.c\
		ft_memcmp.c\
		ft_strlcpy.c\
		ft_isalpha.c\
		ft_memcpy.c\
		ft_strlen.c\
		ft_isascii.c\
		ft_memmove.c\
		ft_strmapi.c\
		ft_isdigit.c\
		ft_memset.c\
		ft_strncmp.c\
		ft_isprint.c\
		ft_putchar_fd.c\
		ft_strnstr.c\
		ft_itoa.c\
		ft_putendl_fd.c\
		ft_strrchr.c\
		ft_putnbr_fd.c\
		ft_strtrim.c\
		ft_putstr_fd.c\
		ft_substr.c\
		ft_split.c\
		ft_tolower.c\
		ft_strchr.c\
		ft_toupper.c\
		ft_strdup.c

SRC_BONUS =	ft_lstadd_back.c\
			ft_lstadd_front.c\
			ft_lstdelone.c\
			ft_lstlast.c\
			ft_lstnew.c\
			ft_lstsize.c\

OBJ = $(SRC:.c=.o)

OBJ_BONUS = $(SRC_BONUS:.c=.o)

CFLAGS = -Wall -Wextra -Werror
CC = @gcc

all : $(NAME)

$(NAME) : $(OBJ)
		@ar rc $(NAME) $(OBJ)
		@ranlib $(NAME)

clean : 
	@rm -f $(OBJ) $(OBJ_BONUS)

fclean : clean
		@rm -rf $(NAME)

re : fclean all

bonus : $(OBJ_BONUS) $(OBJ)
		@ar rc $(NAME) $(OBJ) $(OBJ_BONUS)
		@ranlib $(NAME)