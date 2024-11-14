#include "Fixed.hpp"

Fixed::~Fixed(){
	cout << "Destructor called" << endl;
}

Fixed::Fixed(){
	_num = 0;
	cout << "Default constructor called" << endl;
}

Fixed::Fixed(const Fixed &copy){
	cout << "Copy constructor called" << endl;
	*this = copy;
}

Fixed & Fixed::operator=(const Fixed &number){
	cout << "Copy assigment operator called" << endl;
	_num = number._num;
	return (*this);
}

Fixed::Fixed(const float floatVal){
	cout << "Float constructor called" << endl;
	_num = int(roundf(floatVal * (1 << _fracBits)));
}

Fixed::Fixed(const int intval){
	cout << "Int constructor called" << endl;
	_num = intval << _fracBits;
}

float Fixed::toFloat() const{
	return float(_num) / (1 << _fracBits);
}

int Fixed::toInt() const{
	return _num >> _fracBits;
}

ostream &operator<<(ostream &output, const Fixed &fixed){
	output << fixed.toFloat();
	return (output);
}

int	Fixed::getRawBits() const{
	cout << "getRawBits member function called" << endl;
	return _num;
}

void Fixed::setRawBits(int const raw){
	cout << "setRawBits member function called" << endl;
	_num = raw;
}