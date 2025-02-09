#include "notifikaattori.h"

Notifikaattori::Notifikaattori() {}

void Notifikaattori::lisaa(Seuraaja *s)
{
    cout << "Lisattiin seuraaja " << s->getNimi() << endl;
    s->next = seuraajat;
    seuraajat = s;

}

void Notifikaattori::poista(Seuraaja *s)
{
    cout << "Poistetaan seuraaja " << s->getNimi() << endl;

    Seuraaja *alku = seuraajat;
    if(seuraajat == s) {
        seuraajat = alku->next;
        return;
    }
    while(alku != nullptr) {
        if(alku->next == s) {
            alku->next = s->next;
            return;
        } else {
            alku = alku->next;
        }
    }
}

void Notifikaattori::tulosta()
{
    cout << "Seuraajalista: " << endl;
    Seuraaja *alku = seuraajat;
    while(alku != nullptr) {
        cout << "Seuraaja " << alku->getNimi() << endl;
        alku = alku->next;
        }
}

void Notifikaattori::postita(string viesti)
{
    Seuraaja *alku = seuraajat;
    while(alku != nullptr) {
        alku->paivitys(viesti);
        alku = alku->next;
        if(alku == nullptr) {
            cout << "Lista loppui" << endl;
        }
    }
}
