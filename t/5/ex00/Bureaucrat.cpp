#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name) {
	std::cout << "Bureaucrat constructor called." << std::endl;
	try {
		if (grade > 150)
			throw (GradeTooLowException());
		else if (grade < 1)
			throw (GradeTooHighException());
		else
			this->grade = grade;
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

std::string Bureaucrat::getName() const {
	return (this->name);
}

int Bureaucrat::getGrade() const {
	return (this->grade);
}

void Bureaucrat::increment() {
	this->grade--;
	
	try {
		if (grade < 1)
			throw(GradeTooHighException());
	} catch (const std::exception &e) {
		this->grade++;
		std::cout << e.what() << std::endl;
	}
}

void Bureaucrat::decrement() {
	this->grade++;
	
	try {
		if (grade > 150)
			throw(GradeTooLowException());
	} catch (const std::exception &e) {
		this->grade--;
		std::cout << e.what() << std::endl;
	}
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade too high.");
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade too low.");
}

Bureaucrat::Bureaucrat(const Bureaucrat &cpy) : name(cpy.name) {
	std::cout << "Bureaucrat copy constructor is called." << std::endl;
	this->grade = cpy.grade;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat destructor called." << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &oper) {
	std::cout << "Bureaucrat assignation operator is called." << std::endl;
	this->grade = oper.grade;
	return (*this);
}