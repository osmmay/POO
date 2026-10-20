#include <iostream>
#include <chrono>
using namespace std;
using namespace chrono;

int main() {
    auto debut = steady_clock::now();

    long long somme = 0;
    for (int i = 0; i < 10'000'000; i++) {
        somme += i % 7;
    }

    auto fin = steady_clock::now();
    double dureeMs = duration<double, milli>(fin - debut).count();

    cout << "Somme : " << somme << endl;
    cout << "Duree : " << dureeMs << " ms" << endl;

    return 0;
}