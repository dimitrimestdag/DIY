 /****************************************************************************
  *  Fichier:  IHM.cpp
  *  Projet:
  *  Crée le:  2015-01-05-12.05
  *  Utilité:  gestion de l'IHM
  *  Auteur:   Éric Laly (eric.laly@ozanam.eu)
  ****************************************************************************/
#include <iostream>
using namespace std;
#include "DIY.h"
#include <sstream>


DIY::DIY()
{
    //ctor
}

DIY::~DIY()
{
    //dtor
}

string DIY::SaisieChaine(string question)
{
    string chaine;
    cout << question;
    getline(cin,chaine); // pour saisir les espaces
    return chaine;
}
    
unsigned int DIY::SaisieUnsignedInt(string question)
{
    unsigned int nombre;
    string snombre;
    bool conversionOK=false;
    
    // on oblige l'utilisateur à saisir un nombre entier positif
    do
    {
        cout << question;
        // on saisie une chaîne terminée par un '\n'
        cin>>snombre;
        // on vérifie qu'il n'est constitué que de chiffres
        if (snombre.find_first_not_of( "0123456789" ) == string::npos)
        {
            istringstream iss(snombre);
            if (iss >> nombre) // on convertit
                    conversionOK=true;
        }
    }
    while (!conversionOK);
    cin.ignore(); // on vide le buffer d'entrée
    return nombre;
}

void DIY::AfficheMessage(string message,string couleur)
{
    cout << couleur <<message<<RESET;
}

void DIY::Entete()
{
	cout<<"                               |-----------------|"<<endl;
    cout<<"                                DIY BY DIM & VAL"<<endl;
    cout<<"                               |-----------------|"<<endl<<endl<<endl;
}
int DIY::ChoixRecipient()
{
	int m_recipient;
	do
    {
		cout << "             ------------------------------------------------"<<endl;
        cout << "             Entrer la capacite de votre recipient (en mL) : ";
        cin >> m_recipient;
    }
    while (m_recipient<=0);
	return m_recipient;
}
bool DIY::ChoixOuiNon(string typephrase)
{
	string m_reponse, oui="oui", non="non";
	bool m_retour=false;
	do
    {
        cout << "         ---------------------------------------------------------"<<endl;
        cout << "         Voulez vous choisir "<<typephrase<<" ? (oui/non) : ";
        cin >> m_reponse;
    }
    while (m_reponse != oui && m_reponse != non);
	if (m_reponse==oui)
		m_retour=true;
	return m_retour;
}
void DIY::CalculArome(int recipient)
{
	int m_concentre1, m_totalbase, m_totalconcentre;
	do
        {
            cout << "                --------------------------------------"<<endl;
            cout << "                Entrer le pourcentage d'arome voulu : ";
            cin >> m_concentre1;

        }
        while (m_concentre1<=0);
        cout <<"                ---------------------------------------"<<endl;
        m_totalbase = recipient - m_concentre1*recipient/100;
        m_totalconcentre = m_concentre1*recipient/100;
        cout << endl;
        cout << endl;
        cout <<"                 Dans votre recipient de " << recipient << "mL "<<endl;
        cout <<"                '''''''''''''''''''''''''''''''''''''''''''''''"<<endl;
        cout <<"                Vous devrez mettre " << m_totalbase << " mL de base"<<endl;
        cout <<"                '''''''''''''''''''''''''''''''''''''''''''''''"<<endl;
        cout <<"                Vous devrez mettre " << m_totalconcentre << "mL de concentrés"<<endl;
        cout <<"                '''''''''''''''''''''''''''''''''''''''''''''''''''''''''"<<endl;
}
int DIY::ChoixMarqueArome()
{
	int m_choixmarque;
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
	cin >> m_choixmarque;
	}
	while (m_choixmarque<0 && m_choixmarque>=16);
	return m_choixmarque;
}
void DIY::CalculTaux(int recipient,float base,float concentre)
{
	float m_totalbase,m_totalconcentre;
	base = base / 100.;
	concentre = concentre / 100.;
	m_totalbase = recipient*base;
	m_totalconcentre = recipient*concentre;
	cout << ""<<endl;
	cout << "                Dans votre recipient de " << recipient << "mL "<<endl;
	cout <<"                '''''''''''''''''''''''''''''''''''''''''''''''"<<endl;
	cout <<"                Vous devrez mettre " <<m_totalbase<< " mL de base"<<endl;
	cout <<"                '''''''''''''''''''''''''''''''''''''''''''''''"<<endl;
	cout <<"                Vous devrez mettre " <<m_totalconcentre<< "mL de concentrés"<<endl;
	cout <<"                '''''''''''''''''''''''''''''''''''''''''''''''''''''''''"<<endl;
}
void DIY::SwitchArome(int ChoixMarqueArome, int ChoixRecipient)
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
void DIY::CalculDefault(int recipient)
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
