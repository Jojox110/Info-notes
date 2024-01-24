/*
Brasser un ensemble : changer l'ordre des données sans en perdre ni en rajouter.
*/

#include <iostream>
using namespace std;


void echanger(long& A, long& B)
{
    long transfert = A;
    A = B;
    B = transfert;
}

void brasserTableau(long T[], long N)
{
    /*
    N est le nombre d'éléments présentement dans le tableau.
    Ces éléments sont réputés être dans les position #0 à #(N-1).
    */
    for (long K = 0; K < N - 1; K++)
    {
        long position = K + rand() % (N - K); // génère une position dans [K, N-1]
        echanger(T[K], T[position]);
    }
}


void afficherTableau(long T[], long N)
{
        
    for (long K = 0; K < N; K++)
    {
        cout << T[K] << "\t";
    }
    cout << endl;
}


int main()
{
    long T[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    cout << "Afficher des permutations les unes a la suite des autres." << endl << endl;

    afficherTableau(T, 9);

    for (long iteration = 1; iteration <= 15; iteration++)
    {
        cout << endl;
        brasserTableau(T, 9);
        afficherTableau(T, 9);
    }

    cout << endl << endl << "Afficher des permutations a partir de l'original." << endl << endl;

    for (long iteration = 1; iteration <= 15; iteration++)
    {
        long S[100] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 }; // L'initialisation est refaite à chaque itération.
        afficherTableau(S, 9);
        brasserTableau(S, 9);
        afficherTableau(S, 9);
        cout << endl;
    }

    /*
        Quand une variable est déclarée à l'intérieur d'un bloc de code,
        à chaque fois que l'on rentre dans ce bloc de code, la variable
        est réinitialisée. Ici, le bloc de code dont on parle est celui 
        entre les accolades.

        Mais qu'advient-il de iteration ?
        Pour le compilateur, c'est comme si il traitait le for comme suit.

        {
            for (long iteration = 1; iteration <= 15; iteration++)
            {
                long S[100] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 }; // L'initialisation est refaite à chaque itération.
                afficherTableau(S, 9);
                brasserTableau(S, 9);
                afficherTableau(S, 9);
                cout << endl;
            }
        }

        La variable iteration n'est plus accessible en dehors du for.
    */
}
