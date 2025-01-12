#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int game(int maxnum);

int main()
{
    int ylaraja;
    cout<<"syota suurin luku "<<std::endl;
    cin>>ylaraja;
    cout<<"Arvaa luku 1 - "<<ylaraja<<std::endl;
    game(ylaraja);

    return 0;
}
int game(int maxnum)
{

    int arvattu;
    int yritykset;
    int randomNum;
    int ylaraja;
    int arvaukset;


    srand(time(0));
    randomNum = rand() % maxnum + 1;

    do{
        cin >> arvattu;
        arvaukset++;


        if (arvattu == randomNum){
            cout<<"oikein! arvausten maara oli "<<arvaukset<<endl;
        }
        else if (arvattu > randomNum){
            cout<<"numero on pienempi! Arvaa uudestaan. "<<endl;
        }
        else{
            cout<<"numero on suurempi! Arvaa uudestaan. "<<endl;
        }
    }
    while (arvattu != randomNum);
    return arvaukset;
}

