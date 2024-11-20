#include <iostream>
#include <ctype.h>

int main(int argc, char **argv)
{
    if(argc < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    for(int i = 1; i < argc; i++)
    {
      for(int j = 0; argv[i][j]; j++)
            std::cout << static_cast <char> (std::toupper(argv[i][j]));
    }
    std::cout << std::endl;
}