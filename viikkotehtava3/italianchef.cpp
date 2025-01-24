#include "italianchef.h"
#include <string>
#include <compare>
using namespace std;



ItalianChef::ItalianChef(string k) : Chef(k), flour(0), water(0)
{
    cout << "Italian Chef created" << endl;
}

ItalianChef::~ItalianChef()
{
    cout << "Italian Chef destructed" << endl;
}

bool ItalianChef::askSecret(string p, int j, int v)
{


    if (p == password) {
        cout<<"Password correct"<<endl;
        makepizza(j, v);
        return true;
    }
    else {
        cout<<"Wrong password"<<endl;
        return false;
    }
}

int ItalianChef::makepizza(int flour, int water)
{
    int portion = (flour/5, water/5);
    cout<<"pizza on valmis"<<endl;
}
