#include "CarNumber.h"

CarNumber::CarNumber(string region)
{
    number = region + to_string(counter / 1000) + to_string(counter / 100 % 10) +
        to_string(counter / 10 % 10) + to_string(counter % 10) + first + second;

   
    counter++;
    if (counter > 9999) {
        counter = 1;
        second++;
        if (second > 'Z') {
            second = 'A';
            first++;
        }
    }
}

string CarNumber::getNumber() const
{
    return number;
}

void CarNumber::showStatic()
{
    cout << "Counter: " << counter << endl;
    cout << "Series:  " << first << second << endl;
}
