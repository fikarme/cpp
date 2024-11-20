#include "Contact.hpp"

Contact::Contact() {
	name = "";
	surname = "";
	nickname = "";
	phone_number = "";
	dark_secret = "";
}

void    Contact::set_contact(std::string n, std::string sn, std::string nn, std::string pn, std::string ds)
{
    Contact::name = n;
    Contact::surname = sn;
    Contact::nickname = nn;
    Contact::phone_number = pn;
    Contact::dark_secret = ds;
}

std::string Contact::get_name() {
    return (name);
}

std::string Contact::get_surname() {
    return (surname);
}

std::string Contact::get_nickname() {
    return (nickname);
}

std::string Contact::get_phoneNumber() {
    return (phone_number);
}

std::string Contact::get_darkestSecret() {
    return (dark_secret);
}