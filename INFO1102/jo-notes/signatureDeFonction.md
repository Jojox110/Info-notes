# Les signatures de fonctions

## Signatures de fonctions

```cpp
long carre(long N) {
    return N * N;
}
```
Cette fonction à la signaure carre(long)

```cpp
long carre(long &N) {
    return N * N;
}
```
Et cette fonction à la signature carre(&long)

Le compilateur va utilisé lui qu'on lui demande, mais il faut faire attention au erreur d'ambiguité.

```cpp
int main() {
    carree(10L);
    long x = 10;
    carree(x);
}
```

La première appèle à la fonction carree va bien fonctionner, car la seul signature de fonction qui fonctionne avec ce paramètre actuel est carre(long), mais la deuxième appèle à carre va donner une erreur parce que carre(long) et carre(&long) sont tous les deux valide et le compilateur ne sait pas quelle utiliser.

## Signatures probables
Les signatures probables sont tous les signatures possibles qui fonctionne avec la combinaison de paramètre actuel on à passer à la fonction. Ces signatures n'ont pas besoin d'exister.

```cpp
int main() {
    carre(10L);
    /*
    Signatures probables: carre(long)
    */
    long x = 10;
    carre(x);
    /*
    Signatures probables: carre(long) -> Le paramètre est considérer une expression
                          carre(&long) -> Le paramètre est considérer une variable
    */
}
```

## Compter le montant de combinaison de signature probables d'une fonction avec X paramètres (question sur un des tests passé)
Chaque paramètre peut avoir une signature de fonctions ou deux signature de fonctions: soit il est passé par copie (1 signature probable) ou il est passé par variable (2 signatures probables)

Formule: 2^n


