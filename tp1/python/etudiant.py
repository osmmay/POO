class Etudiant:
    SEUIL_VALIDATION = 10.0

    def __init__(self, cne, nom, prenom):
        self._cne = cne
        self._nom = nom
        self._prenom = prenom
        self._notes = []

    def ajouter_note(self, note):
        if note < 0 or note > 20:
            raise ValueError("note invalide : " + str(note))
        self._notes.append(note)

    def nombre_notes(self):
        return len(self._notes)

    def moyenne(self):
        return sum(self._notes) / len(self._notes)

    def est_admis(self):
        return self.moyenne() >= self.SEUIL_VALIDATION

    def affichage(self):
        return "Etudiant " + self._cne + " : " + self._prenom + " " + self._nom

    def __eq__(self, autre):
        if not isinstance(autre, Etudiant):
            return False
        return self._cne == autre._cne

    def __hash__(self):
        return hash(self._cne)