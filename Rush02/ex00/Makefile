
# ------------------------------------- VARS ----------------------------------

NAME	= rush-02                    # name of the programm

COMPILE	= gcc                        # compiler

FLAGS	= -Wall -Wextra -Werror      # flags

RM		= rm -f                      # remove 

# ------------------------------- SOURCE FILES --------------------------------

SOURCES	= main.c ft_dict_lines.c ft_dict_word.c ft_ftnums.c ft_number.c ft_str.c ft_translate.c

OBJECTS	= $(SOURCES:.c=.o)           # trasnforms all the .c files into .o (objects)

# ------------------------------------- RULES ---------------------------------

all:	$(NAME)                      # will execute NAME rule

$(NAME):   ${OBJECTS}                         
	$(COMPILE) $(FLAGS) -o $(NAME) $(SOURCES) 

clean:
	$(RM) $(OBJECTS)                

fclean: clean                        # force remove NAME
	$(RM) $(NAME)

re: fclean all                       # rule to recompile MAKEFILE (will remove everything and allows to recompile again)
	
# ------------------------------------- PHONY ---------------------------------

.PHONY: all clean fclean re             # in phony section we need to include the names of our rules
