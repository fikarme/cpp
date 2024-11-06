#include "Fixed.hpp"

Fixed::~Fixed(){
	cout << "Destructor called" << endl;
}

Fixed::Fixed(){
    cout << "Default costructer called" << endl;
    this->fixedPointNb = 0;
}

Fixed::Fixed(const Fixed & cpy){
    cout << "Copy costructer called" << endl;
    *this = cpy;
}

Fixed & Fixed::operator = (const Fixed & fix){
    cout << "Copy assigment operator called" << endl;
    this->fixedPointNb = fix.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const{
    cout << "getRawBits member function called" << endl;
    return (this->fixedPointNb);
}

void Fixed::setRawBits(int const raw){
    cout << "setRawBits member function called" << endl;
    this->fixedPointNb = raw;
}