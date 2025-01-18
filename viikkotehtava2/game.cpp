#include "game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

Game::Game() {

    cout<<"syota suurin luku "<<std::endl;
    cin>>maxNumber;
     cout<<"GAME CONSTRUCTOR: object initialized with "<<maxNumber<<" as maximum value"<<endl;
    cout<<"Arvaa luku 1 - "<<maxNumber<<std::endl;
    play();
}

Game::~Game()
{
    cout<<"OBJECT CLEAR"<<endl;
}

void Game::play()
{

    srand(time(0));
    randomNumber = rand() % maxNumber + 1;

    do{
        cin >> playerGuess;
        numOfGuesses++;


        if (playerGuess == randomNumber){
            printGameResult();
        }
        else if (playerGuess > randomNumber){
            cout<<"numero on pienempi! Arvaa uudestaan 1 - "<<maxNumber<<endl;
        }
        else{
            cout<<"numero on suurempi! Arvaa uudestaan 1 - "<<maxNumber<<endl;
        }
    }
    while (playerGuess != randomNumber);
}

void Game::printGameResult()
{
    cout<<"oikein! arvausten maara oli "<<numOfGuesses<<endl;
}

