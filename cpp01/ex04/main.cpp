#include <iostream>
#include <string>
#include <fstream>

int main(int ac, char **av){
    if(ac != 4){
        std::cerr << "err: invalid input format \"./lain <filename> <s1> <s2>\"" << std::endl;
        return 1;
    }

    std::string file	= av[1];
    std::string s1		= av[2];
    std::string s2		= av[3];

	if(file.empty() || s1.empty() || s2.empty()){
        std::cerr << "err: empty argument(s)" << std::endl;
        return 1;
    }
	
	if(s1 == s2){
        std::cerr << "err: s1 is the same as s2" << std::endl;
        return 1;
    }

    std::ifstream inputFile(file);
    if(!inputFile.is_open()){
        std::cerr << "err: input file" << std::endl;
        return 1;
    }

    std::string copyfile = file + ".replace";
    std::ofstream outputFile(copyfile);
    if(!outputFile.is_open()){
        std::cerr << "err: output file" << std::endl;
        return 1;
    }

    std::string myText;
    while(std::getline(inputFile, myText)){
        size_t pos = myText.find(s1);
        while(pos != std::string::npos){
            myText.erase(pos, s1.length());
            myText.insert(pos, s2);
            pos = myText.find(s1);
        }
        outputFile << myText << std::endl;
	}

    inputFile.close();
    outputFile.close();
    return (0);
}