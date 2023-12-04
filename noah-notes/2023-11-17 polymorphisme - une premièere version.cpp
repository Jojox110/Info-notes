#include <iostream>
using namespace std;
union unUnion
{
    short S;
    double D;
};

struct unElement
{
    char choix;
    unUnion U;
};



int main()
{

    unElement T[100];
    cout << "Pour chacune des 10 entrées, entrer soit un " << endl;
    cout << "S suivi d'un nombre entier dans l'intervalle [-32768, 32767] " << endl;
    cout << "ou un D suivi d'un nombre reel." << endl;

    for (short K = 0; K < 10; K++)
    {
        cout << "T[ " << K << " ] : ";
        cin >> T[K].choix;
        switch (T[K].choix)
        {
        case 'S':
        case 's' :
            cin >> T[K].U.S;
            break;
        case 'D' :
        case 'd' :
            cin >> T[K].U.D;
            break;
        default :
            cout << "erreur" << endl;
        }
    }

    cout << endl <<endl << "Afficher les donnees lues." << endl;
    for (short K = 0; K < 10; K++)
    {
        cout << "T[ " << K << " ] = ";
        switch (T[K].choix)
        {
        case 'S':
        case 's':
           cout << T[K].U.S << endl ;
            break;
        case 'D':
        case 'd':
            cout << T[K].U.D << endl ;
        }
    }

    cout << endl << endl << "Tout afficher comme entiers." << endl;
    for (short K = 0; K < 10; K++)
    {
        cout << "T[ " << K << " ] = ";
        cout << T[K].U.S << endl;
    }

    cout << endl << endl << "Tout afficher comme des reels." << endl;
    for (short K = 0; K < 10; K++)
    {
        cout << "T[ " << K << " ] = ";
        cout << T[K].U.D << endl;
    }
    
}

/*
polymorphe = poly + morphe = plusieurs + formes

On a dit qu'un tableau est une collection 
ordonnée d'éléments homogènes.

Dans l'exemple ci-dessus, on a contourné 
un peu cette définition mais sans la contourner.

Le tableau est un tableau ayant le type unElement 
comme type de base. Donc, tous les éléments du 
tableau sont officiellement du même type (unElement).

Toutefois, ces éléments peuvent stocker de 
l'information soit comme un entier (de type short)
ou soit comme un réel (de type double).

En autant que l'on se donne le moyen dese rappeler
lequel des deux formats est utilisé dans chaque élément.

En conséquence, on peut mettre des valeurs de types
différents dans un même tableau.

On peut aussi faire ce qu'on appelle des variants.
L'idée est la suivante. Dans une définition d'un nouveau 
type struct, on aurait deux façons de décrire un des champs.
Alors, on créerait un union où on aurait le choix de ces 
deux sous-descriptions.





*/