#include "Contact.hpp"

Contact::Contact() {
	name = "";
	surname = "";
	nickname = "";
	phonenumber = "";
	darkestsecret = "";
}

void    Contact::set_contact(std::string n, std::string sn,
							std::string nn, std::string pn, std::string ds)
{
    Contact::name = n;
    Contact::surname = sn;
    Contact::nickname = nn;
    Contact::phonenumber = pn;
    Contact::darkestsecret = ds;
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
    return (phonenumber);
}

std::string Contact::get_darkestSecret() {
    return (darkestsecret);
}