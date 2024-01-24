/*

Exemple d'une fonction retournant des valeurs d'un enesmble non contigü.

*/

#include <iostream>
using namespace std;
long aleatoireNonContigu()
{
    static long T[9] = { 2, 33, 51, 74, 110, 137, 178, 191, 230 };
    return T[rand()%9];
}

int main()
{
    long long compteur[300] = { 0 };

    long indice = 0; // Utilisé pour améliorer l'apparence de l'affichage.
    for (long K = 0; K < 10000; K++)
    {
        indice++;
        long nombre = aleatoireNonContigu();
        compteur[nombre]++;
        cout << nombre << "\t";
        if (indice % 10 == 0)
            cout << endl;
    }

    cout << endl << endl << "Affichage des frequences." << endl << endl;
    for (long K = 0; K < 300; K++)
    {
        if (compteur[K] != 0)
        {
            cout << "compteur[" << K << "] \t= " << compteur[K] << endl;
        }
    }

}

