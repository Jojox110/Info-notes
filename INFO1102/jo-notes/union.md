### Note: Voir les notes des unions de INFO1101 pour les notions de base

# Union

## Union anonyme

```cpp
#include <iostream>

using namespace std;

struct unStruct {
    unsigned short US;
    union {
        unsigned long UL;
        long L;
    };
};

union unUnion {
    unsigned short US;
    union {
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

Quand on définit un union anonyme, on a accès à tous ces champs avec seulement un selecteur de champs (.)

## Union et champs de bit

C'est possible de définir un champs de bits dans un unions, mais il a aucun effet sur le compilateur g++.

TODO: test sur le compilateur c++ Visual Studio