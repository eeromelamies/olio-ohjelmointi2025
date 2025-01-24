#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
//#include <string>
#include "chef.h"
#include <iostream>
//#include <cstdlib>
//#include <ctime>
using namespace std;

class ItalianChef : public Chef
{
public:
    ItalianChef(string);
    ~ItalianChef();
    bool askSecret(string, int, int);


private:
    int flour;
    int water;
    int makepizza(int, int);
    string password = "pizza";
};

#endif // ITALIANCHEF_H
