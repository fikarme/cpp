// #include "Bureaucrat.hpp"
// #include "Form.hpp"

// int main() {
//     Bureaucrat mucox("Muco", 1);
//     Bureaucrat esadx("Esad", 1);
//     Bureaucrat fikarmex("Akif", 151);
//     Bureaucrat bot1("Bot1", 0);
//     Bureaucrat bot2("Bot2", -12);

    
//     std::cout << "----------" << std::endl;
//     std::cout << mucox.getName() << " - " << mucox.getGrade() << std::endl;
//     esadx.increment();
//     mucox.decrement();
//     std::cout << esadx << std::endl;
//     std::cout << mucox << std::endl;
//     std::cout << "----------" << std::endl << std::endl;


//     std::cout << "----- FORM -----" << std::endl;
//     Form a("A", 1, 4);
//     Form b("B", 6, 9);
//     std::cout << a << std::endl;
//     std::cout << b << std::endl;

//     mucox.signForm(a);
//     esadx.signForm(a);
//     esadx.signForm(a);
//     std::cout << a.getIsSigned() << std::endl;
//     std::cout << b.getIsSigned() << std::endl;
//     std::cout << "----------" << std::endl << std::endl;

//     // Additional tests for Form class and signForm method in Bureaucrat class
//     Bureaucrat lowGradeBureaucrat("LowGrade", 150);
//     Form c("C", 100, 50);
//     Form d("D", 1, 1);

//     std::cout << c << std::endl;
//     std::cout << d << std::endl;

//     lowGradeBureaucrat.signForm(c);
//     lowGradeBureaucrat.signForm(d);

//     std::cout << c.getIsSigned() << std::endl;
//     std::cout << d.getIsSigned() << std::endl;
//     std::cout << "----------" << std::endl << std::endl;
// }

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

void talyan() {
    Bureaucrat mucox("Muco", 1);
    Bureaucrat esadx("Esad", 1);
    Bureaucrat fikarmex("Akif", 151);
    Bureaucrat bot1("Bot1", 0);
    Bureaucrat bot2("Bot2", -12);
    
    cout << "---- ----" << endl;
    cout << mucox.getName() << " - " << mucox.getGrade() << endl;
    cout << endl;

    esadx.increment();
    mucox.decrement();
    cout << mucox.getName() << " - " << mucox.getGrade() << endl;
	cout << esadx.getName() << " - " << esadx.getGrade() << endl;
    cout << "---- ----" << endl;
}

void test(){
	cout << "+ test no output" << endl;
	{
		try{
			Bureaucrat inaf("isinaf", 42);
		}
		catch(Bureaucrat::GradeTooHighException &a){
			cout << a.what() << endl;
		}
		catch(Bureaucrat::GradeTooLowException &a){
			cout << a.what() << endl;
		}
	}
	cout << "+ test no output" << endl;

	cout << "- test too low" << endl;
	{
		try{
			Bureaucrat inaf("isinaf", 151);
		}
		catch(Bureaucrat::GradeTooHighException &a){
			cout << a.what() << endl;
		}
		catch(Bureaucrat::GradeTooLowException &a){
			cout << a.what() << endl;
		}
	}
	cout << "- test too low" << endl;

	cout << "- test too high" << endl;
	{
		try{
			Bureaucrat inaf("isinaf", 0);
		}
		catch(Bureaucrat::GradeTooHighException &a){
			cout << a.what() << endl;
		}
		catch(Bureaucrat::GradeTooLowException &a){
			cout << a.what() << endl;
		}
	}
	cout << "- test too high" << endl;
}

int main(){
	test();
	cout << endl;
	testo();
	cout << endl;
	talyan();
	cout << endl;
}