#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;



int game(int maxnum);
int arvaukset = 0;

int main()
{
    game(20);
    cout << arvaukset << " arvausta" << endl;

    return 0;
}

int game(int maxnum) {

    srand(time(NULL));
    int arvottuLuku = rand() % maxnum;
    int arvaus;

    do {
        cout << "Arvaa arvottu luku: ";
        cin >> arvaus;
        arvaukset++;

        if(arvaus > arvottuLuku) {
            cout << "Luku on pienempi" << endl;
        }
        else if(arvaus < arvottuLuku) {
            cout << "Luku on suurempi" << endl;
        }
        else if(arvaus == arvottuLuku) {
            cout << "Oikein arvattu!" << endl;
        }
    }
    while(arvaus != arvottuLuku);

    return arvaukset;
}
