#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact {
    private:
        std::string  name;
        std::string  surname;
        std::string  nickname;
        std::string  phone_number;
        std::string  dark_secret;
    public:
        Contact();
        void set_contact(std::string n, std::string sn, std::string nn, std::string pn, std::string ds);
        std::string get_name();
        std::string get_surname();
        std::string get_nickname();
        std::string get_phoneNumber();
        std::string get_darkestSecret();
};

#endif