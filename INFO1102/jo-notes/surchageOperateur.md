# Surchage d'opérateur

Deux notes:
- On peut surcharger la majoriter? des opérateurs
- On doit utilisé des types définit par l'utilisateur comme paramètre des surcharges d'opérateurs*

* Ceci est based off des erreurs que j'ai eu - à confirmer

## Opérateur +

```cpp
Vecteur_t operator+(Vecteur_t A, Vecteur_t B)
{
    Vecteur_t P;
    P.x = A.x + B.x;
    P.y = A.y + B.y;
    return P;
}
```

## Opérateur -

```cpp
Vecteur_t operator-(Vecteur_t A, Vecteur_t B)
{
    Vecteur_t P;
    P.x = A.x - B.x;
    P.y = A.y - B.y;
    return P;
}
```

C'est deux exemples montre comment faire une surchage d'opérateur. Ces fonctions ne change pas le fait que l'opérateur défaut + ou l'opérateur défaut -, c'est seulement une nouvelle signature.

## L'opérateur postfix (x++) et l'opérateur prefix (++x) (Pas enseigner en classe je pense?)

### Struct utilisé pour les exemples:
```cpp
struct valeur {
    long x;
};
```

### Opérateur prefix (++x)

```cpp
valeur operator++(valeur& val1) {
    cout << "Opérateur prefix" << endl;
    ++val1.x;
    return val1;
}

int main() {
    valeur val1;
    val1.x = 5;
    ++val1;
    cout << val1.x << endl; // 6
}
```

### Opérateur postfix (x++)

Pour différencier postfix et prefix, le compilateur va interpreter la surchage d'opérateur++ comme postfix s'il y a un int à la fin de la liste de paramètre formel

J'ai mis _ comme le nom de la variable pour signifier qu'elle est ignorer. On n'a pas besoin de la remplire comme démontrer dans la fonction main sous la surchage d'opérateur postfix

```cpp
valeur operator++(valeur& val, int _) {
    cout << "Opérateur postfix" << endl;
    val.x++;
    return val;
}

int main() {
    valeur val1;
    val1.x = 5;
    val1++;
    cout << val1.x << endl; // 6
}
```
