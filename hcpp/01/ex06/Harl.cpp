/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 19:36:59 by hozkaya           #+#    #+#             */
/*   Updated: 2024/08/19 19:37:00 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout<<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"<<std::endl;

}

void Harl::info(void)
{
    std::cout<<"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"<<std::endl;

}

void Harl::warning(void)
{
    std::cout<<"I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."<<std::endl;

}

void Harl::error(void)
{
    std::cout<<"This is unacceptable! I want to speak to the manager now."<<std::endl;
}

int find_level(std::string level)
{
    if (level == "debug")
        return (1);
    else if (level == "info")
        return (2);
    else if (level == "warning")
        return (3);
    else if (level == "error") 
        return (4);
    else 
        return (0);
}

void Harl::complain(std::string level)
{
    int lev = find_level(level);
    switch (lev)
    {
        case 1:
            std::cout << "[DEBUG]" << std::endl;
            this->debug();
        case 2:
            std::cout << "[INFO]" << std::endl;
            this->info();
        case 3:
            std::cout << "[WARNING]" << std::endl;
            this->warning();
        case 4:
            std::cout << "[ERROR]" << std::endl;
            this->error();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}