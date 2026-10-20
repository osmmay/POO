import java.util.ArrayList;

public class Etudiant {
    public static final double SEUIL_VALIDATION = 10.0;

    private String cne;
    private String nom;
    private String prenom;
    private ArrayList<Double> notes;

    public Etudiant(String cne, String nom, String prenom) {
        this.cne = cne;
        this.nom = nom;
        this.prenom = prenom;
        this.notes = new ArrayList<>();
    }

    public void ajouterNote(double note) {
        if (note < 0 || note > 20) {
            throw new IllegalArgumentException("note invalide : " + note);
        }
        notes.add(note);
    }

    public int nombreNotes() {
        return notes.size();
    }

    public double moyenne() {
        double somme = 0;

        for (double note : notes) {
            somme += note;
        }

        return somme / notes.size();
    }

    public boolean estAdmis() {
        return moyenne() >= SEUIL_VALIDATION;
    }

    public String affichage() {
        return "Etudiant " + cne + " : " + prenom + " " + nom;
    }
    public Etudiant(Etudiant autre) {
    this.cne = autre.cne;
    this.nom = autre.nom;
    this.prenom = autre.prenom;
    this.notes = new ArrayList<>(autre.notes);
}
    @Override
    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }

        if (!(obj instanceof Etudiant)) {
            return false;
        }

        Etudiant autre = (Etudiant) obj;
        return this.cne.equals(autre.cne);
    }

    @Override
    public int hashCode() {
        return cne.hashCode();
    }
}