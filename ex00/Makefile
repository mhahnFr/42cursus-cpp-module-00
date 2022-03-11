# The name of the program.
NAME     = megaphone

# The source files.
SRC      = megaphone.cpp

# The object files.
OBJ      = $(SRC:.cpp=.o)

# The compiler to be used.
CXX      = c++

# The flags to be used during compilation.
CXXFLAGS = -Wall -Wextra -Werror -pedantic -std=c++98

# Makes whatever is needed.
all: $(NAME)

# Makes the executable. Depends on the object files.
$(NAME): $(OBJ)
	$(CXX) $(LDFLAGS) -o $(NAME) $(OBJ)

# Compiles each file individually. Depends on the appopriate source file.
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

# Removes all temporary files.
clean:
	- $(RM) $(OBJ)
	- find . -name \*~ -print -delete

# Removes all files created by this makefile.
fclean: clean
	- $(RM) $(NAME)

# Recompiles everything.
re: fclean all

# The list with rules without file dependencies.
.PHONY: re fclean clean all
