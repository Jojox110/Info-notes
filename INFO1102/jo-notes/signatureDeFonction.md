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
    Signatures probables: carre(long) et carre(&long)
    */
}
```

## Les erreurs d'ambiguité
Quand on fait une appelle à une fonction et que le compilateur trouve qu'il y a plus qu'une signature probable des paramètres actuel qu'existe, il va nous donnée une erreur d'ambiguité.

Exemple:
```cpp
long fonction1(long x) { // signature: fonction(long)
    return x;
}

long fonction1(long& x) { // signature: fonction(long&)
    return x;
}

int main() {
    long x = 10;
    fonction1(10); // Aucune erreur, seulement une signature probable valide
    fonction(x); // Erreur d'ambiguité: deux signatures probables valide
}
```

## Compter le montant de combinaison de signature probables d'une fonction avec X paramètres (question sur un des tests passé)
Chaque paramètre peut avoir une signature de fonctions ou deux signature de fonctions: soit il est passé par copie (1 signature probable) ou il est passé par variable (2 signatures probables)

Formule: (de chatgpt, take it with a grain of salt, mais les reponse font du sense)
n = Nombre de parametres
k = Montant de parametre choisit pour la signature de fonction (tu peux le prendre comme le montant de parametre qu'on passe par reference ou passe par copie)

n!
___
k!*(n-k)!

```cpp
#include <iostream>
using namespace std;

// Function to calculate factorial
int factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

// Function to calculate binomial coefficient
int binomialCoefficient(int n, int k) {
    return factorial(n) / (factorial(k) * factorial(n - k));
}

// Function to calculate the number of possible function signatures
int possibleSignatures(int numParams) {
    int totalSignatures = 0;
    for (int k = 0; k <= numParams; ++k) {
        totalSignatures += binomialCoefficient(numParams, k);
    }
    return totalSignatures;
}

int main() {
    int numParams;
    cout << "Enter the number of parameters in the function: ";
    cin >> numParams;
    int numSignatures = possibleSignatures(numParams);
    cout << "Number of possible function signatures: " << numSignatures << endl;
    return 0;
}
```


