#pragma once
#include <iostream>

using std::string;

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

#ifndef BUREAUCRAT_HPP
#define Bureaucrat_HPP

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Animal{
    protected:
        string _type;
    public:
        virtual ~Animal();
        Animal();
        Animal(string type);
        Animal(const Animal &copy);
        Animal &operator=(const Animal &copy);
        string getType() const;
        virtual void makeSound() const;
		
};

#endif