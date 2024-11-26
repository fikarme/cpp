#include "Dog.hpp"
#include "Cat.hpp"
#include "AAnimal.hpp"

// inline void p(){
//     cout << endl;
// }

// int main(){
// p();
// 	const AAnimal*	kittie = new Cat();
// 	const AAnimal*	doggy = new Dog();
// p();
// 	kittie->makeSound();
// 	doggy->makeSound();
// p();
// 	delete	kittie;
// 	delete	doggy;
// p();
// 	int		len = 4; // 100
// 	int		i = 0;
// 	AAnimal	*tab[len];
// p();
// 	while (i < (len / 2)){
// 		tab[i] = new Dog();
// 		tab[i]->makeSound();
// 		i++;
// 	}
// p();
// 	while (i < len){
// 		tab[i] = new Cat();
// 		tab[i]->makeSound();
// 		i++;
// 	}
// 	return 0;
// }


int main(){
	Dog basic;
	{
		// cout << "kurt" << endl;
		Dog tmp = basic;
		// cout << "turk" << endl;
		tmp = basic;
	}
	return 0;

	// AAnimal* akif = new Dog();
	// akif->makeSound();
}

// void __attribute__((destructor)) calledLast(); 

// void calledLast()
// {
// 	system("leaks lain");
// }

// make re && valgrind --leak-check=full ./lain
// make re && ./lain