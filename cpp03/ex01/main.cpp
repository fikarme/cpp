#include "ScavTrap.hpp"

int main(){
    ScavTrap st("kart");
	cout << endl;
    ScavTrap st2("zart");
	cout << endl;
	st2 = st;
	cout << endl;
    st.attack("zort");
	cout << endl;
    st.beRepaired(3);
	cout << endl;
    st.guardGate();
    return 0;
}