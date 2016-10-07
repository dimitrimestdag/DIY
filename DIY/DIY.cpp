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
	base = 85. / 100.;
	concentre = 15. / 100.;
	char reponce, oui ='o';
	cout << "Entrer la capacite de votre recipient (en mL) : ";
	cin >> recipient;
	cout << "Voulez vous choisir le pourcentage d'arome ? (o/n) : ";
	cin >> reponce;
	if (reponce == oui)
	{
		cout << "Entrer le pourcentage d'arome voulu : ";
		cin >> concentre;
		concentre = concentre / 100;
	}
	else
	{
		cout << "Calcul par defaut avec 85% de base et 15% de concentre ..." << endl;
	}
	totalconcentre = recipient*concentre;
	totalbase = recipient-totalconcentre;

	cout << "Dans votre recipient de " << recipient << "mL, vous devrez mettre " << totalbase << " mL de base et " << totalconcentre << " mL de concentre" <<endl;
	system("PAUSE");
	return 0;
	
}

