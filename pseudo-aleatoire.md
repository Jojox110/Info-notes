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