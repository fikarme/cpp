#include "Fixed.hpp"

Fixed::Fixed(){
	cout << "Default constructor called" << endl;
	_num = 0;
}

Fixed::~Fixed(){
	cout << "Destructor called" << endl;
}

Fixed::Fixed(const Fixed &copy){
	cout << "Copy constructor called" << endl;
	*this = copy;
}

Fixed & Fixed::operator=(const Fixed &number){
	cout << "Copy assigment operator called" << endl;
	_num = number._num;
	return *this;
}

Fixed::Fixed(const int intVal){
	cout << "Int constructor called" << endl;
	_num = intVal << _fracBits;
}

Fixed::Fixed(const float floatVal){
	cout << "Float constructor called" << endl;
	_num = int(roundf(floatVal * (1 << _fracBits)));
}

float Fixed::toFloat(void) const{
	return float(_num) / (1 << _fracBits);
}

int Fixed::toInt(void) const{
	return _num >> _fracBits;
}

ostream &operator<<(ostream &output, const Fixed &fixed){
	output << fixed.toFloat();
	return output;
}

int	Fixed::getRawBits( void ) const{
	cout << "getRawBits member function called" << endl;
	return _num;
}

void Fixed::setRawBits( int const raw ){
	cout << "setRawBits member function called" << endl;
	_num = raw;
}

bool Fixed::operator>(const Fixed &number){
	return (_num > number._num);
}

bool Fixed::operator<(const Fixed &number){
	return (_num < number._num);
}

bool Fixed::operator>=(const Fixed &number){
	return (_num >= number._num);
}

bool Fixed::operator<=(const Fixed &number){
	return (_num <= number._num);
}

bool Fixed::operator==(const Fixed &number){
	return (_num == number._num);
}

bool Fixed::operator!=(const Fixed &number){
	return (_num != number._num);
}

Fixed Fixed::operator+(const Fixed &number){
	Fixed retVal(toFloat() + number.toFloat());
	return retVal;
}

Fixed Fixed::operator-(const Fixed &number){
	Fixed retVal(toFloat() - number.toFloat());
	return retVal;
}

Fixed Fixed::operator*(const Fixed &number){
	Fixed retVal(toFloat() * number.toFloat());
	return retVal;
}

Fixed Fixed::operator/(const Fixed &number){
	Fixed retVal(toFloat() / number.toFloat());
	return retVal;
}

Fixed Fixed::operator++(int){
	Fixed retVal = *this;
	_num++;
	return retVal;
}

Fixed &Fixed::operator++(){
	_num++;
	return *this;
}

Fixed Fixed::operator--(int){
	Fixed retVal = *this;
	_num--;
	return retVal;
}

Fixed &Fixed::operator--(){
	_num--;
	return *this;
}

Fixed &Fixed::min(Fixed &f1, Fixed &f2){
	if (f1 < f2)
		return f1;
	return f2;
}

const Fixed &Fixed::min(const Fixed &f1, const Fixed &f2){
	if (f1._num < f2._num)
		return f1;
	return f2;
}

Fixed &Fixed::max(Fixed &f1, Fixed &f2){
	if (f1 > f2)
		return f1;
	return f2;
}

const Fixed &Fixed::max(const Fixed &f1, const Fixed &f2){
	if (f1._num > f2._num)
		return f1;
	return f2;
}