//#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	double recipient, totalbase, totalconcentre, base, concentre;
	base = 80. / 100.;
	concentre = 20. / 100.;
	string reponse, reponse2, oui = "oui", non = "non";

	do
	{
	cout << "Entrer la capacite de votre recipient (en mL) : ";
	cin >> recipient;
	//system("clear");
	}
	while (recipient<=0);
	do
	{
		cout << "Voulez vous choisir le pourcentage d'arome ? (oui/non) : ";
		cin >> reponse;
		//system("clear");
	}
	while (reponse != oui && reponse != non);

	if (reponse == oui)
	{
		cout << "Entrer le pourcentage d'arome voulu : ";
		cin >> concentre;
		//system("clear");
		base = 100-concentre;
		concentre /= 100;
		base/=100;
	}
	else if (reponse == non)
	{
		
		cout << "Connaissez vous la marque du concentré ? (oui/non) : ";
		cin>>reponse2;
		//system("clear");
		do
		{
		if (reponse2==oui)
		{
			cout<<"Voici la liste des marques connues :"<<endl
				<<"1. Red Aster"<<endl
				<<"2. VDLV"<<endl;
				
		}
		else if (reponse2==non)
		{
			cout << "Calcul par defaut avec " << base * 100 << "% de base et " << concentre * 100 << " % de concentre ..." << endl;
		}
		else
		cout << "Veuillez entrer oui ou non ";
		}
		while (reponse != oui && reponse != non);
	}

	else
	cout << "Veuillez entrer oui ou non ";
	
	totalbase = recipient*base;
	totalconcentre = recipient*concentre;

	cout << "Dans votre recipient de " << recipient << "mL, vous devrez mettre " << totalbase << " mL de base et " << totalconcentre << " mL de concentre" << endl;
	//system("PAUSE");
	return 0;
	
}
