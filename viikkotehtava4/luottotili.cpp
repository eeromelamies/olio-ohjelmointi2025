#include "luottotili.h"
#include <iostream>
#include "string"
using namespace std;

Luottotili::Luottotili(string k, double h):Pankkitili(k), luottoRaja(h)
{
    luottoRaja = - h;
    cout<<"Luottotili luotu "<<k<<":lle "<<"Luottoraja on "<<luottoRaja<<endl;

}

bool Luottotili::deposit(double d)
{
    if (d < 0){
        cout<<"virheellinen summa"<<endl;
        return false;
    }
    else if (d > 0){
        cout<<"Talletetaan odota hetki..."<<endl;
        saldo += d;
        return true;
    }

}

bool Luottotili::withdraw(double w)
{
    if (w < 0){
        cout<<"virheellinen summa"<<endl;
        return false;
    }
    else if (w < luottoRaja){
        cout<<"virheellinen summa"<<endl;
        return false;
    }
    else
        cout<<"Onnistui"<<endl;
    return true;
}
