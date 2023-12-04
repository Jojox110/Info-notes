#include <iostream>
#include <fstream>
using namespace std;
void echanger(long& A, long& B)
{
    long transfert = A;
    A = B;
    B = transfert;
}

void TriPartielInsertion(long T[], long debut, long droite)
{
    for (int i = droite; i > debut; i--)
    {
        if (T[i] < T[i - 1])
        {
            echanger(T[i], T[i - 1]);
        }
    }
    
}
    
void TriParInsertion(long T[], long debut, long fin)
{
    for (int droite = debut + 1; droite <= fin; droite++)
    {
        TriPartielInsertion(T, debut, droite);
    }
        
}
bool Lire(string nomFichierEntree, long T[], long tailleDeclaree, long& N)

{

    ifstream entree(nomFichierEntree, ios::in);

    entree >> N;

    if (N > tailleDeclaree)

        return false; // La lecture est un échec - la tableau n'est pas assez grand pour le nombre voulu de données.

    for (long K = 0; K < N; K++)

        entree >> T[K];

    entree.close();

    return true; // La lecture est réussie.

}
void Ecrire(string nomFichierSortie, long T[], long N)
{
    ofstream sortie(nomFichierSortie, ios::out);
    sortie << N;
    sortie << endl;
    for (long K = 0; K < N; K++)
        sortie << T[K] << endl;
    sortie.close();
}
int main()
{
    const long tailleDuTableau = 10000;
    long T[tailleDuTableau] = { 0 };
    long N, debut, fin;
    string nomFichierEntree;
    string nomFichierSortie;
    string nomFichierCommandes;
    cout << "Entrer le nom du fichier de commandes : ";
    cin >> nomFichierCommandes;
    nomFichierCommandes += ".txt";
    ifstream commandes(nomFichierCommandes, ios::in);
    commandes >> nomFichierEntree;
    commandes >> nomFichierSortie;
    commandes >> debut;
    commandes >> fin;
    commandes.close();
    if (!Lire(nomFichierEntree, T, tailleDuTableau, N))
    {
        cout << "La lecture des donnes est un echec." << endl;
        return -1;
    }
    if (!(0 <= debut && debut <= fin && fin < N))
    {
        cout << "Une ou plusieurs des donnees de fin ou debut sont invalides" << endl;
        return -2;
    }
    TriParInsertion(T, debut, fin);
    Ecrire(nomFichierSortie, T, N);
}

