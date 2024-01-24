# Typedef

## C'est quoi un typedef

Un typedef est une un outil qui nous permet de créer un nouveau type, avec le nom qu'on choisit, qui représente le type voulu. C'est utiliser pour écrire du code qu'est plus lisible et facile à maintenenir, surtout si quelqu'un d'autre doit lire ton code.

Exemple:
```cpp
typedef int compteur_t; // Finir le nom d'un type créer avec un typedef par _t est une convention
typedef string listesDeMots[50];
```

## Comment utiliser un typedef
```cpp
#include <iostream>

using namespace std;

typedef short sudoku_t[9][9]; 
int main() {
    sudoku_t sudoku;
    cout << sudoku[0][0] << endl; // 0

    sudoku[2][2] = 2;
    cout << sudoku[2][2] << endl; // 2
}
```
Les types définit avec typedef suit les même zones de visibilité qu'une variable
