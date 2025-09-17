#include "CarNumber.h"
#include <vector>

int CarNumber::counter = 9998;
char CarNumber::first = 'A';
char CarNumber::second = 'Z';


int main()
{
    CarNumber::showStatic();
    cout << "===============================\n\n";


    vector<CarNumber> dia;// 0 
    for (int i = 0; i < 10; i++)
    {
        dia.push_back(CarNumber("AX"));
    }//10

    for (int i = 0; i < dia.size(); i++)
    {
        cout << dia[i].getNumber() << "\t";
        if ((i + 1) % 5 == 0) cout << endl;
    } 
    cout << endl;


    cout << "===============================\n\n";
    CarNumber::showStatic();
    cout << "===============================\n\n";
    cout << "===============================\n\n";


    string user = "";
    cout << "Input number: ";
    cin >> user;

    auto res = find_if(dia.begin(), dia.end(),
        [user](CarNumber a) { return a.getNumber() == user; });

    if (res == dia.end()) cout << "Not found!\n";
    else {
        dia.erase(res);
        dia.push_back(CarNumber("AX"));
    }

    for (int i = 0; i < dia.size(); i++)
    {
        cout << dia[i].getNumber() << "\t";
        if ((i + 1) % 5 == 0) cout << endl;
    }
    cout << endl;


}

 