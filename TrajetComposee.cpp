/*************************************************************************
                           TrajetComposee  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $ANNEE$ par $AUTEUR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <TrajetComposee> (fichier TrajetComposee.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "TrajetComposee.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
void TrajetComposee::Ajouter(Trajet &unTrajet)
{
  ListTrajet * tempo = new ListTrajet;
  ListTrajet * tmp = head;
  while(tmp!=nullptr)
  {
    tmp=tmp->next;
  }
  tempo->pointeur=&unTrajet;
  tempo->next=nullptr;
  tmp->next=tempo;
}

// type TrajetComposee::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode
void TrajetComposee::Afficher() const
{
    unsigned int i=0;
    ListTrajet * tempo=head;
    while(tempo!=nullptr)
    {
      if(i!=0) cout << " - ";
      tempo->pointeur->Afficher();
      tempo=tempo->next;
      i=1;
    }
}

//-------------------------------------------- Constructeurs - destructeur
TrajetComposee::TrajetComposee ( const Collection & uneCollection ) : Collection(uneCollection)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <TrajetComposee>" << endl;
#endif
} //----- Fin de TrajetComposee (constructeur de copie)


TrajetComposee::TrajetComposee (unsigned int max,unsigned int act,Trajet * pointeur )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <TrajetComposee>" << endl;
#endif
// Collection
pointeurSurTrajet=this;
tailleAct=act;
tailleMax=max;
} //----- Fin de TrajetComposee


TrajetComposee::~TrajetComposee ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <TrajetComposee>" << endl;
#endif
  // Destruction de la liste d'objet
  ListTrajet * tempo=head;
  while(tempo!=nullptr)
  {
    tempo=tempo->next;
    delete head;
    head=tempo;
  }
} //----- Fin de ~TrajetComposee


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées