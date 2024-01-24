# Énumérations
Les énumérations (enum) nous permet ce créer des nouveaux littéraux

## Comment utilisé un énumération
```cpp
#include <iostream>

using namespace std;

enum litteraux_t { litteraux_1, litteraux_2, litteraux_3 }; 

litteraux_t fonction(int nombre) {
    if (nombre == 1) {
        return litteraux_1;
    }
    else if (nombre == 2) {
        return litteraux_2;
    }
    else {
        return litteraux_3;
    }
}

int main() {
    litteraux_t litteraux = fonction(2);
    cout << litteraux << endl; // 1
    cout << litteraux_2 << endl; // 1
}
```

Note: Les énumérations ont le même système que des variables pour les zones de visibilité. On peut le définir entre les 

### Utiliser les littéraux définit dans l'énumération
Si on aimerait définir une variable qui contient un littéraux définit par l'énumération, on peut mettre l'énumération comme le type de la variable. 

Si on aimerait définir une fonction qui retourne un littéraux définit par l'énumération, on peut mettre l'énumération come le type de retour de la fonction.

Voir le bloc de code pour un exemple

### Les valeurs défaut
La valeur d'un littéraux définit dans un énumération est la valeur du littéraux précédent + 1. Si c'est le premier littéraux définit dans l'énumération, sa valeur sera 0 ou la valeur qu'on lui donnée.

```cpp

enum litteraux_t { litteraux_1, litteraux_2, litteraux_3 };
// { 0, 1, 2 } sont les valeurs

enum litteraux_t { litteraux_1, litteraux_2 = 10, litteraux_3 };
// {0, 10, 11 } sont les valeurs

enum litteraux_t { litteraux_1 = -5, litteraux_2 = 10, litteraux_3 };
// { -5, 10, 11 } sont les valeurs

enum litteraux_t { litteraux_1 = -5, litteraux_2, litteraux_3 };
// {-5, -4, -3 } sont les valeurs
```

C'est aussi possible de laisser ton curseur par dessus n'importe quelle littéraux dans un énumération pour voir la valeur dans des fichiers cpp.

Note: on peut seulement mettre un entier comme la valeur d'un énumération (un char fonctionne quand-même, il utilisera la valeur ASCII du caractère, ex: 'a' = 97). Si on essaye de mettre n'importe quelle autre type de variable dans un énumération, on aura un erreur.
