#include "pankkitili.h"

Pankkitili::Pankkitili(string o)
{
    cout << "Pankkitili " << o << " konstruktori" << endl;
}

Pankkitili::~Pankkitili()
{
    cout << "Pankkitili destruktori" << endl;
}

double Pankkitili::getBalance()
{
    cout << "Tilin saldo = " << saldo << endl;
    return saldo;
}

bool Pankkitili::deposit(double s)
{
    saldo += s;
    cout << "Tilin saldo = " << saldo << endl;

    if(s < 0) {
        cout << "Ei voi tallettaa negatiivista summaa " << s << endl;
        return false;
    }
    else {
        cout << s << " euroa talletettu pankkitilille" << endl;
        return true;
    }
}

bool Pankkitili::withdraw(double summa)
{
    cout << "Saldo ennen = " << saldo << " , summa = " << summa << endl;
    if(summa < 0) {
        cout << summa << " euron nosto ei onnistunut, summa on negatiivinen" << endl;
        return false;
    }
    else if(summa > saldo) {
        cout << "Tilin saldo liian pieni " << summa << " euron nostoon" << endl;
        return false;
    }
    else {
        cout << summa << " euron nosto onnistui" << endl;
        saldo -= summa;
        cout << "Pankkitilin uusi saldo: " << saldo << ", summa = " << summa << endl;
        return true;
    }

}
