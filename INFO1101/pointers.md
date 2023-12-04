# Les pointeur
Des pointeurs son des variables qui contient des références à un autre variable

```cpp
int main() {
    long x = 10;
    long *y = &x; // Le pointeur doit avoir le même type que la valeur dont il va contenir l'adresse
    cout << y << endl; // L'adresse de x
    cout << *y << endl; // La valeur de x
    cout << &y << endl; // L'adresse de y
    cout << *&y << endl; // L'adresse de x
}
```

<br>

## Pourquoi utiliser des pointeurs
Les pointers nous permet de créer des applications qui sont mieux optimizer. Par exemple, on peut faire un pointeur pointer à la valeur aulieu d'avoir besoin de la recopier dans une nouvelles variable.

<br>

## Adresse nulle
L'adresse nulle est une convention qui indique qu'un pointeur pointe a rien. (Aka NULL ou nullptr)

```cpp
int main() {
    long *ptr1 = NULL;
    long *ptr2 = nullptr;
}
```