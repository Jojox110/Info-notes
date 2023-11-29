## Complexiter de temps d'un algorithme
Les complexiter de temps d'un algorithme serves à décrire la performance d'un algorithme quand la grandeur des données d'entrée change\
La variable N sers à décrire la grandeur des données d'entrée

### Temps constant (1, CST)
Un algorithme à temps constant ne dépend pas de du montant de donnée d'entrée\
Un exemple simple:
```cpp
int func(int[10] arr) {
    return arr[0]; // On aurait pu mettre un tableau de grandeur 10 million so on voudrait et sa n'aurait pas de différence
}
```

### Temps linéaire (aN)
Un algorithme à temps linéaire dépend du montant de données\
Un exemple simple:
```cpp
int sum(int[N] arr) {
    long sum = 0;
    for (int i = 0; i < N; i++) { // La for loop va se faire répéter N montant de fois
        sum += arr[i];
    }
    return sum;
}
```

### Temps quadratique (aN^2, Quad)
Un algorithme à temps quadratique dépend du montant de données au carrée, alors N * N données
Un exemple simple:
```cpp
int matrice(int[N][M] grille, int N, int M) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; i < M; i++) {
            ...
        }
    }
}
```

Trie a bulle, Trie à selection, Trie d'insertion sont aN^2

### Chepas quoi mettre comme exemple pour les prochaines 4 temps

### Temps cubique (aN^3, Cub)
Un algorithme à temps cubique dépend du montant de données au cube, alors N * N * N données

### Temps quartique (aN^4, Quart)
Un algorithme à temps quartique dépend du montant de données à la 4, alors N * N * N * N données

### Temps pentique (aN^5, Pent)
Un algorithme à temps pentique dépend du montant de données à la 5, alors N * N * N * N  * N données

### Temps exponentiel (a2^N, Exp)
Un algorithme à temps exponentiel dépend du montant de données à la N, alors 2 * 2 * 2 ...

### Temps logarithmique (aLogN)
Un algorithme à temps logarithmique dépend du montant de données à la LogN\
Un exemple est binary search

### Temps surlinéaire (aNLogN)
Un algorithme à temps surlinéaire dépend du montant de données à la N * LogN\
Exemple: Quick sort, Merge sort, ...