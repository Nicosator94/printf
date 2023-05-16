CC = gcc
FLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c ft_unsigned_itoa.c ft_conv_hexa.c ft_hexa_address.c

LIB_SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_atoi.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strnstr.c ft_striteri.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJ = $(SRC:.c=.o)

LIB_OBJ = $(PREFC:.c=.o)

NAME = libftprintf.a

LIB_PATH = libft/

PREFC = $(addprefix $(LIB_PATH),$(LIB_SRC))

all : $(NAME)

bonus : all

$(NAME) : $(OBJ) $(LIB_OBJ)
	ar rcs $(NAME) $(OBJ) $(LIB_OBJ)

clean :
	rm -f $(OBJ) $(LIB_OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all