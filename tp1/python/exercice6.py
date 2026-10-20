from etudiant import Etudiant

# Etape 1
a = Etudiant("R130456789", "El Idrissi", "Amine")

b = a

c = Etudiant("R130456789", "El Idrissi", "Amine")

d = Etudiant("R135551234", "El Idrissi", "Amine")


# Etape 2 : tests d'identite
print("a is b :", a is b)
print("a is c :", a is c)
print("a is d :", a is d)

# Tests d'egalite
print("a == b :", a == b)
print("a == c :", a == c)
print("a == d :", a == d)

# Ensemble
etudiants = {a, b, c, d}
print("Taille du set :", len(etudiants))
# Etape 4
chaine1 = "Bonjour"
chaine2 = "".join(["Bon", "jour"])

print("chaine1 is chaine2 :", chaine1 is chaine2)
print("chaine1 == chaine2 :", chaine1 == chaine2)