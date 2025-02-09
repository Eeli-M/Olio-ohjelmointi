#ifndef NOTIFIKAATTORI_H
#define NOTIFIKAATTORI_H
#include <iostream>
#include "seuraaja.h"

using namespace std;

class Notifikaattori
{
public:
    Notifikaattori();
    void lisaa(Seuraaja *s);
    void poista(Seuraaja *s);
    void tulosta();
    void postita(string viesi);

private:
    Seuraaja *seuraajat = nullptr;
};

#endif // NOTIFIKAATTORI_H
