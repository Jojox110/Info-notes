### Note: Voir les notes de INFO1101 pour les notions de base

# Les conduits et les fichiers

## ofstream ios::app
L'option ios:app présent dans la fonction .open() nous permet d'ajouter du nouveau contenue à la fin du fichier voulu aulieu de l'éffacer et écrire du nouveau contenue comme ios::out

```cpp
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream sortie1(nomFichier, ios::out);
    ofstream sortie2(nomFichier, ios::in);

    sortie1 << "data ... data" << endl; 
    /*
    Ceci va ajouter du text au fichier demander, mais tout le contenue dans le fichier demandé sera effacer quand on ouvre le fichier
    */

    sortie2 << "data ... data" << endl;
    /*
    Ceci va ajouter du text au fichier demander sans effacer le contenue déjà présent avant d'ouvrire le fichier
    */
}

```