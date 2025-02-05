#include "asiakas.h"

Asiakas::Asiakas(string nimi, double lr)
    : kayttotili(nimi), luottotili(nimi, lr)
{
    cout << "Asiakas " << nimi << " konstruktori" << endl;
}

string Asiakas::getNimi() {}

void Asiakas::showSaldo()
{
    cout << "Haetaan kaytto- ja luottotilin saldot:" << endl;
    kayttotili.getBalance();
    luottotili.getBalance();
}

bool Asiakas::talletus(double summa)
{
    bool ret = kayttotili.deposit(summa);
    if(!ret) {
        cout << "kayttotili.deposit() epaonnistui" << endl;
    }
    return ret;
}

bool Asiakas::nosto(double summa)
{
    bool ret = kayttotili.withdraw(summa);
    if(!ret) {
        cout << "kayttotili.withdraw() epaonnistui" << endl;
    }
    return ret;
}

bool Asiakas::luotonMaksu(double summa)
{
    bool ret = luottotili.deposit(summa);
    if(!ret) {
        cout << "luottotili.deposit() epaonnistui" << endl;
    }
    return ret;
}

bool Asiakas::luotonNosto(double summa)
{
    bool ret = luottotili.withdraw(summa);
    if(!ret) {
        cout << "luottotili.deposit() epaonnistui" << endl;
    }
    return ret;
}

bool Asiakas::tiliSiirto(double summa, Asiakas &saaja)
{
    bool ok = nosto(summa);

    if(ok) {
        saaja.talletus(summa);
    }
    else {
        cout << "Talletus epaonnistui" << endl;
    }
}
