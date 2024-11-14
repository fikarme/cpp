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
		bool	operator>(const Fixed &number);
		bool	operator<(const Fixed &number);
		bool	operator>=(const Fixed &number);
		bool	operator<=(const Fixed &number);
		bool	operator==(const Fixed &number);
		bool	operator!=(const Fixed &number);
		Fixed	&operator=(const Fixed &number);
		Fixed	operator+(const Fixed &number);
		Fixed	operator-(const Fixed &number);
		Fixed	operator*(const Fixed &number);
		Fixed	operator/(const Fixed &number);
		Fixed	operator++(int);
		Fixed	&operator++();
		Fixed	operator--(int);
		Fixed	&operator--();
		static	Fixed &min(Fixed &f1, Fixed &f2);
		static	const Fixed &min(const Fixed &f1, const Fixed &f2);
		static	Fixed &max(Fixed &f1, Fixed &f2);
		static	const Fixed &max(const Fixed &f1, const Fixed &f2);
};

ostream &operator<<(ostream &output, const Fixed &fixed);

#endif
