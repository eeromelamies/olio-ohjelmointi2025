#include "chef.h"
//#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


Chef::Chef(string k):chefName(k)
{

    cout<<"chef created"<<endl;

}

Chef::~Chef()
{
    cout<<"chef destructed"<<endl;
}

string Chef::getName()
{
    return chefName;
}

int Chef::makeSalad(int salad)
{
    int portions = salad/5;
    if (portions >=1){
    cout<<"Kokki voi valmistaa "<<portions<<" annosta salaattia"<<endl;
    return portions;
    }
}

int Chef::makeSoup(int soup)
{
    int portions = soup/3;
    if (portions >=1){
    cout<<"Kokki voi valmistaa "<<portions<<" annosta salaattia"<<endl;
    return portions;
    }
}
