#include "Dog.hpp"
#include "Cat.hpp"
#include "AAnimal.hpp"

inline void p(){
    cout << endl;
}

int main(){
p();
	const AAnimal*	kittie = new Cat();
	const AAnimal*	doggy = new Dog();
p();
	kittie->makeSound();
	doggy->makeSound();
p();
	delete	kittie;
	delete	doggy;
p();
	int		len = 4; // 100
	int		i = 0;
	AAnimal	*tab[len];
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