# Fonctions

Permet d'ecrire des blocs de code reutilisables.

Exemple:
```cpp

int add(int a, int b) {  // a et b sont des paramètre formel

    int answer = a + b;
    return answer;
}

int main()
{
    add(5, 2); // 5 et 2 sont des paramètre actuel
}

output: 7
```

Une fonction à besoin: 
    Un type de retour, dans ce cas int.
    Un indentificateur de la fonction (add).
    Un liste de paramètres formeles entres paranthèses (int a et int b).
    Un "return", qui retourne une valeur ou une variable meme type que la fonction, une fonction de type "void" n'a pas besoin d'un "return".

Une fonction doit etre appeleer dans la fonctin main() afin d'etre executer.

<br>

## Les signatures de fonctions

Les signatures de fonctions sont tous les différentes combinaison de paramètre, soit passer par copie ou par référence.

Prennons le code suivant comme exemple:
```cpp
int func(int un, int deux) {
    return 0;
}
```

La fonction func a seulement une signature de fonction, passer un par copie et passer deux par copie.

Prennons un autre bloc de code, mais avec des références dans les paramètres:
```cpp
int func(int &un, int deux) {
    return 0;
}
```
Ici la fonction func a deux signature de fonction, soit passer un par variable (référence) et un par valeur ou variable (copie) ou soit passer un par variable (référence) et un par variable (copie)

Mais cela peut causer des problèmes aussi:
```cpp
int func(int &un, int deux) {
    return 0;
}

int func(int &un, int&deux) {
    return 0;
}

int main() {
    int C, D = 0;
    func(C, 10); // OK
    func(C, D); // erreur d'ambiguiter
}
```

Dans ce cas, la première appelle va fonctionner sans problème, sa va choisir la première fonction, car une valeur qui n'est pas une variable peut seulement être passer par copie. Mais, la deuxième appelle à func va nous donner une erreure. Parce que des paramètre défénit avec une références peuvent être passer par copie ou par référence, le compilateur va nous dire que les deux défénitions de func sont valide pour cette appelle dans le message d'erreur.

Ceci est tous les signatures de fonctions qui est créer dans la dernière exemple:

func(int variable (référence), int variable ou valeur (copie))\
func(int variable (référence), int variable (référence))\

func(C, D) est valide pour tous ces signature à cause que C et D peuvent être passer par copie ou par référence, alors le compilateur ne sait pas quelle utiliser
