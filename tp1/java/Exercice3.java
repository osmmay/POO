import java.util.ArrayList;

public class Exercice3 {

    public static double moyenne(ArrayList<Double> notes) {
        double somme = 0;

        for (double note : notes) {
            somme += note;
        }

        return somme / notes.size();
    }

    public static String mention(double m) {
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

    public static void main(String[] args) {

        ArrayList<Double> notes = new ArrayList<>();

        notes.add(12.5);
        notes.add(9.0);
        notes.add(14.0);
        notes.add(16.5);
    
    for (int i = 0; i < notes.size(); i++) {
        System.out.println("Note " + (i + 1) + " : " + notes.get(i));
    }

    double m = moyenne(notes);

System.out.printf("Moyenne : %.2f (%s)%n", m, mention(m));

notes.add(11.0);

m = moyenne(notes);
try {
    System.out.println(notes.get(10));
} catch (IndexOutOfBoundsException e) {
    System.out.println("Erreur : " + e.getMessage());
}
System.out.printf("%d notes, moyenne : %.2f%n", notes.size(), m);
}
    }
