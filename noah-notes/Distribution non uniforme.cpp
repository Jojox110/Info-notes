/*

Exemple simple d'une fonction retournant des valeurs selon 
une distribution triangulaire (donc non uniforme).

*/

#include <iostream>
using namespace std;

long aleatoireTriangulaire()
{
    static long T[16] = { 1, 2, 2, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 6, 6, 7 };
    return T[rand() % 16];
}

int main()
{
    long long compteur[300] = { 0 };

    long indice = 0; // Utilisé pour améliorer l'apparence de l'affichage.
    for (long K = 0; K < 10000; K++)
    {
        indice++;
        long nombre = aleatoireTriangulaire();
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
            cout << "compteur[" << K << "] = " << compteur[K] 
                << "\t" << compteur[K] / (10000.0 / 16.0)
                << "\t" << (long)(0.5 + compteur[K] / (10000.0 / 16.0))
                << endl;
        }
    }

}

/*

    Il y a d'autres façon de générer des distributions non uniformes mais ça
    implique savoir travailler avec des mathématiques un peu plus avancées.
*/