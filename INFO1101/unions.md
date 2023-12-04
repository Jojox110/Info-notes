# Unions
Des unions sont des types défénits par l'utilisateur, comme des structs, mais tous les champs utilise la même espace de mémoire.

<br>

## Les champs d'un union
À cause que tous les champs d'un union sont à la même adresse mémoire, ils vont toutes prendre la même valeur. 
```cpp
using namespace std;

union unUnion { // Mettre la défénition entre le using et la fonction main
    short x; // x et y utilisent la même mémoire
    long y;
}; // <- Ne pas oublier le ;

int main() {
    unUnion x;
    x.x = 10;
    cout << x.x << endl; // 10
    cout << y.x << endl; // 10
    
    cout << &x.x << endl; 
    cout << &x.y << endl; // La même adresse que &x.x
}
```

<br>

## Typeid, sizeof et référence d'un union
```cpp
using namespace std;

union unUnion {
    long x;
    short y;
};

int main() {
    unUnion x;
    cout << typeid.name(x) << endl; // Le type de l'union utilisé
    cout << sizeof(x) << endl; // La grandeur de la propriété la plus grande, alors sizeof(long) dans ce cas
    cout << &x << endl;
    cout << &x.x << endl;
    cout << &x.y << endl; // Les trois références vont être le même
}
```

<br>

## Les utilités des unions
- Les unions nous permet de créer une variable qui peut être utilisé pour plus qu'un type
- Autre ??

<br>

## Comment la mémoire d'un union fonctionne
Prenons l'union suivant comme exemple pour le premier cas:
```cpp
union unUnion {
    long long x;
    short y;
};

int main() {
    unUnion x;
    x.x = INT64_MAX;
    cout << x.y << endl; // -1
    /*
    Quand on essaye de trouver la valeur de l'union en utilisant le champs du type short, le compilateur va nous donner -1 aulieu de la valeur de l'union. Cependant, si on changerait le short à un unsigned short, on va recevoir la valeur maximal du unsigned short.

    C'est le même résulats si on essayerait d'utiliser un int et un unsigned int (Attention: un long n'aura pas le même résultats qu'un int)
    */
}
```

Un cas avec un long et un long long:
```cpp
union unUnion {
    long long x;
    long y;
}

int main() {
    unUnion x;
    unUnion x.x = INT64_MAX;
    cout << x.y << endl; // La valeur de INT64_MAX
    /*
    Aulieu de nous donner le même résultats qu'un int, le long va prendre la valeur du long long. C'est le même résultats pour tous les combinaison de long et long long sauf un ull et un l, le long sera -1.
    */
}
```

Pour les bools, il prendra la valeur de l'union jusqu'a 255. Sa dérange pas si c'est 256 ou UINT64_MAX, la valeur du bool sera 255.

Pour les chars, il prendra les valeurs ascii comme d'habitude, mais il aurait le ? icon s'il ne trouve pas de valeurs pour le nombre.


