#ifndef ASIAKAS_H
#define ASIAKAS_H
#include <iostream>
#include "pankkitili.h"
#include "luottotili.h"

using namespace std;

class Asiakas
{
public:
    Asiakas(string n,double lr);
    string getNimi();
    void showSaldo();
    bool talletus(double summa);
    bool nosto(double summa);
    bool luotonMaksu(double);
    bool luotonNosto(double);
    bool tiliSiirto(double summa, Asiakas &saaja);

private:
    string nimi;
    Pankkitili kayttotili;
    Luottotili luottotili;
};

#endif // ASIAKAS_H
