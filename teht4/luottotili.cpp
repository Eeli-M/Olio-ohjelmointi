#include "luottotili.h"

Luottotili::Luottotili(string o, double lr) : Pankkitili(o)
{
    cout << "Luottotili " << o << " konstruktori" << endl;

    luottoRaja = lr;
    cout << "Luottoraja = " << lr << endl;
}

Luottotili::~Luottotili()
{
    cout << "Luottotili destruktori" << endl;
}

bool Luottotili::deposit(double summa)
{
    double velka = saldo;
    cout << "Velka = " << velka << " euroa" << endl;
    cout << "Pyritaan maksamaan velasta " << summa << " euroa" << endl;

    if(summa < 0) {
        cout << "Maksu ei voi olla negatiivinen, ";
        cout << "pyrittiin maksaa " << summa << " euroa" << endl;

        return false;
    }
    else if(velka-summa < 0) {
        cout << "Ei voi maksaa liikaa velkaa, ";
        cout << "pyrittiin maksaa " << summa << " euroa" << endl;

        return false;
    }
    else {
        saldo -= summa;
        cout << velka << " euron velasta " << summa << " euroa maksettu, ";
        cout << "velkaa jaljella " << saldo << " euroa" << endl;

        return true;
    }

}

bool Luottotili::withdraw(double summa)
{
    if(summa < 0) {
        cout << "Ei voi nostaa negatiivista summaa, ";
        cout << "pyrittiin nostaa " << summa << " euroa" << endl;

        return false;
    }
    else if(saldo+summa > luottoRaja) {
        cout << "Luottorajaa " << luottoRaja << " ei voi ylittaa, ";
        cout << "pyrittiin nostaa " << summa << " euroa" << endl;
        return false;
    }
    else {
        saldo += summa;
        cout << "Nostetaan luottoa " << summa << " euroa" << endl;
        return true;
    }
}
