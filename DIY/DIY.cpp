// DIY.cpp : définit le point d'entrée pour l'application console.
//

//#include "stdafx.h"
#include <iostream>
//#include <stdlib.h>
//#include <stdio.h>

using namespace std;

int main()
{
	double recipient, totalbase, totalconcentre, base, concentre;
	base = 80. / 100.;
	concentre = 20. / 100.;
	//char reponse oui='o',non='n';
	string reponse, oui = "oui", non="non";
	cout << "Entrer la capacite de votre recipient (en mL) : ";
	cin >> recipient;

	//do
	//{
		cout << "Voulez vous choisir le pourcentage d'arome ? (oui/non) : ";
		cin >> reponse;
		if (reponse == oui)
		{
			cout << "Entrer le pourcentage d'arome voulu : ";
			cin >> concentre;
			base = 100-concentre;
            concentre /= 100;
            base/=100;

		}
		else if (reponse == non)
		{
			cout << "Calcul par defaut avec " << base * 100 << "% de base et " << concentre * 100 << " % de concentre ..." << endl;
		}
		else
			cout << "Veuillez entrer oui ou non ";
	//}
	//while (reponse == oui || reponse == non);
	totalbase = recipient*base;
	totalconcentre = recipient*concentre;

	cout << "Dans votre recipient de " << recipient << "mL, vous devrez mettre " << totalbase << " mL de base et " << totalconcentre << " mL de concentre" << endl;
	//system("PAUSE");
	return 0;

}
