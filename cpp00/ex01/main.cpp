#include "PhoneBook.hpp"

int main() {
    std::string input;
    PhoneBook   phonebook;
	
    while (1) {
        std::cout << ">> ";
        getline(std::cin, input);
        if (input.empty())
            continue;
        if ("a" == input)
            phonebook.addContact();
        else if ("s" == input)
            phonebook.searchContact();
        else if ("e" == input){
			std::cout << "bye bye" << std::endl;
            return (0);
		}
        else
            std::cout << "Please enter one of the commands: ADD, SEARCH or EXIT." << std::endl;
    }
}