#include "Bureaucrat.hpp"

Bureaucrat::~Bureaucrat(){
	cout << "Bureaucrat destructor called." << endl;
}

Bureaucrat::Bureaucrat(const string name, int grade){
	cout << "Bureaucrat constructor called." << endl;
	_name = name;
	try{
		if (grade > 150)
			throw (GradeTooLowException());
		else if (grade < 1)
			throw (GradeTooHighException());
		else
			this->grade = grade;
	}
	catch (const exception &e){
		cout << e.what() << endl;
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat &cpy) : name(cpy.name){
	cout << "Bureaucrat copy constructor called." << endl;
	this->grade = cpy.grade;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &oper){
	cout << "Bureaucrat assignation operator called." << endl;
	this->grade = oper.grade;
	return (*this);
}

string Bureaucrat::getName() const{
	return (this->name);
}

int Bureaucrat::getGrade() const{
	return (this->grade);
}

void Bureaucrat::increment(){
	this->grade--;
	
	try{
		if (grade < 1)
			throw(GradeTooHighException());
	} catch (const exception &e){
		this->grade++;
		cout << e.what() << endl;
	}
}

void Bureaucrat::decrement(){
	this->grade++;
	
	try{
		if (grade > 150)
			throw(GradeTooLowException());
	} catch (const exception &e){
		this->grade--;
		cout << e.what() << endl;
	}
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
	return ("Grade too high.");
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
	return ("Grade too low.");
}