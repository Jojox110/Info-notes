/*
Il faut avouer que rand() ne génère pas des grands nombres.
L'intervalle [0, 32767] n'est pas si grand que ça.

*/



#include <iostream>
using namespace std;

unsigned long long aleatoireGrand(short nombreDeBits )
{
    /*
        Le type unsigned long long permet des nombres non signés à 64 chiffres binaires.


        Cette fonction permet de choisir combien de bits seront générés, les autres seront des 0.
        Pour comprendre le fonctionnement de cette fonction, il faut se rappeler
        le système de notation positionnelle utilisé par le type unsigned long long.
        À chaque itération, 
        - la multiplication par 2 pousse tous les chiffres binaires d'une place vers la gauche ;
        - puis on ajoute un chiffre binaire dans les unités (le bit #0).
    */
    unsigned long long somme = 0;
    for (long K = 1; K <= nombreDeBits; K++)
    {
        somme = somme * 2 + rand() % 2;
    }

    return somme;
    
}

int main()
{

    unsigned long long valeurDroite = 1;

    for (short nombreDeBits = 1; nombreDeBits <= 63; nombreDeBits++)
    {
        valeurDroite *= 2;
        cout << "Si le nombre de bits  est " << nombreDeBits 
             << ", les valeurs generees sont dans [ 0, " << valeurDroite -1 <<" ]" << endl;
        long indice = 0;
        for (long K = 1; K <= 20; K++)
        {
            indice++;
            cout << aleatoireGrand(nombreDeBits) << "\t";
            if (indice % 5 == 0)
                cout << endl;
        }
        cout << endl  ;

        // Tentative de trouver l'intervalle empirique des nombres produits.
        // Pour avoir de meilleurs résultats, il faudrait faire tourner la boucle plus souvent.
        unsigned long long minimum = -1, maximum = 0; // -1 ???  ;-) Je profite d'une conversion implicite.
        for (long K = 1; K <= 100000; K++)
        {
            unsigned long long nombre = aleatoireGrand(nombreDeBits);
            if (nombre > maximum) maximum = nombre;
            else if (nombre < minimum) minimum = nombre;
        }
        cout << "Les reponses sont dans [ " << minimum << ", " << maximum << "]." << endl;
        cout << "minimum est a " << 100 * (double)minimum / (double)(valeurDroite - 1) << " % \tde "
            << (valeurDroite - 1) << endl;
        cout << "maximum est a " << 100 * (double)maximum / (double)(valeurDroite - 1) << " % \tde "
            << (valeurDroite - 1) << endl << endl;
        cout << "============================================================" << endl << endl;
    }
}

