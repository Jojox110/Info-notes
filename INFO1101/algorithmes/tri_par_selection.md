### La logique en arrière du tri par sélection
Le tri par sélection consiste de trouver la valeur maximum qui n'est pas guarentie d'être à la bonne place et l'ajouté à l'index le plus haut qui n'est pas guarentie d'être à la bonne place

### L'implementation du tri par sélection
Note: Ceci est ma copie du devoir 4, sa semble ok based off mes tests
```cpp
long trouverIndiceDuMaximum(long T[], long debut, long fin) {
    long max = debut;
    for (int i = debut; i <= fin - debut; i++) {
        if (T[i] < T[max]) {
            max = i;
        }
    }
    return max;
}

void TriParSelection(long T[], long debut, long fin) {
    for (int i = debut; i < fin - debut; i++) {
        long indice = trouverIndiceDuMaximum(T, debut, fin - i);
        echanger(T[indice], T[fin - i]);
    }
}
```