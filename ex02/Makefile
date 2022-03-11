# The name of the executable.
NAME     = accounts

# The source files.
SRC      = Account.cpp tests.cpp

# the header files.
HDR      = Account.hpp

# The object files.
OBJ      = $(SRC:.cpp=.o)

# The flags to be used during compilation.
CXXFLAGS = -Wall -Werror -Wextra -pedantic -std=c++98

# The compiler to be used.
CXX      = c++

# Makes whatever is needed.
all: $(NAME)

# Makes the executable. Depends on the object files.
$(NAME): $(OBJ)
	$(CXX) $(LDFLAGS) -o $(NAME) $(OBJ)

# Compiles each file individually. Depends on all headers.
%.o: %.cpp $(HDR)
	$(CXX) $(CXXFLAGS) -c -o $@ $<

# Removes all temporary files created by this makefile.
clean:
	- $(RM) $(OBJ)
	- find . -name \*~ -print -delete

# Removes all files created by this makefile.
fclean: clean
	- $(RM) $(NAME)

# Recompiles everything.
re: fclean all

# The rules to be always executed.
.PHONY: re all fclean clean
