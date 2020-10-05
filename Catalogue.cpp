/*************************************************************************
                           Catalogue  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $ANNEE$ par $AUTEUR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <Catalogue> (fichier Catalogue.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Catalogue.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type Catalogue::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode
void Catalogue::RechercherTrajetSimple(const char * depart,const char * arrivee)
{
  // On parcours le catalogue
  for(unsigned int i=0;i<tailleAct;i++)
  {
    tab[i].pointeurSurTrajet->concatDepart(); // on remplit pileDepart
    tab[i].pointeurSurTrajet->concatArrivee(); // on remplit pileArrivee
    if( strstr(tab[i].pointeurSurTrajet->pileDepart,depart)!=nullptr )
    {
      if( strstr(tab[i].pointeurSurTrajet->pileArrivee,arrivee)!=nullptr )
      {
        tab[i].pointeurSurTrajet->Afficher(); cout << ""<< endl;
      }
    }
  }
}
void Catalogue::Afficher() const
{
  if(tailleAct<=0)
  {
    cout << "Le catalogue est vide pour le moment !" << endl;
    return;
  }
  for(unsigned int i=0;i<tailleAct;i++)
  {
    tab[i].pointeurSurTrajet->Afficher(); cout << ""<< endl;
  }
}

void Catalogue::Ajouter( Trajet * unTrajet )
{
  if(tailleAct<tailleMax)
  {
    tab[tailleAct]=TrajetComposee(1,1,unTrajet);
  }
  tailleAct++;
}

//-------------------------------------------- Constructeurs - destructeur
Catalogue::Catalogue ( const Catalogue & unCatalogue )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Catalogue>" << endl;
#endif
} //----- Fin de Catalogue (constructeur de copie)


Catalogue::Catalogue ( int taille )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Catalogue>" << endl;
#endif
  tailleMax=taille;
  tailleAct=0;
  tab=(TrajetComposee*)malloc(sizeof(TrajetComposee)*taille);
} //----- Fin de Catalogue


Catalogue::~Catalogue ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Catalogue>" << endl;
#endif
free(tab);
} //----- Fin de ~Catalogue


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
