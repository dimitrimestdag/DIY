/****************************************************************************
  *  Fichier:  IHM.h
  *  Projet:
  *  Crée le:  2015-01-05-12.05
  *  Utilité:  gestion de l'IHM
  *  Auteur:   Éric Laly (eric.laly@ozanam.eu)
  ****************************************************************************/
#ifndef IHM_H
#define IHM_H

// affichage trace
#define TRACE
#if defined(TRACE)
    #ifndef TRACE_ONLY
      #define TRACE_ONLY(x) x
    #endif
#else
    #ifndef TRACE_ONLY
      #define TRACE_ONLY(x)
    #endif
#endif

// couleur texte
#define RESET   "\033[0m"
#define NOIR    "\033[30m"
#define ROUGE   "\033[31m"
#define VERT    "\033[32m"
#define JAUNE   "\033[33m"
#define BLEU    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define BLANC   "\033[37m"

#include <string>
using namespace std;

class DIY
{
    public:
		DIY();
		~DIY();
		string SaisieChaine(string question);
		unsigned int SaisieUnsignedInt(string question);
		void AfficheMessage(string message,string couleur=BLANC);
		void Entete();
		int ChoixRecipient();
		bool ChoixOuiNon(string);
		void CalculArome(int recipient);
		int ChoixMarqueArome();
		void SwitchArome(int,int);
		void CalculDefault(int);
    protected:
	private:
		
		void CalculTaux(int,float,float);
		
};

#endif // IHM_H
