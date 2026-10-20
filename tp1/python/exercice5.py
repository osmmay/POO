from etudiant import Etudiant
import copy

# Étape 1
e1 = Etudiant("R130456789", "El Idrissi", "Amine")

e1.ajouter_note(12)

e2 = e1

e2.ajouter_note(15) 
print("Nombre de notes de e1 :", e1.nombre_notes())
print("Nombre de notes de e2 :", e2.nombre_notes())
print("e1 et e2 sont le même objet :", e1 is e2)


# Étape 2
e3 = copy.deepcopy(e1)

e3.ajouter_note(18)

print("Nombre de notes de e1 :", e1.nombre_notes()) 
print("Nombre de notes de e3 :", e3.nombre_notes())

def bonus(etudiant):
    etudiant.ajouter_note(20)

bonus(e1)

print("Nombre de notes de e1 :", e1.nombre_notes())