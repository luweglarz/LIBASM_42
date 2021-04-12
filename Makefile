NAME = libasm.a

SRCS = 	ft_strlen.s ft_strcpy.s \

CC = gcc -Wall -Wextra -Werror

NASM = nasm -f elf64

OBJ = $(SRCS:.s=.o)

%.o : %.s
	$(NASM) $< -o $@

all : $(NAME)

$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	$(CC) main.c $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)
	rm -f ./a.out

re : fclean all
