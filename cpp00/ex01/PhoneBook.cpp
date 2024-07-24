#include "PhoneBook.hpp"

#define MAX_CONTACTS 8

PhoneBook::PhoneBook() {
    id = 0;
    numContacts = 0;
}

std::string getContactInfo(std::string str, std::string input) {
    while (1) {
        std::cout << str;
        getline(std::cin, input);
        if (input.empty())
            continue;
        else
            break;
    }
    return input;
}

std::string add_info(std::string info) {
    std::string input;
    while (1) {
        std::cout << info << ": ";
        getline(std::cin, input);
        if (input.empty())
            continue;
        else
            break;
    }
    return input;
}

void PhoneBook::addContact() {
    std::string name, surname, nickname, phonenumber, darkestsecret;

    while (1) {
        name = add_info("name");
        surname = add_info("surname");
        nickname = add_info("nickname");
        phonenumber = add_info("phonenumber");
        darkestsecret = add_info("darkestsecret");
        break;
    }
    contacts[id++ % MAX_CONTACTS].set_contact(name, surname, nickname, phonenumber, darkestsecret);
	numContacts = std::min(numContacts + 1, MAX_CONTACTS);
    std::cout << "contact added" << std::endl;
}

void writePipe(std::string str) {
    if (str.length() > 10) {
        std::cout << std::setw(9) << str.substr(0, 9) << ".|";
    } else
        std::cout << std::setw(10) << str << "|";
}

int ft_stoi(std::string str) {
    int i = 0;
    int num = 0;
    int isNegative = 0;

    if (str[i] == '-' || str[i] == '+')
        if (str[i++] == '-')
            isNegative = 1;
    while (str[i] >= '0' && str[i] <= '9') {
        num = num * 10 + (str[i++] - '0');
    }
    if (isNegative)
        num *= -1;
    return num;
}

void PhoneBook::searchContact() {
    if (numContacts == 0) {
        std::cout << "No contacts available." << std::endl;
        return;
    }

    std::cout << "        id|      name|   surname|  nickname|" << std::endl;
    std::cout << "--------------------------------------------" << std::endl;

    for (int i = 0; i < numContacts; i++) {
        std::cout << std::setw(10) << i + 1 << "|";
        writePipe(contacts[i].get_name());
        writePipe(contacts[i].get_surname());
        writePipe(contacts[i].get_nickname());
        std::cout << std::endl;
    }

    std::string str_id;
    int int_id;
    while (1) {
        std::cout << "enter id: ";
        getline(std::cin, str_id);
        if (str_id.empty())
            continue;
        int_id = ft_stoi(str_id) - 1;
        if (int_id < 0 || int_id >= MAX_CONTACTS || int_id > numContacts - 1) {
            std::cout << "invalid id" << std::endl;
            continue;
        }
		std::cout << "Name: "<< (contacts[int_id].get_name()) <<std::endl;
		std::cout << "Surname: "<< (contacts[int_id].get_surname()) <<std::endl;
		std::cout << "Nickname: "<< (contacts[int_id].get_nickname()) <<std::endl;
		std::cout << "Phone Number: "<< (contacts[int_id].get_phoneNumber()) <<std::endl;
		std::cout << "Darkest Secret: "<< (contacts[int_id].get_darkestSecret()) <<std::endl;
		break;
	}
}