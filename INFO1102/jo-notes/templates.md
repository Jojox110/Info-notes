# Templates 

Des templates nous permet de générer des nouvelles signatures pour une fonction sans avoir besoin de la re-écrire à chaque fois.

Note: Les templates sont pour la performance humaine et non la performance du compilateur

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

int addition(int un, int deux) {
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

## Les templates et le compilateur
Si on fait une appel à une fonction et qu'on a pas de signatures probables qui sont définit, mais qu'on a un modèle de fonction approprié définit, le compilateur va générer la fonction demandé avec ce modèle de fonctions

Note: C'est possible d'avoir une erreur d'ambiguité avec les modèles de fonctions si plus qu'un est valide pour ce qu'on veux

## Templates avec plus qu'un typename
C'est possible de définir un template avec plus qu'un typename

```cpp
template <typename type1, typename type2> // ...
struct unStruct {
    type1 A;
    type2 B;
    // ...
};
```
 