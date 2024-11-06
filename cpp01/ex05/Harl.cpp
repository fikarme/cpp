#include "Harl.hpp"

void Harl::_debug(){
    std::cout<<"DEBUG level: i’ll have two number 9s, a number 9 large, a number 6 with extra dip,"
			<<" a number 7, two number 45s, one with cheese, and a large soda."
			<<"and make it all extra large, alright?"<<std::endl;
}

void Harl::_info(){
    std::cout<<"INFO level: i asked for extra sauce, extra cheese, and extra everything!"
			<<"life is too short to be skimping on the details. don’t mess this up!"<<std::endl;
}

void Harl::_warning(){
    std::cout<<"WARNING level: how many times do i gotta say it? extra cheese, double bacon!"
			<<"I’ve been coming here for years; I think I deserve this, ya feel me?"<<std::endl;
}

void Harl::_error(){
    std::cout<<"ERROR level: look, if you mess up my order, we’re gonna have a problem!"
			<<"Two massive cheeseburgers, triple bacon, and a large drink!"
			<<"Did you hear me? Make it big!"<<std::endl;
}

void Harl::complain(std::string level){
    void(Harl::*pointerToFunc[])() = {
        &Harl::_debug,
        &Harl::_info,
        &Harl::_warning,
        &Harl::_error
    };
    std::string array[4] = {
        "DEBUG", 
        "INFO",
        "WARNING",
        "ERROR"
    };
    for(int i = 0; i < 4; i++){
        if(array[i] == level){
            (this->*pointerToFunc[i])();
            return ;
        }
    }
}