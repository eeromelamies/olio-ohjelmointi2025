#include <iostream>
#include "pankkitili.h"
#include "luottotili.h"
#include "asiakas.h"

using namespace std;

int main()
{

    /*Pankkitili pankki1("jouni");
    Pankkitili pankki2("miko");

    pankki1.deposit(200);
    pankki1.getBalance();
    pankki1.withdraw(100);
    pankki1.getBalance();
    pankki2.deposit(1000);
    pankki2.getBalance();
    pankki2.withdraw(100);
    pankki2.getBalance();
    Luottotili luotto1("Jouni",3000);
    Luottotili luotto2("Miko",25000);*/

    /*Asiakas asiakas1("jope",1000);
    asiakas1.showSaldo();
    asiakas1.luotonMaksu(100);
    asiakas1.talletus(1000);
    asiakas1.luotonNosto(100);
    asiakas1.showSaldo();*/

    Asiakas asiakas1("esa", 2000);
    asiakas1.showSaldo();
    cout << "pankkitilitalletus: " << asiakas1.talletus(1000);
    cout << "pankkitilinosto: " << asiakas1.nosto(200);
    cout << "luottotilinosto: " << asiakas1.luotonNosto(1000);
    cout << "luottotilitallennus: "<< asiakas1.luotonMaksu(100);
    asiakas1.showSaldo();


    Asiakas asiakas2("Mikko", 2000);

    asiakas2.showSaldo();


    cout << "tilin nimi: " << asiakas2.getNimi() << endl;
    cout << "tilisiirto henkilolta: " << asiakas1.getNimi() << " henkilolle " << asiakas2.getNimi() << endl;
    asiakas1.tiliSiirto(200, asiakas2);

    cout << "tilin nimi: " << asiakas2.getNimi() << endl;
    asiakas2.showSaldo();


    return 0;
}
