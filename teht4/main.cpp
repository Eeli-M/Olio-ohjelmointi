#include <iostream>
#include "pankkitili.h"
#include "luottotili.h"
#include "asiakas.h"

using namespace std;

int main()
{
    /*
    Pankkitili p_olio("Test1");
    p_olio.getBalance();
    p_olio.deposit(500);
    p_olio.withdraw(485);
    p_olio.getBalance();

    Luottotili l_olio("Test2",1000);
    l_olio.getBalance();
    l_olio.withdraw(1000);
    l_olio.getBalance();
    l_olio.deposit(583);
    */

    Asiakas a_olio("Test1",1000);
    Asiakas a_olio2("Test2",2000);

    a_olio.showSaldo();
    a_olio.talletus(200);
    a_olio.showSaldo();
    a_olio.luotonNosto(1000);
    a_olio.showSaldo();
    a_olio.luotonMaksu(654);
    a_olio.showSaldo();
    a_olio2.showSaldo();
    a_olio.tiliSiirto(150, a_olio2);
    a_olio2.showSaldo();
    a_olio.showSaldo();

    return 0;
}
