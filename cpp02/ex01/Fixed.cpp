#include "Fixed.hpp"

// OCCF: Destructor
Fixed::~Fixed(){
	cout << "Destructor called" << endl;
}

// Ad-hoc Polymorphism & OCCF: Default constructor
Fixed::Fixed(){
	_num = 0;
	cout << "Default constructor called" << endl;
}

// Ad-hoc Polymorphism & OCCF: Copy constructor
Fixed::Fixed(const Fixed &copy){
	cout << "Copy constructor called" << endl;
	*this = copy;
}

// OCCF: Copy assignment operator
Fixed & Fixed::operator=(const Fixed &number){
	cout << "Copy assigment operator called" << endl;
	_num = number._num;
	return *this;
}

// Ad-hoc Polymorphism: Constructor that takes a float
Fixed::Fixed(const float floatVal){
	cout << "Float constructor called" << endl;
	_num = int(roundf(floatVal * (1 << _fracBits)));
}

// Ad-hoc Polymorphism: Constructor that takes an int
Fixed::Fixed(const int intval){
	cout << "Int constructor called" << endl;
	_num = intval << _fracBits;
}

// Member Function (method)
float Fixed::toFloat() const{
	return float(_num) / (1 << _fracBits); //2^_fracBits
}

// Member Function (method)
int Fixed::toInt() const{
	return _num >> _fracBits;
}

// Operator Overloading: Stream insertion operator
ostream &operator<<(ostream &output, const Fixed &fixed){
	output << fixed.toFloat();
	return output;
}

// Member Function (method)
int	Fixed::getRawBits() const{
	cout << "getRawBits member function called" << endl;
	return _num;
}

// Member Function (method)
void Fixed::setRawBits(int const raw){
	cout << "setRawBits member function called" << endl;
	_num = raw;
}