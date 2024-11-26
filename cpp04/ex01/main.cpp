#include "Dog.hpp"
#include "Cat.hpp"

inline void p(){
    cout << endl;
}

int main(){
	const Animal*	kittie = new Cat();
	const Animal*	doggy = new Dog();
	const Animal*	funimal = new Animal();
p();
	kittie->makeSound();
	doggy->makeSound();
	funimal->makeSound();
p();
	delete	kittie;
	delete	doggy;
	delete	funimal;
p();
	int		len = 4; // 100
	int		i = 0;
	Animal	*tab[len];
p();
	while (i < (len / 2)){
		tab[i] = new Dog();
		tab[i]->makeSound();
		i++;
	}
p();
	while (i < len){
		tab[i] = new Cat();
		tab[i]->makeSound();
		i++;
	}
p();
	while (--i >= 0)
		delete tab[i];
p();
    Cat cat("Cat");
	Dog dog("Dog");
p();
    cat.setIdea("**not a single thought behind those eyes**", 0);
    cout << cat.getIdea(0) <<  endl;
p();
    dog.setIdea("walk walk gimme food", 100);
    cout << dog.getIdea(100) <<  endl;
p();
	return 0;
}

// int main(){
// 	Dog basic;
// 	{
// 		Dog tmp = basic;
// 		tmp = basic;
// 	}
// 	return 0;
// }