#include <iostream>
#include "seuraaja.h"
#include "notifikaattori.h"

using namespace std;

int main()
{
    Seuraaja *A = new Seuraaja("A");
    Seuraaja *B = new Seuraaja("B");
    Seuraaja *C = new Seuraaja("C");
    Seuraaja *D = new Seuraaja("D");
    Seuraaja *E = new Seuraaja("E");
    Seuraaja *F = new Seuraaja("F");

    Notifikaattori *N = new Notifikaattori();

    cout << endl;

    N->lisaa(A);
    N->lisaa(B);
    N->lisaa(C);
    N->lisaa(D);
    N->lisaa(E);
    N->lisaa(F);

    cout << endl;

    N->tulosta();

    cout << endl;

    N->postita("Eka viesti");

    cout << endl;

    N->poista(B);
    N->poista(F);

    cout << endl;

    N->tulosta();

    cout << endl;

    N->postita("Toka viesti");

    delete A;
    delete B;
    delete C;
    delete D;
    delete E;
    delete F;
    delete N;

    return 0;
}
