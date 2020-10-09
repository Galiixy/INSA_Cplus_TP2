/*************************************************************************
                           TrajetSimple  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $ANNEE$ par $AUTEUR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <TrajetSimple> (fichier TrajetSimple.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "TrajetSimple.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type TrajetSimple::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode
void TrajetSimple::Ajouter( Trajet * unTrajet)
{
  cout << "Simple" << endl;
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
}
char* TrajetSimple::globalDepart()
{
  strcpy(villeDepartGlobal,villeDepart);
  return villeDepartGlobal;
}

char* TrajetSimple::globalArrivee()
{
  strcpy(villeArriveeGlobal,villeArrivee);
  return villeArriveeGlobal;
}

char* TrajetSimple::concatDepart()
{
  strcat(pileDepart,villeDepart);
  return pileDepart;
}
// Concatenation des villes de départ

char* TrajetSimple::concatArrivee()
{
  strcat(pileArrivee,villeArrivee);
  return pileArrivee;
}
// Concatenation des villes d'arrivee

void TrajetSimple::Afficher() const
{
  cout << " de " << this->villeDepart << " à " << this->villeArrivee << " en " << this->moyenTransport ;
}
// Méthode réalisant l'affichage
//-------------------------------------------- Constructeurs - destructeur
TrajetSimple::TrajetSimple ( const TrajetSimple & unTrajetSimple, const Collection & uneCollection ) : Trajet(unTrajetSimple),Collection(1,1,this)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <TrajetSimple>" << endl;
#endif
} //----- Fin de TrajetSimple (constructeur de copie)


TrajetSimple::TrajetSimple ( const char * depart,const char * arrivee,const char * transport ) : Trajet(depart,arrivee,transport), Collection(1,1,this)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <TrajetSimple>" << endl;
#endif
} //----- Fin de TrajetSimple


TrajetSimple::~TrajetSimple ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <TrajetSimple>" << endl;
#endif
// Destruction de la liste d'objet
ListTrajet * tempo=head;
while(tempo!=nullptr)
{
  tempo=tempo->next;
  delete head;
  head=tempo;
}
} //----- Fin de ~TrajetSimple


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
