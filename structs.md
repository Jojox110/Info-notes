### Structs
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

### Comment utiliser le struct qu'on défénit comme champs
```cpp
using namespace std;

struct unStruct {
    long x;
    long y;
    long z;
    unStruct *prochain_point; // Il doit être un pointeur
};

int main() {
    return 0;
}
```

### Trouver le type et grandeur d'un champs
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

### Comment défénir plusieurs structs en même temps
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