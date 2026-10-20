#include <iostream>
#include <string>

using namespace std;

int main() {
    int nombreEtudiants = 32;
    //int nombreEtudiants = "trente-deux";
    double moyenne = 12.75;
    string filiere = "SD-RCC";
    bool admis = true;

    cout << nombreEtudiants << " "
         << moyenne << " "
         << filiere << " "
         << admis << endl;
cout << "7/2 = " << (7 / 2) << endl;
cout << "7.0/2 = " << (7.0 / 2) << endl;
cout << "7%2 = " << (7 % 2) << endl;
int maximum = 2147483647;
int resultat = maximum + 1;

cout << "Maximum 32 bits = " << maximum << endl;
cout << "Maximum + 1 = " << resultat << endl;

long long maximum64 = 2147483647LL;
long long resultat64 = maximum64 + 1;

cout << "64 bits = " << resultat64 << endl;

cout << admis << endl;

cout << boolalpha;
cout << admis << endl;

return 0;
}