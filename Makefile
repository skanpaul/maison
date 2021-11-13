CC 		= gcc
CFLAGS	= -Wall -Wextra -Werror

RM 		= rm -f
AR		= ar rc

SRC_LIB = $(wildcard ft_*.c)

OBJS 	= $(SRC_LIB:.c=.o)

LIB		= libft.a


all: $(LIB)

$(LIB):	$(OBJS)
	$(AR) $(LIB) $(OBJS)
	ranlib $(LIB)

%.o:%.c
	$(CC) -o $@ -c $^

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(LIB)


re: fclean all