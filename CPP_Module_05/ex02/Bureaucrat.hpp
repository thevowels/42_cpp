#pragma once

#include <string>

class Form;
// Default constructor 1
// Copy Constructor 
// Copy Assignment Operator 1
// Destructor 1
class Bureaucrat {
	private:
		std::string _name;
		int	_grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat& other);
		~Bureaucrat();
		Bureaucrat &operator=(const Bureaucrat &other);

		const std::string& getName(void) const;
		int	getGrade(void) const;
		void promote(void);
		void demote(void);
		void signForm(Form &form);
		class GradeTooHighException : public std::exception{
			public:
				virtual const char * what() const throw();
		};
		class GradeTooLowException : public std::exception{
			public:
				virtual const char* what() const throw();
		};

};

std::ostream& operator<<(std::ostream& o, const Bureaucrat* bb);