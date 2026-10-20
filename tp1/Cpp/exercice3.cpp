#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

// Étape 1 : calculer la moyenne
double moyenne(const vector<double>& notes) {
    double somme = 0;

    for (double note : notes) {
        somme += note;
    }

    return somme / notes.size();
}

// Étape 1 : donner la mention
string mention(double m) {
    if (m >= 16) {
        return "Tres bien";
    } else if (m >= 14) {
        return "Bien";
    } else if (m >= 12) {
        return "Assez bien";
    } else if (m >= 10) {
        return "Passable";
    } else {
        return "Ajourne";
    }
}

int main() {

    // Étape 2 : créer la collection de notes
    vector<double> notes = {12.5, 9.0, 14.0, 16.5};

    // Étape 3 : afficher les notes
    for (size_t i = 0; i < notes.size(); i++) {
        cout << "Note " << i + 1 << " : " << notes[i] << endl;
    }

    // Calcul et affichage de la moyenne
    double m = moyenne(notes);

    cout << fixed << setprecision(2);
    cout << "Moyenne : " << m << " (" << mention(m) << ")" << endl;

    // Étape 4 : ajouter une nouvelle note
    notes.push_back(11.0);

    m = moyenne(notes);

    cout << notes.size() << " notes, moyenne : " << m << endl;

    // Étape 5 : accès avec at()
    try {
        cout << "Avec at() : " << notes.at(10) << endl;
    }
    catch (const out_of_range& e) {
        cout << "Erreur avec at() : " << e.what() << endl;
    }

    // Étape 5 : accès avec []
    cout << "Avec [] : " << notes[10] << endl;

    return 0;
}