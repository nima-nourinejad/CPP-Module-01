NAME = sed
CXX = c++
RM = rm -f
CXXFLAGS = -Wall -Wextra -Werror
SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)

# Variables for testing
TEST = test
TSRC = test.cpp

.PHONY: all clean fclean re c98 test rmtest

all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $@

%.o: %.cpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

c98: CXXFLAGS += -std=c++98
c98: re

test: $(TSRC)
	@$(CXX) $(CXXFLAGS) $(TSRC) -o $(TEST)
	@./$(TEST)

rmtest:
	@$(RM) $(TEST) "test.txt" "test.txt.replace"
