public class Exercice5 {
    public static void bonus(Etudiant etudiant) {
    etudiant.ajouterNote(20);
}

    public static void main(String[] args) {

        // Étape 1
        Etudiant e1 = new Etudiant(
            "R130456789",
            "El Idrissi",
            "Amine"
        );

        e1.ajouterNote(12);

        Etudiant e2 = e1;

        e2.ajouterNote(15);

        System.out.println("Nombre de notes de e1 : "
                + e1.nombreNotes());

        System.out.println("Nombre de notes de e2 : "
                + e2.nombreNotes());

        System.out.println("e1 et e2 sont le même objet : "
                + (e1 == e2));


        // Étape 2
        Etudiant e3 = new Etudiant(e1);

        e3.ajouterNote(18);

        System.out.println("Nombre de notes de e1 : "
                + e1.nombreNotes());

        System.out.println("Nombre de notes de e3 : "
                + e3.nombreNotes());

        //etap 3 
        bonus(e1);

System.out.println("Nombre de notes de e1 : "
        + e1.nombreNotes());
    }
}