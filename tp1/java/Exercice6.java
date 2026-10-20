
import java.util.HashSet;
import java.util.Set;

public class Exercice6 {

    public static void main(String[] args) {

        // Etape 1
        Etudiant a = new Etudiant(
            "R130456789", "El Idrissi", "Amine"
        );

        Etudiant b = a;

        Etudiant c = new Etudiant(
            "R130456789", "El Idrissi", "Amine"
        );

        Etudiant d = new Etudiant(
            "R135551234", "El Idrissi", "Amine"
        );

        // Etape 2 : tests d'identite
        System.out.println("a == b : " + (a == b));
        System.out.println("a == c : " + (a == c));
        System.out.println("a == d : " + (a == d));

        // Tests d'egalite
        System.out.println("a.equals(b) : " + a.equals(b));
        System.out.println("a.equals(c) : " + a.equals(c));
        System.out.println("a.equals(d) : " + a.equals(d));

        // Ensemble
        Set<Etudiant> etudiants = new HashSet<>();
        etudiants.add(a);
        etudiants.add(b);
        etudiants.add(c);
        etudiants.add(d);

        System.out.println("Taille du HashSet : "
                           + etudiants.size());
        // Etape 4
String chaine1 = "Bonjour";
String chaine2 = new String("Bonjour");

System.out.println("chaine1 == chaine2 : "
                   + (chaine1 == chaine2));

System.out.println("chaine1.equals(chaine2) : "
                   + chaine1.equals(chaine2));
    }
}
