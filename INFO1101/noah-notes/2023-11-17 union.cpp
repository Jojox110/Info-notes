// INFO1101 union.cpp 


#include <iostream>
#include <string>
using namespace std;

/*
    Pourquoi les union ?

    Parfois, on a besoin d'avoir des façons différentes 
    de stocker une information.
*/



/*
    Définition d'un union. 
    Le mot union dit au compilateur que ce 
    qui suit est la définition d'un union.
    Ensuite vient la paire d'accolades.
    Entre les accolades, on trouve des
    définitions de champs.
*/
union exempleUnion
{
    short       nombre1;
    long        nombre2;
    long long   nombre3;
};

// Cette définition de struct est pour
// montrer la différence entre un
// struct et un union. Voir dans le main().



struct exempleStruct
{
    short       nombre1;
    long        nombre2;
    long long   nombre3;
};

int main()
{
    /*
        Différences entre struct et union.
    */

    exempleUnion V_U;
    exempleStruct V_S;

    cout << "\t\t" << "V_U" << "\t\t\t" << "V_S" << endl;
    cout << endl << "Les types" << endl;
    cout << "Variable : " << typeid(V_U).name() << "\t" << typeid(V_S).name() << endl;
    cout << "nombre1  : " << typeid(V_U.nombre1).name() << "\t\t" << typeid(V_S.nombre1).name() << endl;
    cout << "nombre2  : " << typeid(V_U.nombre2).name() << "\t\t\t" << typeid(V_S.nombre2).name() << endl;
    cout << "nombre3  : " << typeid(V_U.nombre3).name() << "\t\t" << typeid(V_S.nombre3).name() << endl;
    cout << endl << "Taille, en octets " << endl;
    cout << "Variable : " << sizeof(V_U) << "\t\t\t" << sizeof(V_S) << endl;
    cout << "nombre1  : " << sizeof(V_U.nombre1) << "\t\t\t" << sizeof(V_S.nombre1) << endl;
    cout << "nombre2  : " << sizeof(V_U.nombre2) << "\t\t\t" << sizeof(V_S.nombre2) << endl;
    cout << "nombre3  : " << sizeof(V_U.nombre3) << "\t\t\t" << sizeof(V_S.nombre3) << endl;
    cout << endl << "Les adresses, en hexadecimal " << endl;
    cout << "Variable : " << &V_U << "\t" << &V_S << endl;
    cout << "nombre1  : " << &V_U.nombre1 << "\t" << &V_S.nombre1 << endl;
    cout << "nombre2  : " << &V_U.nombre2 << "\t" << &V_S.nombre2 << endl;
    cout << "nombre3  : " << &V_U.nombre3 << "\t" << &V_S.nombre3 << endl;

    cout << endl << "Les decalages, par rapport a la variable, decimal " << endl;
    cout << "Variable : " << long long(&V_U) - long long(&V_U) << "\t" << long long(&V_S) - long long(&V_S) << endl;
    cout << "nombre1  : " << long long(&V_U.nombre1) - long long(&V_U) << "\t" << long long(&V_S.nombre1) - long long(&V_S) << endl;
    cout << "nombre2  : " << long long(&V_U.nombre2) - long long(&V_U) << "\t" << long long(&V_S.nombre2) - long long(&V_S) << endl;
    cout << "nombre3  : " << long long(&V_U.nombre3) - long long(&V_U) << "\t" << long long(&V_S.nombre3) - long long(&V_S) << endl;

    /*
    La taille d'un union est la taille de son plus grand champ.
    La taille d'un struct est au moins la somme des tailles de ses champs.

    Les décalages des champs d'un union sont tous 0. Les champs sont 
    vus comme superposés en mémoire. Conséquence : Si vous modifiez un 
    champ, vous modifiez tous les champs.
    
    */

    V_U.nombre1 = 1919;                 V_S.nombre1 = 1919;
    V_U.nombre2 = 282828282;            V_S.nombre2 = 282828282;
    V_U.nombre3 = 3737373737373737373;  V_S.nombre3 = 3737373737373737373;
    cout << endl << "Les valeurs des champs, prise 1" << endl;
    cout << "V_U.nombre1 : " << V_U.nombre1 << "\t\t\t" << "V_S.nombre1 : " << V_S.nombre1 << endl;
    cout << "V_U.nombre2 : " << V_U.nombre2 << "\t\t" << "V_S.nombre2 : " << V_S.nombre2 << endl;
    cout << "V_U.nombre3 : " << V_U.nombre3 << "\t" << "V_S.nombre3 : " << V_S.nombre3 << endl;

    V_U.nombre2 = 828282828;            V_S.nombre2 = 828282828;

    cout << endl << "Les valeurs des champs, prise 2" << endl;
    cout << "V_U.nombre1 : " << V_U.nombre1 << "\t\t\t" << "V_S.nombre1 : " << V_S.nombre1 << endl;
    cout << "V_U.nombre2 : " << V_U.nombre2 << "\t\t\t" << "V_S.nombre2 : " << V_S.nombre2 << endl;
    cout << "V_U.nombre3 : " << V_U.nombre3 << "\t" << "V_S.nombre3 : " << V_S.nombre3 << endl;

    V_U.nombre1 = 9191;                 V_S.nombre1 = 9191;
    cout << endl << "Les valeurs des champs, prise 3" << endl;
    cout << "V_U.nombre1 : " << V_U.nombre1 << "\t\t\t" << "V_S.nombre1 : " << V_S.nombre1 << endl;
    cout << "V_U.nombre2 : " << V_U.nombre2 << "\t\t\t" << "V_S.nombre2 : " << V_S.nombre2 << endl;
    cout << "V_U.nombre3 : " << V_U.nombre3 << "\t" << "V_S.nombre3 : " << V_S.nombre3 << endl;

    V_U.nombre3 = 0;                    V_S.nombre3 = 0;
    cout << endl << "Les valeurs des champs, prise 4" << endl;
    cout << "V_U.nombre1 : " << V_U.nombre1 << "\t\t\t\t" << "V_S.nombre1 : " << V_S.nombre1 << endl;
    cout << "V_U.nombre2 : " << V_U.nombre2 << "\t\t\t\t" << "V_S.nombre2 : " << V_S.nombre2 << endl;
    cout << "V_U.nombre3 : " << V_U.nombre3 << "\t\t\t\t" << "V_S.nombre3 : " << V_S.nombre3 << endl;

    V_U.nombre3 = 32100;                V_S.nombre3 = 32100;
    cout << endl << "Les valeurs des champs, prise 5" << endl;
    cout << "V_U.nombre1 : " << V_U.nombre1 << "\t\t\t" << "V_S.nombre1 : " << V_S.nombre1 << endl;
    cout << "V_U.nombre2 : " << V_U.nombre2 << "\t\t\t" << "V_S.nombre2 : " << V_S.nombre2 << endl;
    cout << "V_U.nombre3 : " << V_U.nombre3 << "\t\t\t" << "V_S.nombre3 : " << V_S.nombre3 << endl;

    V_U.nombre3 = 123456789;            V_S.nombre3 = 123456789;
    cout << endl << "Les valeurs des champs, prise 6" << endl;
    cout << "V_U.nombre1 : " << V_U.nombre1 << "\t\t\t" << "V_S.nombre1 : " << V_S.nombre1 << endl;
    cout << "V_U.nombre2 : " << V_U.nombre2 << "\t\t\t" << "V_S.nombre2 : " << V_S.nombre2 << endl;
    cout << "V_U.nombre3 : " << V_U.nombre3 << "\t\t\t" << "V_S.nombre3 : " << V_S.nombre3 << endl;

    V_U.nombre3 = 987654321123456789;    V_S.nombre3 = 987654321123456789;
    cout << endl << "Les valeurs des champs, prise 7" << endl;
    cout << "V_U.nombre1 : " << V_U.nombre1 << "\t\t\t" << "V_S.nombre1 : " << V_S.nombre1 << endl;
    cout << "V_U.nombre2 : " << V_U.nombre2 << "\t\t" << "V_S.nombre2 : " << V_S.nombre2 << endl;
    cout << "V_U.nombre3 : " << V_U.nombre3 << "\t" << "V_S.nombre3 : " << V_S.nombre3 << endl;

}
 /*
 Une façon de voir les variables de type unions, 
 c'est de les voir comme des variables qui peuvent 
 changer de type.

 Habituellement, on va leurs associer une autre 
 information qui indiquera quel type est en usage.

 Exemple
 struct uneDonnee
 {
     short choix ; // 1 ==> short, 2 ==> long, 3 ==> long long
     exempleUnion U ;
 } ;

 uneDonnee D ;
 
 Pour entrer une donnee du clavier :
 cin >> D.choix ;
 switch( D.choix)
 {
 case 1 : cin >> D.U.nombre1 ; break ;
 case 2 : cin >> D.U.nombre2 ; break ;
 case 3 : cin >> D.U.nombre3 ; break ;
  }


 Pour afficher la valeur correctement :
 switch( D.choix)
 {
 case 1 : cout << D.U.nombre1 ; break ;
 case 2 : cout << D.U.nombre2 ; break ;
 case 3 : cout << D.U.nombre3 ; break ;
 }

 
 */