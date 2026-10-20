#include "etudiant.hpp"
#include <stdexcept>

Etudiant::Etudiant(string cne, string nom, string prenom) {
    this->cne = cne;
    this->nom = nom;
    this->prenom = prenom;
}

void Etudiant::ajouter_note(double note) {
    if (note < 0 || note > 20) {
        throw invalid_argument("note invalide");
    }

    notes.push_back(note);
}

int Etudiant::nombre_notes() {
    return notes.size();
}

double Etudiant::moyenne() {
    double somme = 0;

    for (double note : notes) {
        somme += note;
    }

    return somme / notes.size();
}

bool Etudiant::est_admis() {
    return moyenne() >= 10;
}

string Etudiant::affichage() {
    return "Etudiant " + cne + " : " + prenom + " " + nom;
}

bool Etudiant::operator==(const Etudiant& autre) const {
    return cne == autre.cne;
}