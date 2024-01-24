# If calculer (ternary operation)

## Syntax

condition ? true : false

Avec un if régulier:

```cpp
int main() {
    int i = 2;
    string resultat;
    if (i == 2) {
        resultat = "true";
    }
    else {
        resultat = "false";
    }
    cout << resultat << endl;
}
```

Avec un if calculer

```cpp
int main() {
    int i = 2;
    string resultat = (i == 2) ? "true" : "false";
    cout << resultat << endl;
}
```