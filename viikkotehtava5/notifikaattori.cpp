#include "notifikaattori.h"

Notifikaattori::Notifikaattori()
{
    cout<<"Notifikaattori luotu"<<endl;
}

void Notifikaattori::lisaa(Seuraaja * S)
{
    if(seuraajat == nullptr)
    {
        seuraajat = S;
    }
    else
    {
        S->next=seuraajat;
        seuraajat=S;
    }
    cout<<"Notifikaattori lisaa seuraajan "<<S->getNimi()<<endl;
}

void Notifikaattori::poista(Seuraaja *ptr)
{
    Seuraaja * o = seuraajat;
    while (o->next!=nullptr)
    {
        if (o->next==ptr)
        {
            o->next=o->next->next;
        }
        o=o->next;
    }

}

void Notifikaattori::tulosta()
{
    cout<<("Notifikaattorin seuraajat:")<<endl;
    Seuraaja* E = seuraajat;
    while (E != nullptr) {
        cout << "Seuraaja " << E->getNimi() << endl;
        E = E->next;
    }
}


void Notifikaattori::postita(string e)
{
    cout << "Notifikaattori postaa viestin: "<<e<< endl;

    Seuraaja* E = seuraajat;
    while (E != nullptr) {
        E->paivitys(e);
        E = E->next;
    }
}

