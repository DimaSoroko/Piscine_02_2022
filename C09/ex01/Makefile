
# --------------------------------------------------------------------VARS ---------------------------------------------------------------------------------------------

NAME		= libft.a                    												# name of the programm

COMPILE		= gcc                        												# compiler

FLAGS		= -Wall -Wextra -Werror      												# flags

RM			= rm -f                      												# remove 

LIBC 		= ar -rcs					 												# creates library archive

# -----------------------------------------------------------------SOURCE FILES ----------------------------------------------------------------------------------------

SOURCES    	= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

OBJECTS	    = $(SOURCES:.c=.o)       	 												# trasnforms all the ".c" files into ".o" (objects)

INCLUDES 	= includes/ft.h   														    # include ".h"

# -------------------------------------------------------------------- RULES -------------------------------------------------------------------------------------------

.c.o:
		    $(COMPILE) $(FLAGS) -c -I.$(INCLUDES) $< -o $(<:.c=.o)

all:	    $(NAME)   																	# will execute NAME rule
		
$(NAME):	$(OBJECTS)                         
			$(LIBC) $(NAME) $(OBJECTS)
clean:
		    $(RM) $(OBJECTS)        												   # remove all the ".o"         

fclean: clean                            											   # force remove NAME
	        $(RM) $(NAME)

re: fclean all                           											   # rule to recompile MAKEFILE (will remove everything and allows to recompile again)
	
# ----------------------------------------------------------------------PHONY --------------------------------------------------------------------------------------------

.PHONY: all clean fclean re             											   # in phony section we need to include all used rules
