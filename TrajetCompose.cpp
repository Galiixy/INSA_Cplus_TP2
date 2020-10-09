/*************************************************************************
                           TrajetCompose  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $ANNEE$ par $AUTEUR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <TrajetCompose> (fichier TrajetCompose.cpp)

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "TrajetCompose.h"
//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
char* TrajetCompose::globalDepart()
{
  ListTrajet * tempo=head;
  if(tempo!=nullptr)
  {
    strcpy(villeDepartGlobal,tempo->pointeur->villeDepart);
  }
  return villeDepartGlobal;
}// Fin de globalDepart


char* TrajetCompose::globalArrivee()
{
  ListTrajet * tempo=head;
  while(tempo!=nullptr)
  {
    strcpy(villeArriveeGlobal,tempo->pointeur->globalArrivee());
    tempo=tempo->next;
  }
  return villeArriveeGlobal;
}// Fin de globalArrivee


char* TrajetCompose::concatDepart()
{
  ListTrajet * tempo=head;
  while(tempo!=nullptr)
  {
    strcat(pileDepart,tempo->pointeur->concatDepart());
    tempo=tempo->next;
  }
  return pileDepart;
}// Fin de concatDepart


char* TrajetCompose::concatArrivee()
{
  ListTrajet * tempo=head;
  while(tempo!=nullptr)
  {
    strcat(pileArrivee,tempo->pointeur->concatArrivee());
    tempo=tempo->next;
  }
  return pileArrivee;
}// Fin de ConcatArrivee


void TrajetCompose::Ajouter(Trajet * unTrajet)
{
  /*  Programme pour l'ajout en tête  en cas de liste vide*/
    if(head==nullptr)
    {
      ListTrajet * tmp = new ListTrajet;
      tmp->pointeur=unTrajet;
      tmp->next=head;
      head=tmp;
    }
    else
    {
      tailleAct++;
      tailleMax++;
      // Ajout en queue de liste
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
} // Fin de la méthode Ajouter

// type TrajetCompose::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode
void TrajetCompose::Afficher() const
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
TrajetCompose::TrajetCompose (  ):Collection(0,0,nullptr)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur par défaut de <TrajetCompose>" << endl;
#endif
} //----- Fin de TrajetCompose (constructeur de copie)


TrajetCompose::TrajetCompose ( const Collection & uneCollection ) : Collection(uneCollection)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <TrajetCompose>" << endl;
#endif
} //----- Fin de TrajetCompose (constructeur de copie)


TrajetCompose::TrajetCompose (unsigned int max,unsigned int act,Trajet * pointeur ):Collection(max,act,pointeur)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <TrajetCompose>" << endl;
#endif
// Collection
this->Ajouter(pointeur);
} //----- Fin de TrajetCompose


TrajetCompose::~TrajetCompose ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <TrajetCompose>" << endl;
#endif
  // Destruction de la liste d'objet
  ListTrajet * tempo=head;
  while(tempo!=nullptr)
  {
    tempo=tempo->next;
    delete head;
    head=tempo;
  }
} //----- Fin de ~TrajetCompose


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
