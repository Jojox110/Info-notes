// Fonction factorielle - itérative versus récursive.cpp 
/*

La définition de la fonction factorielle vous a 
probablement été montrée comme suit.

    0!  = 1                                     Règle 1
    1!  = 1                                     Règle 2
    N! = N x (N-1) x (N-2) x .... x 3 x 2 x 1   Règle 3

où vous auriez dû comprendre que pour calculer 
une factorielle, il fallait faire une suite de produit.
Exemple :
0! =                               = 1          Règle 1
1! =                               = 1          Règle 2
2! =                         2 x 1 = 2          Règle 3
3! =                     3 x 2 x 1 = 6          Règle 3
4! =                 4 x 3 x 2 x 1 = 24         Règle 3
5! =             5 x 4 x 3 x 2 x 1 = 120        Règle 3
6! =         6 x 5 x 4 x 3 x 2 x 1 = 720        Règle 3
7! =     7 x 6 x 5 x 4 x 3 x 2 x 1 = 5040       Règle 3
8! = 8 x 7 x 6 x 5 x 4 x 3 x 2 x 1 = 40320      Règle 3
etc.

Il existe une autre dénition où on utilise la récurrence, 
la version mathématique de la récursion.

On a 
    0!  = 1
    N! = N x (N-1)!

Ici vous devrez comprendre que pour calculer
une factorielle, il faut faire une suite de récurrences.
Exemple :
4! = 4 x 3!             car N! = N x (N-1)! avec N = 4 donc 4! = 4 x 3!
   = 4 x 3 x 2!         car N! = N x (N-1)! avec N = 3 donc 3! = 3 x 2!
   = 4 x 3 x 2 x 1!     car N! = N x (N-1)! avec N = 2 donc 2! = 2 x 1!
   = 4 x 3 x 2 x 1 x 0! car N! = N x (N-1)! avec N = 1 donc 1! = 1 x 0!
   = 4 x 3 x 2 x 1 x 1  car 0! = 1

La factorielle est définie pour des valeur de N >= 0.

*/

#include <iostream>
using namespace std;

/*
    Pour simplifier les diagrammes qui vont expliquer 
    le fonctionnement de la récursion pour notre fonction 
    factorielle, on va raccourcir son nom à fact().
    Cette version est silencieuse. Elle ne donne que la réponse.
    Il n'y trouve aucun affichage.
*/

unsigned long long fact(unsigned long long N)
{
    if (N == 0)     // Devient la condition d'arrêt.
        return 1;
    return N * fact(N - 1);
}

/*
Cette deuxième version, qu'on n'utiliserait jamais 
dans un vrai programme, sert à démontrer le
fonctionnement de la récusion, pas à pas.
C'est bourré d'affichages pour que vous puissiez
suivre à la trace ce qui s'y passe (où et quand).

*/

unsigned long long factBavarde(unsigned long long N)
{
    cout << endl <<  "debut de factBavarde( " << N << " )  N = " << N << " Adresse de N = " << &N << endl;

    if (N == 0)     // La condition d'arrêt.
    {
        cout << "La condition d'arret est atteinte. Cette copie de factBavarde( " << N << " ) retourne 1." << endl;
        cout << "fin de factBavarde( " << N << " )  N = " << N << " Adresse de N = " << &N << endl << endl;

        return 1;
    }
    cout << "Evaluation differee de << " <<  N << " * factBavarde( " << N - 1<< " ) >> dans factBavarde( " << N << " )" << endl;
    // L'évaluation est différée car il nous faut savoir le résulta de l'appel à factBavarde(N - 1).

    unsigned long long F = factBavarde(N - 1);
    cout << "factBavarde( " << N - 1 << " ) a retourne " << F << " pour evaluer l'expression << " << N << " * factBavarde( " << N - 1<< " ) >> dans factBavarde( "<< N << " )." << endl;
    unsigned long long expression = N * F;
    cout << "Evaluation de << " << N << " * " << F << " >> dans factBavarde( " << N << " )" << endl;
    cout << "Cette copie de factBavarde(" << N << ") retourne " << expression << "." << endl;

    cout << "fin de factBavarde( " << N << " )  N = " << N << " Adresse de N = " << &N << endl << endl;

    return expression;
}


int main()
{
    unsigned long long N, reponse;
    // N'exagérez pas avec la valeur de N. factBavarde() porte bien son nom.


    cout << "Entrer la valeur de N : ";
    cin >> N;

    reponse = fact(N);
    cout << endl << endl << N << "! = " << reponse << endl << endl;

    reponse = factBavarde(N);

    cout << endl << endl << N << "! = " << reponse << endl << endl;


    /*
    Prenez le temps de regarder les sortie produites par l'appel de 
    factBavarde() ci-dessus.
    Vous devriez pouvoir voir que les adresses du paramètre formel N changent.
    
    */
  
}
