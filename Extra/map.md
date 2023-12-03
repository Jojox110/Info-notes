## Map (aka hashmap)
Des hashmaps sont une collections de clé avec leur valeur associée

## Définition d'une map
```cpp
#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, int> hashmap = { // <type de la cle, type de la valeur>
        {2, 3} // {clé, valeur}
               // Ajoute une , entre chaque définition de clé et valeur
    };

    hashmap[1] = 2; // hashmap[cle] = valeur soit change la valeur de la clé ou créer une nouvelle pair de clé et valeur
    cout << hashmap[1] << endl; // 2
    cout << hashmap[2] << endl; // 3
}
```

## Utiliser une map dans une for loop
Il y a quelques façons d'itérer sur une map, ici sont deux façons

### En utilisant begin() et end()
```cpp
#include <map>
#include <iostream>

using namespace std;

int main() {
    map<int, int> hashmap = {
        {1, 2},
        {2, 3},
        {3, 4},
        {4, 5},
        {5, 6}
    };

    for (auto i = hashmap.begin(); i != hashmap.end(); i++) {
        cout << "Cle: " << i->first << " || Valeur: " << i->second << endl;
    }
};
```
Dans ce cas, on doit utiliser des -> pour accédé à la valeur parce que i est de type map<>::iterator. Iterator utilise des pointeurs

### En utilisant un "Range based for loop"
```cpp
#include <map>
#include <iostream>

using namespace std;

int main() {
    map<int, int> hashmap = {
        {1, 2},
        {2, 3},
        {3, 4},
        {4, 5},
        {5, 6}
    };

    for (auto i : hashmap) {
        cout << "Cle: " << i.first << " || Valeur: " << i.second << endl;
    }
};
```
Cette méthode utilise std::pair dans la for loop. std::pair met les pairs dans un tuple, alors on utilise le selecteur de champs .

## Les différents types de map

### Map

### Unordered_map

### Multimap