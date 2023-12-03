### La logique en arrière du tri par insertion
Le tri par insertion utilise un processus très similaire au tri à bulles. Au lieu de toujours passer en travers de tous valeurs non confirmer à chaque itératioon, on commence avec les deux première valeur, on les trie, et après on continue avec les trois prochaines valeurs, on les tries, et on continue jusqu'au dernier index.

Voir YT pour une explication visuelle ou le powerpoint à Julien dans les cours de mi-fin novembre.

### L'implementation du tri par insertion
Note: Ceci est ma copie du devoir 4, sa semble ok based off mes tests
```cpp
void TriPartielInsertion(long T[], long debut, long fin) {
    long position;
    for (int j = fin; j > debut; j--) {
        if (T[j] > T[j - 1]) {
            echanger(T[j], T[j - 1]);
        }
    }
}

void TriParInsertion(long T[], long debut, long fin) {
    long compteur = 0;
    for (int i = debut; i < fin - debut; i++) {
        TriPartielInsertion(T, debut, debut + 1 + compteur);
        compteur += 1;
    }
} 
```