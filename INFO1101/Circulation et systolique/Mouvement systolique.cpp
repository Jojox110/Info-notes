/*
           MOUVEMENT SYSTOLIQUE
           ====================
Un mouvement systolique connu est celui 
produit par vos intestins pour faire 
avancer vous savez quoi vers la sortie.
Ce mouvement est unidirectionnel et 
c'est une bonne chose. ;-)

Nous allons simuler un mouvement systolique 
à l'intérieur d'un tableau.

Cette technique est utilisée par des 
algorithmes plus complexes.
*/

#include <iostream>
using namespace std;

int main()
{

    cout << "\t" << "MOUVEMENT SYSTOLIQUE" << endl;
    cout << "\t" << "====================" << endl << endl;

    cout << "Un mouvement systolique connu est celui " << endl;
    cout << "produit par vos intestins pour faire" << endl;
    cout << "avancer vous savez quoi vers la sortie." << endl;
    cout << "Ce mouvement est unidirectionnel et" << endl;
    cout << "c'est une bonne chose. ;-) " << endl << endl;

    cout << "Nous allons simuler un mouvement systolique" << endl;
    cout << "a l'interieur d'un tableau." << endl << endl;

    cout << "Cette technique est utilisee par des " << endl;
    cout << "algorithmes plus complexes." << endl << endl << endl;

    long T[10] ;

    cout << "On a un tableau de 10 elements de type long." << endl << endl ;

    // Phase de lectures initiales
    cout << "Entrez 10 valeurs entieres pour peupler le tableau: " << endl ;

    for (short indice = 0; indice < 10; indice++)
    {
        cout << "T[" << indice << "] : ";
        cin >> T[indice];
    }

    cout << "Demonstration du mouvement systolique" << endl << endl;
    cout << "Entrez une valeur quand demande. Pour arreter, entrez -9999999." << endl;

    do
    {
        // Affichage
        for (short indice = 0; indice < 10; indice++)
        {
            cout << T[indice] << "\t";
        }
        cout << endl;

        // Mouvement systolique
        for (short indice = 0; indice < 9; indice++)
        {
            T[indice] = T[indice+1];
        }

        cout << "Nouvelle valeur entiere (-9999999 pour arreter) : ";
        cin >> T[9];
    } while (T[9] != -9999999);

    cout << endl << endl << "Imaginez des lignes diagonales de droite a gauche, en descendant." << endl;
    cout << "Vous \"voyez\" que les valeurs semblent se deplacer vers la gauche." << endl;
    cout << endl << endl ;

    cout << "Vous pouvez voir, d'une ligne a l'autre, que la valeur" << endl
        << "la plus a gauche est \"sortie\", que les autres valeurs" << endl
        << "ont avance d'une position vers la gauche et que la nouvelle" << endl
        << "valeur est \"entree\" du cote droit" << endl << endl;

    cout << "On appelle \"sentinelle\" une valeur qui sert a indiquer" << endl;
    cout << "que l'entree de donnees est terminee." << endl << endl << endl;

    

}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
