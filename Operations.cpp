#include "Operations.h"

int addition(int a, int b)
{
	int resultat;
	
	resultat = a + b;
	
	return resultat;
}

int soustraction(int a, int b)
{
	int resultat;
	
	resultat = a - b;
	
	return resultat;
}

int multiplication(int a, int b)
{
	int resultat;

	resultat = a * b;

	return resultat;
}

int division(int a, int b)
{
	float resultat;

	resultat = a / b;

	return resultat;
}

int factoriel(int a)
{
    int factoriel=1;

    int i;

    for(i=1;i<=a;i++)
        factoriel*=i;

    return factoriel;
}

int exposant(int nbre, int exp)
{
	int resultat, i;

	for (i=0;i<=exp;i++)
	{
		resultat = resultat * nombre;
	}
	return resultat;
	
}