#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Bureaucrat{
	private:
		const string _name;
		int _grade;
	public:
		~Bureaucrat();
		Bureaucrat(const string name, int grade);
		Bureaucrat(const Bureaucrat &cpy);
		Bureaucrat &operator=(const Bureaucrat &oper);
		
		string getName() const;
		int getGrade() const;
		void increment();
		void decrement();

		// class GradeTooHighException : public std::exception {
		// 	const char* what() const throw();
		// }; // what version true??
		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
};

#endif