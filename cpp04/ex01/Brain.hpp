#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class Brain{
	private:
		string _ideas[100];
	public:
		~Brain();
		Brain();
		Brain(const Brain &copy);
		Brain &operator=(const Brain &copy);
		void setIdea(string idea, int i);
		string getIdea(int i) const;
};

#endif