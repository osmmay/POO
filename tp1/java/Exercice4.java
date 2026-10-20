public class Exercice4 {
    public static void main(String[] args) {

        Etudiant e = new Etudiant(
            "R130456789",
            "El Idrissi",
            "Amine"
        );

        e.ajouterNote(12.5);
        e.ajouterNote(9.0);
        e.ajouterNote(14.0);

        System.out.println(e.affichage());
        System.out.printf("Moyenne : %.2f%n", e.moyenne());
        System.out.println("admis : " + (e.estAdmis() ? "oui" : "non"));

        try {
            e.ajouterNote(25);
        } catch (IllegalArgumentException ex) {
            System.out.println("Erreur : " + ex.getMessage());
        }
    }
}