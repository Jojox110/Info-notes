### Tableau
Les tableau, aka des "arrays", est une structure de données qui permet d'entretenir plusieurs valeurs d'un même type ensemble

### La syntaxe
```cpp
int main() {
    long x[10]; 
    /*
    Le [] veux dire que c'est un tableau
    Le nombre dans [] définit la grandeur du tableau
    */

    // Pour initialiser un tableau avec des valeurs
    // Toutes les endroits non-initialiser vont avoir la valeur 0 par défault
    long y[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Pour avoir une valeur de y
    cout << y[index] << endl;
}
```

### Les tableaux et les loops
```cpp
int main() {
    long x[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}

    for (int i = 0; i < 10; i++) {
        cout << x[i] << endl; // La valeur de x à l'indice i
    }
}
```

### Les propriétés d'un tableau
```cpp
int main() {
    long x[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << sizeof(x) << endl; // 80, sizeof(type) * x.size();
    cout << typeid(x).name() << endl; // A10_i
    /*
    A pour array
    10 est la grandeur du tableau
    _i ?? chepas
    */
}
```

### La génération de l'adresse du tableau
TODO
