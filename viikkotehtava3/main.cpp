#include <iostream>
#include <chef.h>
#include <italianchef.h>
using namespace std;

int main()
{

    Chef chef2("Kape Aihien");
    cout<<"chefs name is "<<chef2.getName()<<endl;
    ItalianChef chef1("Jyke Sukula");
    cout<<"italianChefs name is "<<chef1.getName()<<endl;

    chef1.makeSalad(15);
    chef1.makeSoup(6);

    string password;
    int waterinput;
    int flourinput;
    chef1.askSecret("pizza",waterinput,flourinput);


    return 0;

}
