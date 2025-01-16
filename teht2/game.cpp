#include "game.h"

Game::Game(int mn) {

    maxNumber = mn;
    cout << "--Game konstruktori--" << endl;
}

Game::~Game()
{
    cout << "--Game destruktori--" << endl;
    cout << "--maxNumber " << maxNumber << endl;
}

void Game::play()
{
    cout << "--Game play--" << endl;

    srand(time(NULL));
    int randomNumber = rand() % maxNumber;
    int playerGuess;

    do {
        cout << "Arvaa arvottu luku: ";
        cin >> playerGuess;
        numOfGuesses++;

        if(playerGuess > randomNumber) {
            cout << "Luku on pienempi" << endl;
        }
        else if(playerGuess < randomNumber) {
            cout << "Luku on suurempi" << endl;
        }
        else if(playerGuess == randomNumber) {
            cout << "Oikein arvattu!" << endl;
            printGameResult();
        }
    }
    while(playerGuess != randomNumber);

}

void Game::printGameResult()
{
    cout << "--Game printGameResult--" << endl;
    cout << numOfGuesses << " arvausta" << endl;

}
