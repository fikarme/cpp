#include "Harl.hpp"

void Harl::_debug(){
    std::cout<<"i’ll have two number 9s, a number 9 large, a number 6 with extra dip,"
			<<"a number 7, two number 45s, one with cheese, and a large soda."
			<<"and make it all extra large, alright?"<<std::endl;
}

void Harl::_info(){
    std::cout<<"i asked for extra sauce, extra cheese, and extra everything!"
			<<"life is too short to be skimping on the details. don’t mess this up!"<<std::endl;
}

void Harl::_warning(){
    std::cout<<"how many times do i gotta say it? extra cheese, double bacon!"
			<<"I’ve been coming here for years; I think I deserve this, ya feel me?"<<std::endl;
}

void Harl::_error(){
    std::cout<<"look, if you mess up my order, we’re gonna have a problem!"
			<<"Two massive cheeseburgers, triple bacon, and a large drink!"
			<<"Did you hear me? Make it big!"<<std::endl;
}

int findLevel(std::string level){
    if (level == "DEBUG")
        return (1);
    else if (level == "INFO")
        return (2);
    else if (level == "WARNING")
        return (3);
    else if (level == "ERROR") 
        return (4);
    else 
        return (0);
}

void Harl::complain(std::string level){
    int lvl = findLevel(level);
    switch(lvl){
        case 1:
            std::cout << "[DEBUG]" << std::endl;
            _debug();
        case 2:
            std::cout << "[INFO]" << std::endl;
            _info();
        case 3:
            std::cout << "[WARNING]" << std::endl;
            _warning();
        case 4:
            std::cout << "[ERROR]" << std::endl;
            _error();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}