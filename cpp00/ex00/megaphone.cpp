// #include <iostream>
// #include <cctype>

// int main(int ac, char **av)
// {
// 	(void)ac;
//     int i, j = 1;
//     char **s = av;
// 	std::string mgfn = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
// 	if(av[1] == NULL)
// 		std::cout << mgfn;
//     while(s[j])
//     {
//         i = 0;
//         while(s[j][i])
//         {
//             s[j][i] = std::toupper(s[j][i]);
//             std::cout << s[j][i];
//             i++;
//         }
//         j++;
//     }
// 	std::cout << std::endl;
// }

#include <iostream>

int main(int ac, char **av) {
    if (ac==1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";

    for(int i=1; i < ac; i++)
        for(int j=0; av[i][j]; j++)
            std::cout << (char)toupper(av[i][j]);
    std::cout << std::endl;
}