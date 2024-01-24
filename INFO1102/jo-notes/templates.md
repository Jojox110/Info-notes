# Templates 

Des templates nous permet de générer des nouvelles signatures pour une fonction sans avoir besoin de la re-écrire à chaque fois.

## Comment faire plusieurs signatures sans templates

```cpp
#include <iostream>

using namespace std;

short addition(short un, short deux) {
    return un + deux;
}

long addition(long un, long deux) {
    return un + deux;
}

int addition(long un, long deux) {
    return un + deux;
}

```

## Comment faire ces mêmes fonctions avec un template
```cpp
#include <iostream>

template <typename T>
T addition(T un, T deux) {
    return un + deux;
}
```

Le template va accepter tous les types. Si on aimerait plus travailler avec des références, on peux ajouter le symbole d'address (&) dans les paramètre formel