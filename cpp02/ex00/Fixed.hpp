#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
using std::cout;
using std::endl;

class Fixed{
    private:
        int fixedPointNb;
        static const int fracBits = 8;
    public:
        ~Fixed();
        Fixed();
        Fixed(const Fixed & fix);
        Fixed & operator = (const Fixed & fix);
        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif