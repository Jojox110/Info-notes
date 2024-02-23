# Les classes

```cpp
#include <iostream>

using namespace std;

class unObjet {
private: // Directive d'accès
    long x; // Membre de donnée
    long y; // Membre de donnée

public: // Directive d'accès
    unObjet(long X, long Y) { // Constructeur
        x = X;
        y = Y;
    }

    ~unObjet() { // Destructeur
        cout << "Destructeur" << endl;
    }

    int addition() { // Méthode
        return x + y;
    }
};  

int main() {
    
}
```

## C'est quoi une classe
Des classes sont des définition d'objet qui contient des méthodes et des membres de données

## Pourquoi utilisé une classe
Des classes nous permet d'avoir une grande définition, alors le code qui l'utilise sera plus concis et ça nous aide à éviter des erreurs

## Les directive d'accès
### Private
La directive d'accès private (C'est aussi la directive d'accès qu'est utiliser par défaut) ne permet pas accès à ce qu'il contrôle en dehors de la classe

### Public
La directive d'accès publique permet l'accès à ce qu'il contrôle en dehors de la classe

### Protected
Inheritance stuff, not taught yet

## Constructeur
Un constructeur est une méthode qui n'a pas de type de retour et à le même nom que la classe. Les constructeur nous permets d'initialiser un objet du type de la classe avec des membre de données plus facilement

## Destructeur
Un destructeur est une méthode qui va être appeller lors de la déinstanciation de l'objet. Cette méthode nous donne une bonne opportunité de retourner de l'espace au monceaux

## Membres de données
Les "champs" de la classe

## Méthodes
Les "fonctions" de la classe

