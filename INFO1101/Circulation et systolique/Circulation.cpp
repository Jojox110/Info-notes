
#include <iostream>
using namespace std;

/*
Qu'est-ce qu'une circulation ?

C'est comme une systole mais avec un plus : la donnée qui sort à un bout rentre à l'autre bout.

*/

int main()
{
    long T[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    long transfert;

    cout << "Circulation vers la gauche" << endl << endl;
    // On dit que la circulaion est vers la gauche 
    // car tous les éléments sauf un sont déplacés 
    // vers la gauche.
  
    // affichage du tableau
    for (long indice = 0; indice < 9; indice++)
        cout << T[indice] << " ";
    cout << endl;

    for (long iteration = 0; iteration <= 17 ; iteration++)
    {
        transfert = T[0]; // début de la circulation
        // systole
        for (long indice = 1; indice < 9; indice++)
            T[indice - 1] = T[indice];
        T[8] = transfert ; // fin de la circulation

        // affichage du tableau
        for (long indice = 0; indice < 9; indice++)
            cout << T[indice] << " ";
        cout << endl;
    }

    cout << endl << endl << endl << "Circulation vers la droite" << endl << endl;
    // On dit que la circulaion est vers la droite 
    // car tous les éléments sauf un sont déplacés 
    // vers la droite.



    // affichage du tableau
    for (long indice = 0; indice < 9; indice++)
        cout << T[indice] << " ";
    cout << endl;

    for (long iteration = 0; iteration <= 15; iteration++)
    {
        transfert = T[8]; // début de la circulation
        // systole
        for (long indice = 7; indice >= 0 ; indice--)
            T[indice + 1] = T[indice];
        T[0] = transfert; // fin de la circulation

        // affichage du tableau
        for (long indice = 0; indice < 9; indice++)
            cout << T[indice] << " ";
        cout << endl;
    }



}
