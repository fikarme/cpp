#include "Bureaucrat.hpp"

void testo(){
	Bureaucrat b("Bureaucrat", 1);
	cout << b.getName() << endl;
	cout << b.getGrade() << endl;
	b.increment();
	cout << b.getGrade() << endl;
	b.decrement();
	cout << b.getGrade() << endl;
}

void test()
{
	cout << "_______________________________________________________________" << endl;
	cout << "|Test:Positive(No Output)                                      |"<< endl;
	cout << "_______________________________________________________________" << endl;

	{
		try
		{
			Bureaucrat ast("Asterix", 42);
		}
		catch(Bureaucrat::GradeTooHighException &a)
		{
			cout << a.what();
		}
		catch(Bureaucrat::GradeTooLowException &a)
		{
			cout << a.what();
		}
	}
	cout << "_______________________________________________________________" << endl;
	cout << "|Test:Negative(TooLow)                                         |"<< endl;
	cout << "_______________________________________________________________" << endl;

	{
		try
		{
			Bureaucrat ast("Asterix", 151);
		}
		catch(Bureaucrat::GradeTooHighException &a)
		{
			cout << a.what() << endl;
		}
		catch(Bureaucrat::GradeTooLowException &a)
		{
			cout << a.what() << endl;
		}
	}

	cout << "_______________________________________________________________" << endl;
	cout << "|Test:Negative(TooHigh)                                        |"<< endl;
	cout << "_______________________________________________________________" << endl;

	{
		try
		{
			Bureaucrat ast("Asterix", 0);
		}
		catch(Bureaucrat::GradeTooHighException &a)
		{
			cout << a.what() << endl;
		}
		catch(Bureaucrat::GradeTooLowException &a)
		{
			cout << a.what() << endl;
		}
	}

}

int main(void)
{
	test();
	cout << endl;
}