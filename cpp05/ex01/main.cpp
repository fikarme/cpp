#include "Form.hpp"

inline void y() {
    cout << "\033[1;33m ---------\033[0m" << endl;
}

int main() {
    Bureaucrat mucox("Muco", 42);
    Bureaucrat akefx("Akef", 11);
    Bureaucrat low("low", 151);
    Bureaucrat high("high", 0);
    Bureaucrat tooHigh("tooHigh", -42);

    akefx.increment();
    mucox.decrement();
y();
    cout << akefx << endl;
    cout << mucox << endl;
y();
    Form af("A", 10, 11);
    Form bf("B", 6, 9);
    cout << af << endl;
    cout << bf << endl;
y();
    mucox.signForm(af);
    akefx.signForm(af);
    akefx.signForm(af);
    cout << af.getIsSigned() << endl;
    cout << bf.getIsSigned() << endl;
y();
}