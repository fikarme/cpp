#include "PhoneBook.hpp"

int main(){
    std::string input;
    PhoneBook phonebook;
	
    while(1){
        std::cout << ">> ";
        getline(std::cin, input);
		if(input.eof())
			continue;
        if(input.empty())
            continue;
        if("ADD" == input)
            phonebook.addContact();
        else if("SEARCH" == input)
            phonebook.searchContact();
        else if("EXIT" == input){
			std::cout << "bye bye 🤫🧏‍" << std::endl;
            return(0);
		}
        else
            std::cout << "Please enter one of the commands: ADD, SEARCH or EXIT." << std::endl;
    }
}