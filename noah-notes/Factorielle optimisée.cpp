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


unsigned long long fact(unsigned long long N)
{
    if (N == 0)     // Devient la condition d'arrêt.
        return 1;
    return N * fact(N - 1);
}

/*
Version optimisée de fact() car on sait que 0! == 1 et 1! == 1.
On va éliminer un niveau de récursion en traitant 
N == 0 et N == 1 d'un seul coup. 

Rappel : N! n'est définie que pour N >= 0 et N un entier.

On aurait pu écrire la condition d'arrêt comme suit.

   if ( N == 0 || N == 1 )     // Devient la condition d'arrêt.
        return 1; // Cas de 0! et 1!

    Ceci nécessite jusqu'à trois opérations de calcul
        N == 0
        N == 1
    et le ||

    On peut remplacer ceci par 
    if ( N <= 1 )     // Devient la condition d'arrêt.
        return 1;     // Cas de 0! et 1!

    Parce que N >= 0, les deux expressions
    ( N == 0 || N == 1 ) et ( N <= 1 )
    produisent exactement les mêmes résultats
    pour toutes valeurs de N >= 0 où N est un entier.

    ( N <= 1 ) ne demande qu'une seule opération.
*/

unsigned long long factorielle(unsigned long long N)
{
    if ( N <= 1 )     // Devient la condition d'arrêt.
        return 1; // Cas de 0! et 1!
    return N * factorielle(N - 1);
}

int main()
{


    cout << endl << endl << endl;
    // Verification que factaorielle( N ) donne toujours la bonne réponse !!!

    cout << "Les 25 premieres valeurs de factorielle" << endl;

    cout << " K\tK!\t\t\tK!/K == (K-1)!" << endl;
    cout << "0\t" << factorielle( 0 ) << endl;
    for (unsigned long long K = 1; K <= 24; K++)
    {
        unsigned long long reponse = factorielle(K);
        cout << K << "\t" << reponse << "\t" 
            << (reponse <= 3628800 ? "\t" : "")
            << (reponse <= 355687428096000 ? "\t" : "")
            << (reponse / K) << endl;
    }

    /*
    La fonction factorielle grandit très rapidement.
    Vous devriez voir que jusqu'à 20!, tout va bien.
    Nous avons que K!/K donne bien (K-1)!

    À 21!, ça ne va plus. 21! / 21 ne donne pas 20!
    C'est similaire pour 22!, 23 ! etc.

    La valeur de 23! devrait vendre la mèche. Il est 
    impossible d'avoir que réponse soit plus petite 
    que la précédente. La fonction factorielle est
    une fonction monotone croissante et pour K > 1,
    elle est strictement croissante.
    
    Si vous jetez un coup d'oeil au fichier
    "Valeurs de factorielle.xlsx", vous verrez plus
    clairement que à partir de 21! la réponse
    exige trop de bits pour être stockée dans
    une variable de type unsigned long long
    (qui permet 64 bits).

    */


    /*
    
    Qu'est-ce que ce code ???

                 (reponse <= 3628800 ? "\t" : "")

    Un des noms qu'on lui donne est le if calculé.
    Les parenthèses, le ? et le : sont obligatoires.

    Syntaxe : 
       ( <<condition logique>> ? <<expression1>> : <<expression2>> )
    
    Si la <<condition logique>> est vraie, 
       la valeur de <<expression1>> sera utilisée.
    Si la <<condition logique>> est fausse, 
       la valeur de <<expression2>> sera utilisée.

    C'est un des seuls opérateurs triadiques, 
    sinon le seul, i.e. il y a trois opérandes.

    L'évaluation de la <<condition logique>> et 
    le choix de la valeur d'une des deux expressions 
    sont fait  lors de l'exécution du programme.

    Ici, j'ai utilisé le if calculé pour mettre
    le bon nombre de tabs ("\t") pour parfaire
    l'alignement des colonnes de la table de
    résultats.

    */
}
