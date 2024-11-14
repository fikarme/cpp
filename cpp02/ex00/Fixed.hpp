#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
using std::cout;
using std::endl;

class Fixed{
    private:
        int _num;
        static const int _fracBits = 8;
    public:
        ~Fixed();
        Fixed();
        Fixed(const Fixed & fix);
        int		getRawBits() const;
        void	setRawBits(int const raw);
        Fixed	&operator=(const Fixed & fix);
};

#endif