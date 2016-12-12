#include <iostream>
#include <iomanip>

using namespace std;

void Entete();
int ChoixRecipient();
bool ChoixOuiNon(string);
void CalculArome(int &recipient);
int ChoixMarqueArome();

int main()
{
	string pourcentagearome="le pourcentage d'arome", marqueconcentre="la marque du concentré";
	Entete();
	int a = ChoixRecipient();
	ChoixOuiNon(pourcentagearome);
	if (ChoixOuiNon(pourcentagearome))
	{
		CalculArome(a);
	}
	else
	{
		ChoixOuiNon(marqueconcentre);
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
void CalculArome(int &recipient)
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
