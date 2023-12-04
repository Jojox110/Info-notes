
#include <iostream>
using namespace std;

// Premier cas
/*
union unUnion
{
	float	 	A;
	double 		B;
	short 		C;
	long long	D;
};
*/

// Deuxième cas
/*
union unUnion
{
	short	 	A;
	long 		B;
	long 		C;
	short		D;
};
*/

// Troisième cas
/*
union unUnion
{
	double	 	A;
	short 		B;
	bool 		C;
	short		D;
};
*/

// Quatrième cas
/*
union unUnion
{
	double	 	A;
	bool 		B;
	bool 		C;
	short		D;
};
*/

// Cinquième cas
/*
union unUnion
{
	bool	 	A;
	bool 		B;
	bool 		C;
	bool		D;
};
*/

// Sixième cas
/*
union unUnion
{
	bool	 	A;
	bool 		B;
	bool 		C;
	short		D;
};
*/

// Septième cas
union unUnion
{
	bool	 	A;
	short 		B;
	long 		C;
	long long	D;
};


unsigned long long maximum(unsigned long long X, unsigned long long Y)
{
	if (X > Y)
		return X;
	else
		return Y;
}

int main()
{
	unUnion V;



	/*
	Pour le septième cas, voici un exemple de ce qui se passe quand on consulte ou modifie une varaible de type union.
	*/
	cout << endl << endl << endl << endl;

	cout << "Pour le septieme cas." << endl;
	cout << "V.D = 0b0101001000000000100101010101010110101010111100000000111100000001;" << endl;
	V.D = 0b0101001000000000100101010101010110101010111100000000111100000001;

	cout << "V.A = " << V.A << endl;
	cout << "V.B = " << V.B << endl;
	cout << "V.C = " << V.C << endl;
	cout << "V.D = " << V.D << endl;
	cout << endl << endl;

	// Modifions V.B.
	V.B = 0;
	cout << "V.A = " << V.A << endl;
	cout << "V.B = " << V.B << endl;
	cout << "V.C = " << V.C << endl;
	cout << "V.D = " << V.D << endl;
	cout << endl << endl;


	// Modifions V.C.
	V.C = 0;
	cout << "V.A = " << V.A << endl;
	cout << "V.B = " << V.B << endl;
	cout << "V.C = " << V.C << endl;
	cout << "V.D = " << V.D << endl;
	cout << endl << endl;

	// Modifions V.D.
	V.D = 4808886907282708763;
	cout << "V.A = " << V.A << endl;
	cout << "V.B = " << V.B << endl;
	cout << "V.C = " << V.C << endl;
	cout << "V.D = " << V.D << endl;
	cout << endl << endl;
	


	// Modifions V.D à nouveau
	V.D = 0;
	cout << "V.A = " << V.A << endl;
	cout << "V.B = " << V.B << endl;
	cout << "V.C = " << V.C << endl;
	cout << "V.D = " << V.D << endl;
	cout << endl << endl;

	// Modifions V.A.
	V.A = 65;
	cout << "V.A = " << V.A << endl;
	cout << "V.B = " << V.B << endl;
	cout << "V.C = " << V.C << endl;
	cout << "V.D = " << V.D << endl;
	cout << endl << endl;


	// Modifions V.B.
	V.B = 12345;
	cout << "V.A = " << V.A << endl;
	cout << "V.B = " << V.B << endl;
	cout << "V.C = " << V.C << endl;
	cout << "V.D = " << V.D << endl;
	cout << endl << endl;
	V.A = 57;
	cout << "V.A = " << V.A << endl;



}


