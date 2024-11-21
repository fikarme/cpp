#include "ScavTrap.hpp"

int main(){
    ScavTrap st("zart");
	cout << endl;
    st.attack("zort");
	cout << endl;
    st.beRepaired(3);
	cout << endl;
    st.guardGate();
    return 0;
}