#include <iostream>
#include "etudiant.hpp"

using namespace std;

// Étape 3 : passage par valeur
void bonusValeur(Etudiant etudiant) {
    etudiant.ajouter_note(20);
}

// Étape 3 : passage par référence
void bonusReference(Etudiant& etudiant) {
    etudiant.ajouter_note(20);
}

int main() {

    // =========================
    // Étape 1
    // =========================

    Etudiant e1("R130456789", "El Idrissi", "Amine");

    e1.ajouter_note(12);

    Etudiant e2 = e1;

    e2.ajouter_note(15);

    cout << "Nombre de notes de e1 : "
         << e1.nombre_notes() << endl;

    cout << "Nombre de notes de e2 : "
         << e2.nombre_notes() << endl;


    // =========================
    // Étape 2
    // =========================

    Etudiant& e3 = e1;

    e3.ajouter_note(18);

    cout << "Nombre de notes de e1 : "
         << e1.nombre_notes() << endl;

    cout << "Nombre de notes de e3 : "
         << e3.nombre_notes() << endl;


    
    // Étape 3
    

    bonusValeur(e1);

    cout << "Apres passage par valeur : "
         << e1.nombre_notes() << endl;

    bonusReference(e1);

    cout << "Apres passage par reference : "
         << e1.nombre_notes() << endl;


    return 0;
}