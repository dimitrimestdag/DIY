//#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

void AfficheListe();
int CalculTaux(int, float, float );

int main()
{

    double recipient, totalbase, totalconcentre, base, concentre,concentre1;
    base = 80. / 100.;
    concentre = 20. / 100.;
    string reponse, reponse2, oui = "oui", non = "non";

    cout<<"                               |-----------------|"<<endl;
    cout<<"                                DIY BY DIM & VAL"<<endl;
    cout<<"                               |-----------------|"<<endl<<endl<<endl;

    do

    {
        cout << "             ------------------------------------------------"<<endl;
        cout << "             Entrer la capacite de votre recipient (en mL) : ";

        cin >> recipient;

    }
    while (recipient<=0);
    do
    {
        cout << "         ---------------------------------------------------------"<<endl;
        cout << "         Voulez vous choisir le pourcentage d'arome ? (oui/non) : ";
        cin >> reponse;

    }
    while (reponse != oui && reponse != non);

    if (reponse == oui)

    {
        do
        {
            cout << "                --------------------------------------"<<endl;
            cout << "                Entrer le pourcentage d'arome voulu : ";
            cin >> concentre1;

        }
        while (concentre1<=0);
        cout << "                ---------------------------------------"<<endl;
        totalbase = recipient - concentre1*recipient/100;
        totalconcentre = concentre1*recipient/100;
        cout << ""<<endl;
        cout << ""<<endl;
        cout << "                Dans votre recipient de " << recipient << "mL "<<endl;
        cout <<"                '''''''''''''''''''''''''''''''''''''''''''''''"<<endl;
        cout <<"                Vous devrez mettre " <<totalbase<< " mL de base"<<endl;
        cout <<"                '''''''''''''''''''''''''''''''''''''''''''''''"<<endl;
        cout <<"                Vous devrez mettre " <<totalconcentre<< "mL de concentrés"<<endl;
        cout <<"                '''''''''''''''''''''''''''''''''''''''''''''''''''''''''"<<endl;

    }

    else if (reponse == non)

    {
        do
        {

            cout << "            -----------------------------------------------------"<<endl;
            cout << "            Connaissez vous la marque du concentré ? (oui/non) : ";
            cin>>reponse2;

        }
        while (reponse2 != oui && reponse2 != non);


        if (reponse2==oui)
        {
            int choixconcentre;
            //do
            //{
                AfficheListe();
                cin >> choixconcentre;
            //}
            //while (choixconcentre>=0 && choixconcentre<=16);

            switch(choixconcentre)
            {


                case 1:

                {
                    CalculTaux(recipient, 80, 20);


                }
                break;
                case 2:

                {
                    CalculTaux(recipient, 90, 10);
                }
                break;
                case 3:

                {
                    CalculTaux(recipient, 90, 10);
                }
                break;
                case 4:

                {
                    CalculTaux(recipient, 90, 10);
                }
                break;
                case 5 ... 10:

                {
                    CalculTaux(recipient, 85, 15);
                }
                break;
                    /*case 6:

                    {
                        CalculTaux(recipient, 85, 15);
                    }
                    break;
                    case 7:

                    {
                        CalculTaux(recipient, 85, 15);
                    }
                    break;
                    case 8:

                    {
                        CalculTaux(recipient, 85, 15);
                    }
                    break;
                    case 9:

                    {
                        CalculTaux(recipient, 85, 15);
                    	}
                    break;
                    case 10:

                    {
                        CalculTaux(recipient, 85, 15);
                    }*/

            }



        }
        else if (reponse2==non)
        {
            totalbase = recipient*base;
            totalconcentre = recipient*concentre;
            cout << ""<<endl;
            cout << "Calcul par defaut avec " << base * 100 << "% de base et " << concentre * 100 << " % de concentre ..." << endl;
            cout << ""<<endl;
            cout << "Dans votre recipient de " << recipient << "mL, vous devrez mettre " << totalbase << " mL de base et " << totalconcentre << " mL de concentre" << endl;

        }

    }

}
void AfficheListe()
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
         << "                                         ----------------"<<endl
         << "                                         Votre choix -->";
}
int CalculTaux(int recipient, float base, float concentre)
{
    float totalbase,totalconcentre,base1,concentre1;
    base1 = base / 100.;
    concentre1 = concentre / 100.;
    totalbase = recipient*base1;
    totalconcentre = recipient*concentre1;
    cout << ""<<endl;
    cout << "                Dans votre recipient de " << recipient << "mL "<<endl;
    cout <<"                '''''''''''''''''''''''''''''''''''''''''''''''"<<endl;
    cout <<"                Vous devrez mettre " <<totalbase<< " mL de base"<<endl;
    cout <<"                '''''''''''''''''''''''''''''''''''''''''''''''"<<endl;
    cout <<"                Vous devrez mettre " <<totalconcentre<< "mL de concentrés"<<endl;
    cout <<"                '''''''''''''''''''''''''''''''''''''''''''''''''''''''''"<<endl;
}
