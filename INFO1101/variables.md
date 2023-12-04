# Les variables statique
Les variables statique sont des variables qui seront initializer au début de l'éxecution du programme et qui sera présent jusqu'à la fin. Parce qu'il sont statique, la valeur présent dans la variable sera préserver mênme si on essaye de re-initializer la variable.

```cpp
void func() {
    static long x = 10; // Même si on appelle cette fonction plusieurs fois, la valeur de x sera présever et x sera incrementer de 1 à chaque fois
    x += 1; 
    cout << x << endl;
}
```

<br>

# Les variables globale
Des variables globale sont des variables qui ont été défénit dans la zone globale. Toutes les variables défénit dans cette zone sont statique par défault.

```cpp
using namespace std;

int global = 10; // Cette variable est globale et elle est aussi statique

int main() {
    return 0;
}
```

<br>

# Les variables constante
Des variables constantes sont des variables qui ne peuvent pas changer, le compilateur est supposer de nous donner un erreur si on essaye de changer une variable constante.

```cpp
int main() {
    const long x = 10;
    x = 11; // Ceci va nous donner une erreur durant la compilation
}
```