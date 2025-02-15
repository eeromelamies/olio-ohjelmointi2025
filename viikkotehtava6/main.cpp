#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include "student.h"
using namespace std;

int main ()
{
    int selection =0;
    vector<Student>studentList;
    int ika;
    string nimi;

    do
    {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

        switch(selection)
        {
        case 0:


            cout << "Anna opiskelijan ika ja nimi: ";
            cin >> ika;
            cin.ignore();
            getline(cin, nimi);
            studentList.emplace_back(nimi, ika);



            // Kysy käyttäjältä uuden opiskelijan nimi ja ikä
            // Lisää uusi student StudentList vektoriin.
            break;
        case 1:
            // Tulosta StudentList vektorin kaikkien opiskelijoiden
            // nimet.
            for (auto &Opiskelija: studentList) {
                    Opiskelija.printStudentInfo();
            }
            break;

        case 2:


            // Järjestä StudentList vektorin Student oliot nimen mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat

            sort(studentList.begin(), studentList.end(), [](Student& a, Student& b) {
                return a.getName() < b.getName(); // Aakkosjärjestys
            });

            for (auto &opp : studentList){
                opp.printStudentInfo();
            }


            break;

        case 3:

            sort(studentList.begin(), studentList.end(), [](Student& a, Student& b) {
                return a.getAge() < b.getAge(); // Aakkosjärjestys
            });
            for (auto &opp : studentList){
                opp.printStudentInfo();
            }


            // Järjestä StudentList vektorin Student oliot iän mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            break;
        case 4:{
            cin.ignore(); // Poistaa edellisen syötteen jäänteet
            cout << "Anna etsittavan opiskelijan nimi: ";
            getline(cin, nimi);

            auto it = find_if(studentList.begin(), studentList.end(), [&](Student& a) {
                return nimi == a.getName();
            });

            if (it != studentList.end()) {
                cout << "Nimi loytyi listalta:" << endl;
                it->printStudentInfo();
            }
            else {
                cout << "nimeä ei loytynyt." << endl;
            }

            // Kysy käyttäjältä opiskelijan nimi
            // Etsi studentListan opiskelijoista algoritmikirjaston
            // find_if funktion avulla löytyykö käyttäjän antamaa nimeä
            // listalta. Jos löytyy, niin tulosta opiskelijan tiedot.
            break;
        }
        default:
            cout<< "Wrong selection, stopping..."<<endl;

            break;


    }
}while(selection < 5);

return 0;
}
