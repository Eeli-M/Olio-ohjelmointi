#include "italianchef.h"

ItalianChef::ItalianChef()
{
    cout << "ItalianChef default konstruktori" << endl;
}

ItalianChef::ItalianChef(string name) : Chef(name)
{
    chefName = name;
    cout << "ItalianChef " << name << " konstruktori" << endl;
}

ItalianChef::~ItalianChef()
{
    cout << "ItalianChef destruktori" << endl;
}

bool ItalianChef::askSecret(string pw, int f, int w)
{
    cout << "Do you know the password? ";
    cin >> pw;
    if(pw == "pizza")
    {
        cout << "Pizza unlocked!" << endl;

        flour = f;
        water = w;

        makePizza();

        return true;
    }
    else
    {
        cout << "Wrong password!" << endl;
        return false;
    }
}

int ItalianChef::makePizza()
{
    int pitsat = min(flour / 5, water / 5);

    cout << pitsat << " pizzas made" << endl;

    return pitsat;
}
