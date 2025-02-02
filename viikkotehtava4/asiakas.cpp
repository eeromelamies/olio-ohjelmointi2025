#include "asiakas.h"
#include "luottotili.h"
#include "pankkitili.h"
#include <iostream>


using namespace std;


Asiakas::Asiakas(string n, double luottoraja) : nimi(n), kayttotili(n), luottotili(n,luottoraja)
{
    cout <<"pankkitili luotu: " << n << endl;
    cout<<"luottotili luotu: "<<n<< " luottoraja: " << luottoraja << endl;
    cout<<"asiakkuus luotu: "<<n<<endl;
}

string Asiakas::getNimi()
{
    return nimi;
}

void Asiakas::showSaldo()
{
    cout << "pankkitilin saldo: " << kayttotili.getBalance()<<endl;
    cout << "luottotilin saldo: "<< luottotili.getBalance()<<endl;
}

bool Asiakas::talletus(double k)
{
    return kayttotili.deposit(k);
}

bool Asiakas::nosto(double m)
{
     return kayttotili.withdraw(m);
}

bool Asiakas::luotonMaksu(double l)
{
    return luottotili.deposit(l);
}

bool Asiakas::luotonNosto(double l)
{
    return luottotili.withdraw(l);
}

bool Asiakas::tiliSiirto(double maara, Asiakas &tili)
{
    if (maara>kayttotili.getBalance()){
        cout<<"Virhe tilisiirrossa: varat liian pienet."<<endl;
        return false;
    } else if (maara < 0){
        cout<<"Virhe tilisiirrossa: negatiivinen summa." << endl;
        return false;
    } else {
        cout<<"Summa "<< maara <<" siirretaan tilille: "<<tili.getNimi()<<endl;
        kayttotili.withdraw(maara);

        cout<<tili.getNimi()<<" Pankkitili: ";
        tili.kayttotili.deposit(maara);

        return true;
    }
}
