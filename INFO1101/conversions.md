# Casts
Un cast est une façons de changer le type **d'une valeur (et non le type de la variable)**. On peut mettre (le type voulu)la valeur à changer.
```cpp
#include <string>

int main() {
    double x = 10.5;
    cout << (long)x << endl; // Il va afficher 10 puisque c'est converti en type long
    //x va rester comme un double

    // La prochaine exemple n'a pas été montrer en classe
    cout << to_string(x) << endl; // 10.5
    // to_string nous permet de changer un chiffre à un string sans avoir le problème oû le compilateur convertit le chiffre à un caractère du tableau ASCII
}
```

<br>

# Pertes d'information
Quand on fait des conversions de type, on met le risque d'avoir une perte d'information. Par exemple, si on essaye de convertir un double à un long, on perd les chiffre décimaux. Si on essaye de convertir un grand mombre à un short, on perd tous les chiffres plus grand que le maximum qu'un short peux contenir
