PUSH_SWAP = push_swap
CHECKER	= checker

P_SRCS  = push_swap.c stack.c operations_one.c operations_two.c stack_functions.c error_handling.c algorithm_one.c algorithm_two.c

C_SRCS	= checker.c stack.c operations_one.c operations_two.c stack_functions.c error_handling.c

LIBFT = ./libft/libft.a

P_OBJS = $(P_SRCS:.c=.o)

C_OBJS = $(C_SRCS:.c=.o)

all: $(PUSH_SWAP) $(CHECKER)

$(PUSH_SWAP):
	gcc -Wall -Werror -Wextra -o $(PUSH_SWAP) push_swap.h $(P_SRCS) $(LIBFT)
$(CHECKER):
	gcc -Wall -Werror -Wextra -o $(CHECKER) push_swap.h $(C_SRCS) $(LIBFT)
clean:
	rm -f $(P_OBJS) $(C_OBJS)

fclean: 
	rm -f  $(PUSH_SWAP) $(CHECKER)
	rm -f $(P_OBJS) $(C_OBJS)

re: fclean libre all

libre:
	make re -C ./libft