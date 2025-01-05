#include "Bureaucrat.hpp"

Bureaucrat::~Bureaucrat(){
	cout << "Bureaucrat destructor called." << endl;
}

Bureaucrat::Bureaucrat(const string name, int grade) : name(name){
    cout << "Bureaucrat constructor called." << endl;
    try {
        if (grade > 150)
            throw (GradeTooLowException());
        else if (grade < 1)
            throw (GradeTooHighException());
        else
            grade = grade;
    } catch (const std::exception &e){
        cout << e.what() << endl;
    }
}

Bureaucrat::Bureaucrat(const Bureaucrat &cpy) : name(cpy.name), grade(cpy.grade){
	cout << "Bureaucrat copy constructor called." << endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &oper){
	cout << "Bureaucrat assignation operator called." << endl;
	 if (this != &oper)
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
	} catch (const std::exception &e){
		this->grade++;
		cout << e.what() << endl;
	}
}

void Bureaucrat::decrement(){
	this->grade++;
	
	try{
		if (grade > 150)
			throw(GradeTooLowException());
	} catch (const std::exception &e){
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