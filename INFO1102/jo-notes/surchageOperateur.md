# Surchage d'opérateur

### Note: Il y a plusieurs autres opérateur qu'on peut surcharger, ceci est les deux exemples à Julien

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

C'est deux exemples montre comment faire une surchage d'opérateur. Ces fonctions ne change pas le fait que l'opérateur défaut + ou l'opérateur défaut -, c'est seulement une nouvellez signature.
