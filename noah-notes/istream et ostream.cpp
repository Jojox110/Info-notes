

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
/*
 
Nous avons vu les conduits <<cin>> et <<cout>>.
Nous avons aussi vu les types de conduits <<ifstream>> et <<ofstream>>.

Le type ostream couvre tous les conduits ofstream que vous créez ET le conduit cout.
Le type istream couvre tous les conduits ifstream que vous créez ET le conduit cin.

Ces deux types vont nous permettre de généraliser nos fonctions qui doivent produire 
des sorties ou qui doivent faire des lectures.

*/

void ecrire(ostream& conduit, string S)
{
    conduit << S ;
}

void lire(istream& conduit, string &S)
{
    conduit >> S;
}

int main()
{
    ofstream sortie("sortie.txt", ios::out);

    string message = "Bonjour";
    string monEndl = "\n";

    // Ecrire dans le fichier et à l'écran
    cout << "Premier for " << endl << endl;
        for (short indice = 1; indice <= 5; indice++)
    {
        // Afficher à l'écran.
        ecrire(cout, message);
        ecrire(cout, monEndl);

        // Écrire dans le fichier
        ecrire(sortie, message);
        ecrire(sortie, monEndl);
        message = message + "s";

    }
    sortie.close();

    ifstream entree("sortie.txt", ios::in);
    string jeton;

    // Lire le contenu du fichier
    cout << endl << endl << "Deuxieme for " << endl << endl;
    for (short indice = 1; indice <= 5; indice++)
    {
        // Lire du fichier
        lire(entree, jeton);

        // Afficher à l'écran.
        ecrire(cout, jeton);
        ecrire(cout, monEndl);
    }

    string incitation = "Entrer un mot : ";
    string echo = "echo : ";

    // Faire lire du clavier avec echo
    cout << endl << endl << "Troisieme for " << endl << endl;
    for (short indice = 1; indice <= 5; indice++)
    {
        // Point d'incitation
        ecrire(cout, incitation);
        // Lire du fichier
        lire(cin, jeton);

        // Afficher à l'écran.
        ecrire(cout, echo);
        ecrire(cout, jeton);
        ecrire(cout, monEndl);
    }
}
/*

Le but de cet exemple est montrer comment on utilise des conduits istream et ostream
pour généraliser l'écriture des fonctions d'entrée et de sortie. Nos divers conduits
deviennent des paramètres actuels pour les appels à ces fonctions.

Avantages : 
Quand on fait écrire des résultats, la même fonction de sortie peut servir 
pour soit écrire ces résultats à l'écran ou dans un fichier (ou plusieurs fichiers, en 
autant qu'il y ait plusieurs conduits ofstream).

Quand on fait lire des données, la même fonction d'entrée peut servir
pour soit lire ces données du clavier ou d'un fichier (ou plusieurs fichiers, en
autant qu'il y ait plusieurs conduits ifstream).


Des fonctions plus généralistes permettent de sauver du temps de programmation car
elles sont applicables dans davantage de contextes.

En plus de sauver du temps de programmation, elles permettent de sauver du temps de testing.
Quand une fonction est testée, elle est testée.

Rappel : Un des objectifs d'avoir des fonctions est la réutilisation. Une fonction qui 
est testée (sous-entendu, il n'y a plus de bogues), peut être réutilisée dans
plusieurs projets sans avoir à la tester à nouveau.

Ce faisant,vous vous fabriquez une collection de fonctions qui vous permettra de sauver 
du temps dans les projets futurs. Il y aura du code que vous n'avez pas besoin de réécrire.

Par exemple, dans la création de certains systèmes (par exemple, système de paie), il
est estimé que jusqu'à 85% du code est du code réutilisé. par cela, on veut dire que 
lorsque vous êtes rendu à votre N-ième système de paie (pour votre N-ième client),
la plupart du code provient du travail lors de des (N-1) systèmes précédents. Il ne reste
qu'à écrire ce qui est différent des versons précédentes.

La gestion des versions est un thème couvert dans le cours de développement de logiciels.

*/
