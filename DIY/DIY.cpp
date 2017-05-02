//#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

void Entete();
int ChoixRecipient();
bool ChoixOuiNon(string);
void CalculArome(int recipient);
int ChoixMarqueArome();
void CalculTaux(int,float,float);
void SwitchArome(int,int);
void CalculDefault(int);


int main()
{
	string pourcentagearome="le pourcentage d'arome", marqueconcentre="la marque du concentré";
	Entete();
	int cr=ChoixRecipient();
	if (ChoixOuiNon(pourcentagearome))
	{
		CalculArome(cr);
	}
	else
	{
		if (ChoixOuiNon(marqueconcentre))
		{
			int cma=ChoixMarqueArome();
			if (cma)
				SwitchArome(cma,cr);
			else
				CalculDefault(cr);
		}
	}
	return 0;
}

void Entete()
{
	cout<<"                               |-----------------|"<<endl;
    cout<<"                                DIY BY DIM & VAL"<<endl;
    cout<<"                               |-----------------|"<<endl<<endl<<endl;
}
int ChoixRecipient()
{
	int recipient;
	do
    {
		cout << "             ------------------------------------------------"<<endl;
        cout << "             Entrer la capacite de votre recipient (en mL) : ";
        cin >> recipient;
    }
    while (recipient<=0);
	return recipient;
}
bool ChoixOuiNon(string typephrase)
{
	string reponse, oui="oui", non="non";
	bool retour=false;
	do
    {
        cout << "         ---------------------------------------------------------"<<endl;
        cout << "         Voulez vous choisir "<<typephrase<<" ? (oui/non) : ";
        cin >> reponse;
    }
    while (reponse != oui && reponse != non);
	if (reponse==oui)
		retour=true;
	return retour;
}
void CalculArome(int recipient)
{
	int concentre1, totalbase, totalconcentre;
	do
        {
            cout << "                --------------------------------------"<<endl;
            cout << "                Entrer le pourcentage d'arome voulu : ";
            cin >> concentre1;

        }
        while (concentre1<=0);
        cout <<"                ---------------------------------------"<<endl;
        totalbase = recipient - concentre1*recipient/100;
        totalconcentre = concentre1*recipient/100;
        cout << endl;
        cout << endl;
        cout <<"                 Dans votre recipient de " << recipient << "mL "<<endl;
        cout <<"                '''''''''''''''''''''''''''''''''''''''''''''''"<<endl;
        cout <<"                Vous devrez mettre " <<totalbase<< " mL de base"<<endl;
        cout <<"                '''''''''''''''''''''''''''''''''''''''''''''''"<<endl;
        cout <<"                Vous devrez mettre " <<totalconcentre<< "mL de concentrés"<<endl;
        cout <<"                '''''''''''''''''''''''''''''''''''''''''''''''''''''''''"<<endl;
}
int ChoixMarqueArome()
{
	int choixmarque;
	do
	{
	cout << endl << endl
		<< "                                         1. 814" << endl
		<< "                                         2. A La CARTE"<< endl
		<< "                                         3. BIG MOUTH"<<endl
		<< "                                         4. CAPELLA FLAVORS"<<endl
		<< "                                         5. CIRKUS" << endl
		<< "                                         6. CLOUD VAPOR"<< endl
		<< "                                         7. BIG MOUTH"<<endl
		<< "                                         8. CAPELLA"<<endl
		<< "                                         9. 814" << endl
		<< "                                         10. A La CARTE"<< endl
		<< "                                         11 BIG MOUTH"<<endl
		<< "                                         12. CAPELLA"<<endl
		<< "                                         13. 814" << endl
		<< "                                         14. A La CARTE"<< endl
		<< "                                         15. BIG MOUTH"<<endl
		<< "                                         16. CAPELLA"<<endl
		<< "                                        ----------------"<<endl
		<< "                                         Votre choix -->";
	cin >> choixmarque;
	}
	while (choixmarque<0 && choixmarque>=16);
	return choixmarque;
}
void CalculTaux(int recipient,float base,float concentre)
{
	float totalbase,totalconcentre;
	base = base / 100.;
	concentre = concentre / 100.;
	totalbase = recipient*base;
	totalconcentre = recipient*concentre;
	cout << ""<<endl;
	cout << "                Dans votre recipient de " << recipient << "mL "<<endl;
	cout <<"                '''''''''''''''''''''''''''''''''''''''''''''''"<<endl;
	cout <<"                Vous devrez mettre " <<totalbase<< " mL de base"<<endl;
	cout <<"                '''''''''''''''''''''''''''''''''''''''''''''''"<<endl;
	cout <<"                Vous devrez mettre " <<totalconcentre<< "mL de concentrés"<<endl;
	cout <<"                '''''''''''''''''''''''''''''''''''''''''''''''''''''''''"<<endl;
}
void SwitchArome(int ChoixMarqueArome, int ChoixRecipient)
{
	switch(ChoixMarqueArome)
	{
		case 1:
		{
			CalculTaux(ChoixRecipient, 80, 20);
		}
		break;
		case 2:
		{
			CalculTaux(ChoixRecipient, 90, 10);
		}
		break;
		case 3:
		{
			CalculTaux(ChoixRecipient, 90, 10);
		}
		break;
		case 4:
		{
			CalculTaux(ChoixRecipient, 90, 10);
		}
		break;
		case 5 ... 10:
		{
			CalculTaux(ChoixRecipient, 85, 15);
		}
		break;
	}
}
void CalculDefault(int recipient)
{
	int base,concentre,totalbase,totalconcentre;
	base = 80. / 100.;
    concentre = 20. / 100.;
	totalbase = recipient*base;
	totalconcentre = recipient*concentre;
	cout << ""<<endl;
	cout << "Calcul par defaut avec " << base * 100 << "% de base et " << concentre * 100 << " % de concentre ..." << endl;
	cout << ""<<endl;
	cout << "Dans votre recipient de " << recipient << "mL, vous devrez mettre " << totalbase << " mL de base et " << totalconcentre << " mL de concentre" << endl;
}
