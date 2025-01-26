#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    Chef c_olio("Gordon");

    int salaatti = c_olio.makeSalad(17);
    cout << salaatti << " salaattiannosta" << endl;

    int keitto = c_olio.makeSoup(17);
    cout << keitto << " keittoannosta" << endl;


    ItalianChef i_olio("Mario");

    i_olio.askSecret("",15,21);

    return 0;
}
