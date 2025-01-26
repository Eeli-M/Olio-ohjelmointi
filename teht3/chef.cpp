#include "chef.h"

Chef::Chef()
{
    cout << "Chef default konstruktori" << endl;
}

Chef::Chef(string name)
{
    chefName = name;
    cout << "Chef " << chefName << " konstruktori" << endl;
}

Chef::~Chef()
{
    cout << "Chef " << chefName << " destruktori" << endl;
}

int Chef::makeSalad(int aines)
{
    cout << "Aineksia " << aines << endl;
    return aines / 5;
}

int Chef::makeSoup(int aines)
{
    cout << "Aineksia " << aines << endl;
    return aines / 3;
}

string Chef::getName() const
{
    return chefName;
}
