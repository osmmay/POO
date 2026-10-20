#ifndef ETUDIANT_HPP
#define ETUDIANT_HPP

#include <string>
#include <vector>

using namespace std;

class Etudiant {
private:
    string cne;
    string nom;
    string prenom;
    vector<double> notes;

public:
    Etudiant(string cne, string nom, string prenom);

    void ajouter_note(double note);
    int nombre_notes();
    double moyenne();
    bool est_admis();
    string affichage();
    bool operator==(const Etudiant& autre) const;
};

#endif