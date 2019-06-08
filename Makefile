#******************************************************************************#
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: pacovali <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2019/02/02 15:49:41 by pacovali      #+#    #+#                  #
#    Updated: 2019/02/07 07:58:55 by pacovali      ########   odam.nl          #
#                                                                              #
#******************************************************************************#

NAME = fillit
SRCS = main.c check_n_get.c check_tetriminos.c magic.c put_tetriminos_1.c \
put_tetriminos_2.c put_tetriminos_3.c fillit.c
MKOBJ = @clang -Wall -Wextra -Werror -c
HDRS = -I libft/includes
OBJS = main.o check_n_get.o check_tetriminos.o magic.o put_tetriminos_1.o \
put_tetriminos_2.o put_tetriminos_3.o fillit.o
MKLIB = @make -C libft/ fclean && make -C libft/ && make -C libft/ clean
MKEXE = @clang -o
LIBS = -L libft/ -lft

all: $(NAME)
$(NAME):
	$(MKLIB)
	$(MKOBJ) $(SRCS) $(HDRS)
	$(MKEXE) $(NAME) $(OBJS) $(HDRS) $(LIBS)

clean:
	@rm -f $(OBJS) *~

fclean: cleanlib clean
	@rm -f $(NAME)

cleanlib:
	@make -C libft/ fclean

re: fclean all