// DIY.cpp : définit le point d'entrée pour l'application console.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main()
{
	double recipient, totalbase, totalconcentre, base, concentre;
	base = 90. / 100.;
	concentre = 10. / 100.;
	int reponce,oui='oui';
	cout << "Entrer la capacite de votre recipient (en mL) : ";
	cin >> recipient;
	cout << "Voulez vous choisir le pourcentage d'arome ? (oui/non) : ";
	cin >> reponce;
	if (reponce == oui)
	{
		cout << "Entrer le pourcentage d'arome voulu : ";
		cin >> concentre;
		concentre = concentre / 100;
	}
	else
	{
		cout << "Calcul par defaut avec 90% de base et 10% de concentre ..." << endl;
	}
	totalbase = recipient*base;
	totalconcentre = recipient*concentre;

	cout << "Dans votre recipient de " << recipient << "mL, vous devrez mettre " << totalbase << " mL de base et " << totalconcentre << " mL de concentre" <<endl;
	system("PAUSE");
	return 0;
	
}

