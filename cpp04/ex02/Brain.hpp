#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class Brain{
	public:
		~Brain();
		Brain();
		Brain(const Brain &copy);
		Brain &operator=(const Brain &copy);
		string ideas[100];
};

#endif