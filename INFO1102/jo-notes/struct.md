### Note: Voir les notes de struct de INFO1101 pour les notions de base

# Struct

## Struct anonyme

```cpp
#include <iostream>

using namespace std;

struct unStruct {
    unsigned short US;
    struct {
        unsigned long UL;
        long L;
    };
};

union unUnion {
    unsigned short US;
    struct {
        unsigned long UL;
        long L;
    };
};

int main() {
    unStruct x;
    x.L = 10;
    x.UL = 10;
    x.US = 10;

    unUnion y;
    y.L = 10;
    y.UL = 10;
    y.US = 10;
}
```

On a accès au cahmps des structs anonyme avec un selecteur de champs (.)

## Struct et champs de bit
 
Les champs de bits nous permet de spécifier combien de bits que chaque champs devrait prendre.

```cpp
#include <iostream>

using namespace std;

struct unStruct {
    unsigned short bit1 : 1;
    unsigned short bit2 : 1;
    unsigned short bit3 : 1;
    unsigned short bit4 : 1;
}; // <- Ne pas oublier le ;
```

Faire attention à l'ordre des champs pour assurer de ne pas avoir de gaspille de bits.

Testing: TODO