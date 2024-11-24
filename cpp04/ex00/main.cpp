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

// #include "Animal.hpp"
// #include "Cat.hpp"
// #include "Dog.hpp"

// #include "WrongAnimal.hpp"
// #include "WrongCat.hpp"

// int main()
// {
// 	const Animal* meta = new Animal();
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();
// 	cout << j->getType() << " " << endl;
// 	cout << i->getType() << " " << endl; 
// 	i->makeSound(); 
// 	j->makeSound();
// 	meta->makeSound();
	
// 	delete meta;
// 	delete j;
// 	delete i;

// 	cout << endl << "------WrongAnimal------" << endl;

// 	const WrongAnimal* meta2 = new WrongAnimal();
// 	const WrongAnimal* j2 = new WrongCat();

// 	cout << j2->getType() << endl;
// 	j2->makeSound();
// 	meta2->makeSound();

// 	delete meta2;
// 	delete j2;

// 	return 0;
// }
