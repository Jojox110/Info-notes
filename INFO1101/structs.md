# Structs
Des structs sont des types défénit par l'utilisateur. Aka, c'est nous qui créer le type.
```cpp
using namespace std;

struct unStruct { // Mettre les structs entre le using et la fonction main
    long x; // On peut choisir les types qui sont dans le struct
    long y; // x, y, z sont appeller des champs
    long z; // Les types n'ont pas besoin d'être le même, les structs sont hétérogène
}; // <- ne pas oublier le ;

int main() {
    // Les différentes initialisation
    unStruct x1 {1, 2, 3}; // 1 2 3
    unStruct x2 {1, 2};    // 1 2 0
    unStruct x3 {1};       // 1 0 0
    unStruct x4;           // 0 0 0

    // Le selecteur de champs
    cout << x1.x << endl; // 1
    x1.x = 5;
    cout << x1.x << endl; // 5
}
```

<br>

## Comment utiliser le struct qu'on défénit comme champs
```cpp
using namespace std;

struct unStruct {
    long x;
    long y;
    long z;
    unStruct *prochain_point; 
    /*
    On ne peux pas définir un champs unStruct normallement, car on n'a pas encore finit la définition de unStruct. Cependant, parce qu'un pointeur définit seulement l'address + le type et non l'initialization, on est capable de le faire ici. 

    À noter: on ne peut aussi pas faire une allocation dynamique avec new dans ce cas non plus.
    */
};

int main() {
    return 0;
}
```

<br>

## Trouver le type et grandeur d'un champs
```cpp
using namespace std;

struct unStruct {
    long x;
    long y;
    long z;
};

int main() {
    unStruct x {1, 2, 3};
    cout << typeid(x).name() << endl; // Pour trouver le type
    cout << sizeof(x) << endl; // Pour trouver la grandeur
}
```

<br>

## Comment défénir plusieurs structs en même temps
```cpp
using namespace std;

struct unStruct {
    long x;
    long y;
    long z;
};

int main() {
    unStruct x[1000];
    x[134].x = 10;
    cout << x[134].x << endl;
}
```

<br>

## Struct comme paramètre d'une fonction
```cpp
using namespace std;

struct uneDate() {
    short annees;
    short mois;
    short jours;
}

uneDate fonction() {
    uneDate date;
    date.annee = 1970;
    date.mois = 1;
    date.jour = 1;
    return date;
}
```