#include "seuraaja.h"
#include <iostream>
using namespace std;

Seuraaja::Seuraaja(string n):nimi(n)
{
    cout<<"luodaan seuraaja "<<n<<endl;
}

string Seuraaja::getNimi()
{
    return nimi;

}

void Seuraaja::paivitys(string A)
{
    cout<<"Seuraaja "<<nimi<<" sai viestin "<<A<<endl;
}
