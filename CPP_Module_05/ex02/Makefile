NAME	= AForm

CXX = c++ -g
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp  AForm.cpp Bureaucrat.cpp ShrubberyCreationForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp
OBJS = $(SRCS:.cpp=.o)

all : $(NAME)


$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)
	rm -f *_shrubbery

re: fclean all

.PHONY: all clean fclean re
