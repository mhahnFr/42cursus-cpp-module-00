# The name of the program.
NAME     = megaphone

# The source files.
SRC      = megaphone.cpp

# The object files.
OBJ      = $(SRC:.cpp=.o)

# The compiler to be used.
CCPP     = c++

# The flags to be used during compilation.
CPPFLAGS = -Wall -Wextra -Werror -pedantic -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CCPP) $(LDFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CCPP) $(CPPFLAGS) -c -o $@ $<

clean:
	- $(RM) $(OBJ)
	- find . -name \*~ -print -delete

fclean: clean
	- $(RM) $(NAME)

re: fclean all

.PHONY: re fclean clean all
