public class Exercice7 {
    public static void main(String[] args) {
        long debut = System.nanoTime();

        long somme = 0;

        for (int i = 0; i < 10_000_000; i++) {
            somme += i % 7;
        }

        long fin = System.nanoTime();
        double dureeMs = (fin - debut) / 1_000_000.0;

        System.out.println("Somme : " + somme);
        System.out.println("Duree : " + dureeMs + " ms");
    }
}