#include "Fixed.hpp"

Fixed::~Fixed(){
	cout << "Destructor called" << endl;
}

Fixed::Fixed(){
    cout << "Default costructer called" << endl;
    _num = 0;
}

Fixed::Fixed(const Fixed & cpy){
    cout << "Copy costructer called" << endl;
    *this = cpy;
}

Fixed & Fixed::operator = (const Fixed & fix){
    cout << "Copy assigment operator called" << endl;
    _num = fix.getRawBits();
    return *this;
}

int Fixed::getRawBits() const{
    cout << "getRawBits member function called" << endl;
    return _num;
}

void Fixed::setRawBits(int const raw){
    cout << "setRawBits member function called" << endl;
    _num = raw;
}