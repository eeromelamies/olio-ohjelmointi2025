#ifndef ASIAKAS_H
#define ASIAKAS_H
using namespace std;
#include <string>
#include "luottotili.h"
#include "pankkitili.h"

class Asiakas
{
public:
    Asiakas(string, double);
    string getNimi();
    void showSaldo();
    bool talletus(double maara);
    bool nosto(double maara);
    bool luotonMaksu(double maara);
    bool luotonNosto(double maara);
    bool tiliSiirto(double maara, Asiakas &vastaanottaja);

private:
    string nimi;
    Pankkitili kayttotili;
    Luottotili luottotili;


};

#endif // ASIAKAS_H
