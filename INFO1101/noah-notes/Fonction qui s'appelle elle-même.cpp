// Fonction qui s'appelle elle-même.cpp 

/*

    Le vrai terme est "fonction récursive".
    On parle de récursion ou de récursivité.

    L'expression "Fonction qui s'appelle elle-même" 
    est incorrecte, ou du moins pas assez précise.

    Il faudrait plutôt dire "copie d'une fonction 
    qui appelle une copie de la même fonction".
    Chacune des copies est indépendante des autres.

*/
#include <iostream>
using namespace std;

void hyperSimple(long N)
{
    if (N <= 0)
    {
        cout << "N = " << N << "  adresse de N = " << &N << endl;
        cout << "dernier appel recursif." << endl;
        return;
    }
    cout << "avant l'appel - N = " << N << "  adresse de N = " << &N << endl;
    hyperSimple(N-1);
    cout << "apres l'appel - N = " << N << "  adresse de N = " << &N << endl;
}
int main()
{
    cout << "Fonction qui s'appelle elle-meme" << endl << endl;
    cout << endl << "========== hyperSimple(0) ================ " << endl << endl;
    hyperSimple(0);
    cout << endl << "========== hyperSimple(1) ================ " << endl << endl;
    hyperSimple(1);
    cout << endl << "========== hyperSimple(2) ================ " << endl << endl;
    hyperSimple(2);
    cout << endl << "========== hyperSimple(3) ================ " << endl << endl;
    hyperSimple(3);
    cout << endl << "========== hyperSimple(4) ================ " << endl << endl;
    hyperSimple(4);
    cout << endl << "========== hyperSimple(5) ================ " << endl << endl;
    hyperSimple(5);
	return ;
}
