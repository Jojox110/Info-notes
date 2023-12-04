
#include <iostream>
using namespace std;

bool estBissextile(short annee)
{
	if (annee % 400 == 0) 		return true;
	if (annee % 100 == 0) 		return false;
	if (annee % 4 == 0) 		return true;
	return false;
}
struct uneDate
{
	short annee ;
	short mois;
	short jour;
};

// Exemple d'une fonction acceptant un paramètre formel de type uneDate passé par copie.
void afficher(uneDate date)
{
	cout << date.annee << "/" << date.mois << "/" << date.jour;
}

// Un exemple d'une fonction acceptant un paramètre formel de type uneDate passé par référence.
void lire(uneDate& date)
{
	char oblique; // Rôle : pour enlever les obliques de la date écrite au clavier.
	cin >> date.annee >> oblique >> date.mois >> oblique >> date.jour;
}

// Autre exemple d'une fonction acceptant un paramètre formel de type uneDate passé par référence.
void incrementer(uneDate& date)
{
	date.jour++;
	if (date.jour <= 28) return;
	switch (date.mois)
	{
	case 1 : // janvier
	case 3 : // mars
	case 5 : // mai
	case 7 : // juillet
	case 8 : // août
	case 10 : // octobre
	case 12 : // décembre
		if (date.jour > 31)
		{
			date.mois++;
			date.jour = 1;
		}
		break;
	case 2 : // février
		if (estBissextile(date.annee))
		{
			if (date.jour > 29)
			{
				date.mois++;
				date.jour = 1;
			}			
		}
		else
		{
			if (date.jour > 28)
			{
				date.mois++;
				date.jour = 1;
			}			
		}
		break;
	default : // Les autres mois : avril, juin, septembre et novembre.
		if (date.jour > 30)
		{
			date.mois++;
			date.jour = 1;
		}	
	}
	if( date.mois > 12 )
	{
		date.annee++;
		date.mois = 1;
	}

	// Le code est complexe car notre calendrier est loin d'être régulier :
	// mois de longueurs différentes (28, 28, 30 ou 31), 
	// quatre règles pour les années bissextiles.
}

// Exemple d'une fonction ayant un type de retour uneDate.
uneDate dateStandard()
{
	// La date standard est le 1er janvier 1970, pour fin de calcul de temps.
	uneDate date;
	date.annee = 1970;
	date.mois = 1;
	date.jour = 1;
	return date;	// L'expression dans l'instruction return doit être de type uneDate.
}


int main()
{
	uneDate date1;
	date1 = dateStandard();

	cout << "date1 = ";
	afficher(date1);
	cout << endl << endl ;

	uneDate date2 = { 1999, 12, 31 };
	cout << "date2 avant = ";
	afficher(date2);
	incrementer(date2);
	cout << "  date2 apres = ";
	afficher(date2);
	cout << endl << endl;


	uneDate date3 = { 1999, 12, 30 };
	cout << "date3 avant = ";
	afficher(date3);
	incrementer(date3);
	cout << "  date3 apres = ";
	afficher(date3);
	cout << endl << endl;


	uneDate date4 = { 1999, 11, 30 };
	cout << "date4 avant = ";
	afficher(date4);
	incrementer(date4);
	cout << "  date4 apres = ";
	afficher(date4);
	cout << endl << endl;

	uneDate date5 = { 1999, 2, 28 };
	cout << "date5 avant = ";
	afficher(date5);
	incrementer(date5);
	cout << "  date5 apres = ";
	afficher(date5);
	cout << endl << endl;

	uneDate date6 = { 2004, 2, 28 };
	cout << "date6 avant = ";
	afficher(date6);
	incrementer(date6);
	cout << "  date6 apres = ";
	afficher(date6);
	cout << endl << endl;

	uneDate date7 = { 2004, 2, 29 };
	cout << "date7 avant = ";
	afficher(date7);
	incrementer(date7);
	cout << "  date7 apres = ";
	afficher(date7);
	cout << endl << endl;

	uneDate date8 = { 2100, 2, 28 };
	cout << "date8 avant = ";
	afficher(date8);
	incrementer(date8);
	cout << "  date8 apres = ";
	afficher(date8);
	cout << endl << endl;



}
/*

Pour les unions, c'est similaire : vous pouvez avoir des 
paramètres passés par copie ou passés par référence.
Vous pouvez avoir un type de retour qui est un union.

*/