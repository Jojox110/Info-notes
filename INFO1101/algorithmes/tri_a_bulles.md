### La logique en arrière du tri à bulles
Le tri à bulle à comme but d'amener les numéros les plus grands vers la fin du tableau. Pour faire cela, on a besoin de itérer autour de toutes le valeurs (avec l'exception des valeurs qu'on a déjà placé à la bonne place) et comparer chaque valeur avec la valeur qui la suit. Si la valeur en bas est plus grande, on échange les deux valeurs pour que la valeur la plus grande soit à l'indice la plus grande. On repète se processus jusqu'à temps qu'on a trier toutes les valeurs.

Voir YT pour des explications visuels ou dans les powerpoints à julien dans mi-fin novembre.

### L'implementation du tri à bulles 
Note: Ceci c'est ma copie du code de mon devoir 4, sa semble ok based off mes tests
```cpp
bool triPartielBulles(long T[], long debut, long fin) {
    bool trier = true;
    for (int i = debut; i <= fin - debut - 1; i++) {
        if (T[i] < T[i + 1]) {
            trier = false;
            echanger(T[i], T[i + 1]);
        }
    }
    return trier;
}

void TriABulles(long T[], long debut, long fin) {
    long compteur = 0;
    for (int i = debut; i < fin - debut; i++) {
        bool trier = triPartielBulles(T, debut, fin - compteur);
        if (trier) {
            break;
        }
        compteur += 1;
    }
}
```
