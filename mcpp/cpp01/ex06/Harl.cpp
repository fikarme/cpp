#include "Harl.hpp"

void Harl::debug() {
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "7XL-çift peynirli-üçlü turşu-özel-ketçaplı burgerime fazladan domuz \
pastırması yemeyi seviyorum. Gerçekten seviyorum!" << std::endl << std::endl;
}

void Harl::info() {
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "Ekstra domuz pastırması eklemenin daha fazla paraya mal olduğuna inanamıyorum. \
Burgerime yeterince pastırma koymadınız! Yapsaydınız, daha fazlasını istemezdim!" << std::endl << std::endl;
}

void Harl::warning() {
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "Bence bedavaya fazladan pastırma yemeyi hak ediyorum. Ben yıllardır \
geliyorum, sen geçen aydan beri burada çalışmaya başladın." << std::endl << std::endl;
}

void Harl::error() {
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "Bu kabul edilemez! Şimdi müdürle konuşmak istiyorum." << std::endl << std::endl;
}

void Harl::complain(std::string level) {
    int i = -1;
	point p[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levelList[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    while (++i < 4)
        if (level == levelList[i])
            break;
    if (i == 4) {
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        return ;
    }
    while (i < 4)
        (this->*p[i++])();
}