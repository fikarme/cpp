#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
using std::cout;
using std::endl;
using std::ostream;

class Fixed{
    private:
		int _num;
		static const int _fracBits = 8;
    public:
		~Fixed();
		Fixed();
		Fixed(const int fix);
		Fixed(const Fixed &copy);
		Fixed(const float floatVal);
		int		toInt() const;
		float	toFloat() const;
		int		getRawBits() const;
		void	setRawBits(int const raw);
		Fixed	&operator=(const Fixed &number);
};

ostream &operator<<(ostream &output, const Fixed &fixed);

#endif