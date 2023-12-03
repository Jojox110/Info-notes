### Les nombres pseudo-aléatoire
Les nombres pseudo-aléatoire sont des nombres généré par un algorithme. Parce que c'est généré par un algorithme, on dit que c'est pseudo-aléatoire

### srand
La méthode srand est utilisé pour donné un "seed" à l'algorithme, ce qui veux dire c'est le nombre qui va être utilisé pour généré les nombres. Pour le rendre plus aléatoire, on peut utiliser time(NULL). Cela représente le "epoch time" ou le montant de seconde depuis 00/00/1970 00:00:00. On doit utiliser le include ctime pour avoir cette méthode.

```cpp
#include <ctime>

int main() {
    srand(time(NULL));
}
```

### rand
La fonction rand est celle qui génère la valeur pseudo-aléatoire initiale. Sa va générer une valeur entière entre [0, 32767] sur le compilateur de Visual Studio et entre [0, INT32_MAX] sur le compilateur de Linux.

### Les nombres pseudo-aléatoire entier
```cpp
int main() {
    // Exemple pour générer un lancé de dé
    short resultat = 1 + rand() % 6;
    /*
    Pour générer des nombres entiers, on peut utiliser le format suivant:
    resultat = rand() & (max - min + 1) + min
    */
}
```

### Les nombres pseudo-aléatoire réel
```cpp
int main() {
    // Exemple pour générer un mombre réel entre -1 et 1
    double resultats = 1 - 2 * (double)rand() / RAND_MAX
    /*
    Note importante, ici j'ai utiliser RAND_MAX, mais Julien utilise toujours rand()/32767.0 pour [0.0, 1.0] ou rand()/32768.0 pour [0.0, 1.0[. 
    Dans VS, rand ne peut etre que 32676 valeur differente, aka la valeur maximal d'un signed short.
    Sur Linux, rand peut etre jusqu'a la valeur d'un signed int32
    */
}
```

### Générer des grand nombres aléatoire
```cpp
unsigned long long aleatoireGrand(short nombreDeBits )
{
    unsigned long long somme = 0;
    short base = 2; // Ceci est au choix, changer au besoin
    for (long K = 1; K <= nombreDeBits; K++)
    {
        somme = somme * base + rand() % base;
        cout << "Somme: " << somme << endl;
    }

    return somme;
}
```

Exemple avec la base 10 avec 5 chiffres décimaux et srand(42):

Durant la première itération:\
somme = 0\
somme = somme * 10 + rand() % 10 (aléatoire entre 0 et 9)\
somme = 0 + 6\
somme = 60

Durant la deuxième itération:\
somme = somme * 10 + rand() % 10\
somme = 60 + 0\
somme = 60

Durant la troisième itération:\
somme = somme * 10 + rand() % 10\
somme = 600 + 1\
somme = 601

Durant la quatrième itération:\
somme = somme * 10 + rand() % 10\
somme = 6010 + 1\
somme = 6011


Durant la cinquième itération:\
somme = somme * 10 + rand() % 10\
somme = 60110 + 2\
somme = 60112

Dans l'exemple on peut voir que chaque fois qu'on fait le calcul somme * 10, on ajoute un extra 0 au nombre de l'itération précédent. C'est comme aller de 5x10^5 à 5x10^6 et ajouter le résultat de rand après.

<br><br>

Exemple avec la base 2 avec 5 chiffre binaire et srand(42):

Première itération:\
somme = 0\
somme = somme * 2 + rand() % 2 (soit 0 ou 1)\
somme = 0 + 0\
somme = 0

Deuxième itération:\
somme = somme * 2 + rand() % 2\
somme = 0 + 0\
somme = 0

Troisième itération:\
somme = somme * 2 + rand() % 2\
somme = 0 + 1\
somme = 1

Quatrième itération:\
somme = somme * 2 + rand() % 2\
somme = 2 * 1 + 1\
somme = 3

Cinquième itération:\
somme = somme * 2 + rand() % 2\
somme = 3 * 2 + 0\
somme = 6

Dans ces itérations, on voit un concept similaire au exemples qu'utilisait une base 10. Chaque nombre est multiplier par deux et après on ajoute la valeur de rand, alors soit 0 ou 1.

Ici est une visualization de ce qui ce passe si on travail uniquement en binaire avec somme = 0 au début (encore srand(42)):

somme = somme * 2 + rand() % 2 = 00 (0 + 0)\
somme = somme * 2 + rand() % 2 = 000 (0 + 0 + 0)\
somme = somme * 2 + rand() % 2 = 1000 (1 + 0 + 0 + 0)\
somme = somme * 2 + rand() % 2 = 11000 (1 + 2 + 0 + 0 + 0)\
somme = somme * 2 + rand() % 2 = 011000 (0 + 2 + 4 + 0 + 0 + 0)

Ici on peux voir que chaque fois on multiplie somme par deux, on ajoute la valeur de rand() % 2 au début du chiffre binaire.

### Brasser un tableau (changer les valeurs de places aléatoirement, lab 28nov Q5)
```cpp
int main() {
    srand(42);
    short T[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    short temporaire;
    short indice_aleatoire;

    for (int i = 0; i < 1000; i++) {
        // La même logique que la fonction échanger
        temporaire = T[i % 10];
        indice_aleatoire = rand() % 10;
        T[i % 10] = T[indice_aleatoire];
        T[indice_aleatoire] = temporaire;
    }

    for (int i = 0; i < 10; i++) {
        cout << T[i] << " ";
    }
    cout << endl;
    /*
    {9, 8, 5, 7, 3, 6, 10, 4, 2, 1}
    */
}
```

### Sélectionner une valeur aléatoire d'un tableau (aléatoire non-contigu)
```cpp
int main() {
    srand(42);
    short T[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < 5; i++) {
        // Rappel: rand() % 10 est l'interval [0, 9]
        cout << T[rand() % 10] << endl;
    }
    /*
    7, 1, 2, 2, 3
    */
}
```
### Distribution non-uniforme aléatoire (aléatoireTriangulaire, lab 28nov Q3)
```cpp
int main() {
    srand(42);
    short T[10] = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};
    for (int i = 0; i < 10; i++) {
        cout << T[rand() % 10] << endl;
    }
    /*
    4, 1, 2, 2, 2, 4, 2, 1, 3, 3
    */
}
```