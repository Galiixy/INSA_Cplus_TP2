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
char* TrajetComposee::concatDepart()
{
  ListTrajet * tempo=head;
  while(tempo!=nullptr)
  {
    strcat(pileDepart,tempo->pointeur->concatDepart());
    tempo=tempo->next;
  }
  return pileDepart;
}

char* TrajetComposee::concatArrivee()
{
  ListTrajet * tempo=head;
  while(tempo!=nullptr)
  {
    strcat(pileArrivee,tempo->pointeur->concatArrivee());
    tempo=tempo->next;
  }
  return pileArrivee;
}

void TrajetComposee::Ajouter(Trajet * unTrajet)
{
  tailleAct++;
  tailleMax++;
  /*  Programme pour l'ajout en tête */
    if(head==nullptr)
    {
      ListTrajet * tmp = new ListTrajet ;
      tmp->pointeur=unTrajet;
      tmp->next=head;
      head=tmp;
    }
    else
    {
      ListTrajet * elt = new ListTrajet ;
      elt->pointeur=unTrajet;
      elt->next=nullptr;// Car il prend la place du dernier élément

      ListTrajet * tmp = head;

      while(tmp->next!=nullptr)
      {
        tmp=tmp->next;
      }
      tmp->next=elt;
    }
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


TrajetComposee::TrajetComposee (unsigned int max,unsigned int act,Trajet * pointeur ):Collection(max,act,pointeur)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <TrajetComposee>" << endl;
#endif
// Collection
this->Ajouter(pointeur);
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
