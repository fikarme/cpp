#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
    id = 0;
}

std::string    getContactInfo(std::string str, std::string input) {
    while (1) {
        std::cout << str;
        getline(std::cin, input);
        if (input.empty())
            continue ;
        else
            break ;
    }
    return (input);
}

int     checkPhoneNumber(std::string pn) {
    int i = -1;
    int isCorrect = 0;

    while (pn[++i])
        if (!(pn[i] >= '0' && pn[i] <= '9'))
            isCorrect = 1;
    if (isCorrect)
        std::cout << "--- Phone number can only take numerical values! ---" << std::endl;
    return (isCorrect);
}

void    PhoneBook::addContact() {
    std::string  n, sn, nn, pn, ds;

    while (1) {
        n = getContactInfo("Name: ", n);
        sn = getContactInfo("Surname: ", sn);
        nn = getContactInfo("Nickname: ", nn);
        pn = getContactInfo("Phone Number: ", pn);
        if (checkPhoneNumber(pn))
            continue;
        ds = getContactInfo("Darkest Secret: ", ds);
        break;
    }
    contacts[id++].set_contact(n, sn, nn, pn, ds);
    if (id == 8)
        id = 7;
    std::cout << "--- Contact added to phone book ---" << std::endl;
}

void    printTableHeaders() {
    std::cout << "        Id";
    std::cout << "|" << "      Name";
    std::cout << "|" << "   Surname";
    std::cout << "|" << "  Nickname" << "|" << std::endl;
    for (int i = 0;i < 44;i++)
        std::cout << "-";
    std::cout << std::endl;
}

void    writeString(std::string str) {
    if (str.length() > 10) {
        std::cout << std::setw(9) << str.substr(0, 9) << ".|";
    } else
        std::cout << std::setw(10) << str << "|";
}

int checkSearchId(std::string searchIn) {
    int i = -1;
    int isCorrect = 0;

    while (searchIn[++i])
        if (!(searchIn[i] >= '1' && searchIn[i] <= '8'))
            isCorrect = 1;
    if (searchIn.length() > 1)
        isCorrect = 1;
    return (isCorrect);
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
    return (num);
}

void    PhoneBook::searchContact() {
    printTableHeaders();

    for (int i = 0; i < 8; i++) {
        std::cout << std::setw(10) << i + 1 << "|";
        writeString(contacts[i].get_name());
        writeString(contacts[i].get_surname());
        writeString(contacts[i].get_nickname());
        std::cout << std::endl;
    }

    std::string  searchIndex;
    int     index;
    while (1) {
        std::cout << "Enter the ID of the person you are calling > ";
        getline(std::cin, searchIndex);
        if (searchIndex.empty() || checkSearchId(searchIndex))
            continue;
        index = ft_stoi(searchIndex) - 1;
        std::cout << "Id: " << index + 1 << std::endl;
        std::cout << "Name: " << contacts[index].get_name() << std::endl;
        std::cout << "Surname: " << contacts[index].get_surname() << std::endl;
        std::cout << "Nickname: " << contacts[index].get_nickname() << std::endl;
        std::cout << "Phone Number: " << contacts[index].get_phoneNumber() << std::endl;
        std::cout << "Darkest Secret: " << contacts[index].get_darkestSecret() << std::endl;
        break;
    }
}
