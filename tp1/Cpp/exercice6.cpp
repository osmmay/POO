#include <iostream>
#include "etudiant.hpp"

using namespace std;

int main() {

    // Etape 1
    Etudiant a("R130456789", "El Idrissi", "Amine");

    Etudiant& b = a;

    Etudiant c("R130456789", "El Idrissi", "Amine");

    Etudiant d("R135551234", "El Idrissi", "Amine");

    // Etape 2 : tests d'identite
    cout << "a et b : " << (&a == &b) << endl;
    cout << "a et c : " << (&a == &c) << endl;
    cout << "a et d : " << (&a == &d) << endl;
    //etap 3 
        cout << boolalpha;

    cout << "a == b : " << (a == b) << endl;
    cout << "a == c : " << (a == c) << endl;
    cout << "a == d : " << (a == d) << endl;

    // Etape 4
string chaine1 = "Bonjour";
string chaine2("Bonjour");

cout << "chaine1 == chaine2 : "
     << (chaine1 == chaine2) << endl;
    return 0;
}