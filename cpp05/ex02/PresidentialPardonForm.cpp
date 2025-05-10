#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(string target) : AForm("PresidentialPardonForm", 25, 5) {
    this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &cpy) : AForm(cpy) {}

PresidentialPardonForm& PresidentialPardonForm::operator = (const PresidentialPardonForm &cpy) {
    this->target = cpy.target;
    return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	this->AForm::execute(executor);
    cout << this->target << " has been pardoned by Zaphod Beeblebrox." << endl;
}