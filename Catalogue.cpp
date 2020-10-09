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
/*
// Méthode Combiner
Catalogue  Catalogue::Combiner()
{
  unsigned int i,j;

  Catalogue  sousCatalogue(this->tailleMax);

  for(i=0;i<tailleAct-1;i++)
  {
    for(j=i+1;j<tailleAct;j++)
    {
        tableau[i].pointeurSurTrajet->globalDepart();
        tableau[i].pointeurSurTrajet->globalArrivee();
        tableau[j].pointeurSurTrajet->globalDepart();
        tableau[j].pointeurSurTrajet->globalArrivee();

        if(strcmp(tableau[i].pointeurSurTrajet->villeArriveeGlobal,
          tableau[j].pointeurSurTrajet->villeDepartGlobal)==0)
        {
          TrajetCompose * tmp = new TrajetCompose(1,1,tableau[i].pointeurSurTrajet);
          tmp->Ajouter(tableau[j].pointeurSurTrajet);
          sousCatalogue.Ajouter(tmp);
        }
        else if (strcmp(tableau[i].pointeurSurTrajet->villeDepartGlobal,
          tableau[j].pointeurSurTrajet->villeArriveeGlobal)==0)
        {
          TrajetCompose * tmp =new TrajetCompose(1,1,tableau[j].pointeurSurTrajet);
          tmp->Ajouter(tableau[i].pointeurSurTrajet);
          sousCatalogue.Ajouter(tmp);
        }
    }
  }
  return sousCatalogue;
} // Fin de Combiner

// Méthode RechercherTrajetAvancee
void Catalogue::RechercherTrajetAvancee(const char * depart,const char * arrivee)
{
  if(tailleAct<=1)
  {
    return;
  }
  else
  {
    this->RechercherTrajetSimple(depart,arrivee);
    this->Combiner().RechercherTrajetAvancee(depart,arrivee);
  }
}// Fin de RechercherTrajetAvancee

*/

// Méthode RechercherTrajetSimple
void Catalogue::RechercherTrajetSimple(const char * depart,const char * arrivee)
{
  // On parcours le catalogue
  for(unsigned int i=0;i<tailleAct;i++)
  {
    tableau[i].pointeurSurTrajet->concatDepart(); // on remplit pileDepart
    tableau[i].pointeurSurTrajet->concatArrivee(); // on remplit pileArrivee
    if( strstr(tableau[i].pointeurSurTrajet->pileDepart,depart)!=nullptr )
    {
      if( strstr(tableau[i].pointeurSurTrajet->pileArrivee,arrivee)!=nullptr )
      {
        tableau[i].pointeurSurTrajet->Afficher(); cout << " " << endl;
      }
    }
  }
}// Fin de RechercherTrajetSimple

// Méthode Afficher
void Catalogue::Afficher() const
{
  if(tailleAct<=0)
  {
    cout << "Le catalogue est vide pour le moment !" << endl;
    return;
  }
  for(unsigned int i=0;i<tailleAct;i++)
  {
    tableau[i].pointeurSurTrajet->Afficher(); cout << ""<< endl;
  }
} // Fin de Afficher

// Méthode Ajouter
void Catalogue::Ajouter( Trajet * unTrajet )
{
  if(tailleAct<tailleMax)
  {
    tableau[tailleAct]=TrajetCompose(1,1,unTrajet);
  }
  tailleAct++;
} // Fin de Ajouter



//-------------------------------------------- Constructeurs - destructeur
Catalogue::Catalogue ( const Catalogue & unCatalogue )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Catalogue>" << endl;
#endif
  tableau = new TrajetCompose[unCatalogue.tailleMax];
} //----- Fin de Catalogue (constructeur de copie)


Catalogue::Catalogue (unsigned int taille )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Catalogue>" << endl;
#endif
  tailleMax=taille;
  tailleAct=0;
  //tableau = new TrajetCompose[tailleMax];
  tableau = (TrajetCompose*)malloc(sizeof(TrajetCompose)*tailleMax);
} //----- Fin de Catalogue


Catalogue::~Catalogue ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Catalogue>" << endl;
#endif

free(tableau);
} //----- Fin de ~Catalogue


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
