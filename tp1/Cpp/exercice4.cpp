#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "etudiant.hpp"

using namespace std;

int main() {

    Etudiant e("R130456789", "El Idrissi", "Amine");

    e.ajouter_note(12.5);
    e.ajouter_note(9.0);
    e.ajouter_note(14.0);

    cout << e.affichage() << endl;

    cout << fixed << setprecision(2);
    cout << "Moyenne : " << e.moyenne() << endl;

    cout << "admis : " << (e.est_admis() ? "oui" : "non") << endl;

    try {
        e.ajouter_note(25);
    }
    catch (const invalid_argument& ex) {
        cout << "Erreur : " << ex.what() << endl;
    }

    return 0;
}