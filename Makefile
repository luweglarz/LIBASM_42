NAME = libasm.a

SRCS = 		ft_strlen.s \

CC = gcc

CFLAGS = -Wall -Wextra -Werror

NASM = nasm -f elf64

OBJ = $(SRCS:.s=.o)

%.o : %.s
	$(NASM) $< -o $@

all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)
	rm -f ./a.out

re : fclean all
