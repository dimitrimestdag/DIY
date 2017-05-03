#include <iostream>
using namespace std;
#include <DIY.h>

int main()
{
	string pourcentagearome="le pourcentage d'arome", marqueconcentre="la marque du concentré";
	DIY diy1;
	diy1.Entete();
	int cr=diy1.ChoixRecipient();
	if (diy1.ChoixOuiNon(pourcentagearome))
	{
		diy1.CalculArome(cr);
	}
	else
	{
		if (diy1.ChoixOuiNon(marqueconcentre))
		{
			int cma=diy1.ChoixMarqueArome();
			if (cma)
				diy1.SwitchArome(cma,cr);
			else
				diy1.CalculDefault(cr);
		}
	}
    return 0;
}
