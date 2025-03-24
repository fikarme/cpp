#include "Bureaucrat.hpp"


int main(){
	Bureaucrat b("Bureaucrat", 1);
	std::cout << b.getName() << std::endl;
	std::cout << b.getGrade() << std::endl;
	b.increment();
	std::cout << b.getGrade() << std::endl;
	b.decrement();
	std::cout << b.getGrade() << std::endl;
	return 0;
}