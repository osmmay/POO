import time

debut = time.perf_counter()

somme = 0
for i in range(10**7):
    somme += i % 7

fin = time.perf_counter()

duree_ms = (fin - debut) * 1000

print("Somme :", somme)
print("Durée :", duree_ms, "ms")
