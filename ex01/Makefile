# The name of the executable.
NAME     = phonebook

# The source files.
SRC      = phoneBook.cpp contact.cpp main.cpp

# The header files.
HDR      = phoneBook.hpp contact.hpp

# The object files.
OBJ      = $(SRC:.cpp=.o)

# The compiler to use.
CXX      = c++

# The flags to be used during compilation.
CXXFLAGS = -Wall -Wextra -Werror -pedantic -std=c++98

# Makes whaterever is needed.
all: $(NAME)

# Makes the executable. Depends on the object files.
$(NAME): $(OBJ)
	$(CXX) $(LDFLAGS) -o $(NAME) $(OBJ)

# Compiles each file individually. Depends on the appopriate source file and all headers.
%.o: %.cpp $(HDR)
	$(CXX) $(CXXFLAGS) -c -o $@ $<

# Removes all temporary files created by this makefile.
clean:
	- $(RM) $(OBJ)
	- find . -name \*~ -print -delete

# Removes all files created by this makefile.
flcean: clean
	- $(RM) $(NAME)

# Recompiles everything.
re: fclean all

# The list of always to execute rules.
.PHONY: fclean clean all re
