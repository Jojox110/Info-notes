## Comment faire une demande d'allocation dynamique au monceaux
```cpp
struct unStruct {
    long x;
};

int main() {
    unStruct *valeur = new unStruct;
    /*
    La variable qui accompagne l'allocation dynamique doit être un pointeur.
    Quand on utilise "new", le compilateur nous retourne avec une adresse dans le heap
    */

    delete valeur; // Retourner l'espace au heap
}
```

Note: C'est quand-même possible d'essayer de prendre la valeur d'un pointeur qui pointe à une allocation dynamique qui a été effacer, ça va donner une valeur arbritaire (cette valeur change chaque fois qu'on re-exécute le programme) et non une erreur.

<br>

## Pourquoi faire l'allocation dynamique
L'allocation dynamique est utilisé quand on doit créer des nouvelles objets durant l'exécution du programme.\
Ceci va probablement être plus important quand on commence à parler au sujet de la programmation orientée objet

<br>

## Erreur reliée à l'allocation dynamique (Pas enseigner en classe je pense?)
- Si on essaye de faire une allocation dynamique, mais le heap est plein, le compilateur va nous retourner une erreur et l'exécution du programme sera arrêter
- On peut utiliser une methode pour arrêter le programme de s'arrêter

```cpp
#include <new>

int main() {
    int *val = new (nothrow) int; // nothrow fait partir du #include <new>
    if (val == nullptr) {
        ...
    }
}
```

- Utiliser des exceptions (TODO, matière plus avancer)

## Liens utile
- https://cplusplus.com/doc/tutorial/dynamic/
