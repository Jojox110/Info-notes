# Les conduits et les fichiers
Les conduits et les fichiers sont des outils disponible pour travailler avec des fichierse dans du C++

Pour travailler avec des fichiers, on doit ajouter les méthodes de fstream
```cpp
#include <fstream>
```

<br>

## Les conduits d'entrée
Les conduits d'entrée utilisent ifstream (input file stream). Cette méthode peut sortir des données d'un fichier.

Pour faire cela, on doit utiliser la méthode .open(filename, ios::in) (input output stream :: output) et la méthode .close()

Pour récuperer les données, on peut utiliser un extraction de flux comme montrer dans le bloc de code

```cpp
#include <fstream>

int main() {
    ifstream entree;
    entree.open("data.txt", ios::in);
    int valeur;
    entree >> valeur; // Il va entrer une ligne a la fois, alors on doit faire 10 extraction de flux pour récuperer 10 lignes
    entree.close();
}
```

<br>

## Les conduits de sortie
Les conduits de sortie utilisent ofstream (output file stream). Cette méthode peux entrer des données dans un fichier.

On peut encore utiliser .open et .close, mais on doit mettre ios::out aulieu de ios::in dans .open.

Pour insérer des données, on peut utiliser un insertion de flux

Note (seulement applicable a ofstream): Si le fichier mis dans .open() n'existe pas, il sera créer automatiquement

```cpp
#include <fstream>

int main() {
    ofstream sortie;
    sortie.open("data.txt", ios::on);
    sortie << "data" << endl;
}
```

<br>

## Comment détecter un fichier non-existant
```cpp
#include <fstream>

int main() {
    ofstream entree;
    entree.open("data.txt", ios::out);
    if (!entree) {
        cout << "Le fichier d'entree n'existe pas" << endl;
        return -1;
    }
}
```

<br>

## Passer ifstream, ofstream, cin et cout comme paramètre
```cpp
#include <fstream>
#include <string>

void ecrire(&ostream conduit, string s) {
    // ofstream et cout peuvent être passer comme paramètre actuel de ostream
    conduit << s;
}

void lire(&istream conduit, string &s) 
    // ifstream et cin peuvent être passer comme paramètre actuel de istream
    // parce que s est une référence, on a pas besoin de faire return s pour que la fonction qui appelle lire ont le resultats
    conduit >> s;
```

<br>

## Notes additionelles
- C'est possible d'avoir plusieurs ifstream et/ou ofstream d'ouvert en même temps, mais si on aimerait re-utiliser un filestream, on doit utiliser .close() et après .open()
- C'est une bonne idée de toujours utiliser .close() quand on a finit avec le filetsream pour assurer que rien d'inattendu se produit

