#include "pankkitili.h"
#include "string"
using namespace std;
#include <iostream>

Pankkitili::Pankkitili(string name)
{
    omistaja = name;
    cout<<"pankkitili luotu "<<name<<":lle"<<endl;


}

double Pankkitili::getBalance()
{
    cout<<omistaja<<"n tililla on "<<saldo<<endl;
    return saldo;
}

bool Pankkitili::deposit(double d)
{
    if (d < 0){
        cout<<"virheellinen summa"<<endl;
        return false;
    }
    else if (d > 0){
        cout<<"Talletetaan odota hetki..."<<endl;
        cout<<d<<" on talletettu "<<omistaja<<"n tilille"<<endl;
            saldo += d;

        return true;
        }
}

bool Pankkitili::withdraw(double w)
{
    if (w > saldo){
        cout<<"virheellinen summa"<<endl;
        return false;
    }

    else{
        saldo = saldo - w;
        cout<<"mahtavaa"<<endl;
        cout<<w<<" on nostettu tililta"<<endl;
    return true;
    }
}
