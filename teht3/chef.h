#ifndef CHEF_H
#define CHEF_H
#include <iostream>

using namespace std;

class Chef
{
public:
    Chef();
    Chef(string name);
    ~Chef();

    string getName() const;
    int makeSalad(int aines);
    int makeSoup(int aines);

protected:
    string chefName;
};

#endif // CHEF_H
