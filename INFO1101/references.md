# Références
Une référence est une adresse mémoire d'une variable
```cpp
int main() {
    long x = 10;
    cout << &x << endl; // L'adresse de x
}
```

<br>

## Deux explications pour des références + des fonctions

### Passer une référence comme paramètre
Quand on passe un paramètre par référence, cela nous permet de modifier la variable originale et non une copie de la variable
```cpp
void modifier(long &param) {
    param += 1;
}

int main() {
    long x = 10;
    modifier(x);
    cout << x << endl; // 11
}
```

### Fonctions

C'est possible d'utiliser des references dans une fonction. Ceci est utile pour modifier un variable sans avoir besoin d'utiliser return. 

Voici un exemple:
```cpp
void echanger(int &A, int &B){
    int C = A;
    A = B;
    B = A;
}
```

<br>

## Mettre une références dans une variable sans pointeur
C'est possible d'avoir une variable qui contient une référence sans utiliser un pointeur, mais on ne peux pas changer la références que la variable contient
```cpp
int main() {
    long n = 10;
    long y = 90;
    long &x = n;
    cout << &n << endl; // L'adresse a n
    cout << &x << endl; // L'adresse a n
    x = y;
    cout << &x << endl; // Encore l'adresse a n
}
```

<br>

## Notes
Chepas pourquoi, mais tu ne peux pas prendre la référence d'un char
```cpp
int main() {
    char c = 'a';
    cout << &c << endl; // a
}
```
