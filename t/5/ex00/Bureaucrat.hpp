#pragma once
#include  <iostream>

using  std::string;

class Bureaucrat
{
private:
	string const name;
	int grade;
public:
	Bureaucrat(const std::string name, int grade);
	Bureaucrat(const Bureaucrat &cpy);
	~Bureaucrat();
	Bureaucrat &operator=(const Bureaucrat &oper);
	std::string getName() const;
	int getGrade() const;
	void increment();
	void decrement();
	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
};

