#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    int Magicka;
    int Health;
    int Stamina;
    cout << "Please distribute your desired stats\n";
    cout << "Magicka: ";
    cin >> Magicka;
    cout << "Health: ";
    cin >> Health;
    cout << "Stamina: ";
    cin >> Stamina;

    for(Health = 0; Health < 200;Health++)
        cout << "Level " << Health + 2 << " Health" << endl;

    return 0;

}
