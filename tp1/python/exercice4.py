from etudiant import Etudiant

e = Etudiant("R130456789", "El Idrissi", "Amine")

e.ajouter_note(12.5)
e.ajouter_note(9.0)
e.ajouter_note(14.0)

print(e.affichage())
print("Moyenne :", format(e.moyenne(), ".2f"))
print("admis :", "oui" if e.est_admis() else "non")

try:
    e.ajouter_note(25)
except ValueError as ex:
    print("Erreur :", ex)

print("\nAjout direct de 25 :")

e._notes.append(25)

print("Moyenne après ajout direct :", format(e.moyenne(), ".2f"))