# Strings

Un string est une chaine de caractère

## Concatenation de string
On est capable de contatener des strings ensemble en utilisant l'operateur d'addition
```cpp
int main() {
    string str = "aa";
    string str2 = "bb";
    string str3 = str + str2;
    cout << str3 << endl; // aabb
}
```