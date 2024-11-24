#include "Animal.hpp"

int main(){
    cout << endl;
    Animal defaultAnimal;
    std::cout << "get: " << defaultAnimal.getType() << std::endl;
    defaultAnimal.makeSound();

    cout << endl;
    Animal specificAnimal("Dog");
    std::cout << "get: " << specificAnimal.getType() << std::endl;
    specificAnimal.makeSound();

    cout << endl;
    Animal copiedAnimal(specificAnimal);
    std::cout << "get: " <<copiedAnimal.getType() << std::endl;
    copiedAnimal.makeSound();

    cout << endl;
    Animal assignedAnimal;
    assignedAnimal = specificAnimal;
    std::cout << "get: " << assignedAnimal.getType() << std::endl;
    assignedAnimal.makeSound();

    cout << endl;
    return 0;
}