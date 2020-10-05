/*************************************************************************
                           TrajetComposee  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $ANNEE$ par $AUTEUR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <TrajetComposee> (fichier TrajetComposee.h) ----------------
#if ! defined ( TRAJETCOMPOSEE_H )
#define TRAJETCOMPOSEE_H

//--------------------------------------------------- Interfaces utilisées
#include "Trajet.h"
#include "Collection.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <TrajetComposee>
//
//
//------------------------------------------------------------------------

class TrajetComposee : public Trajet, public Collection
{
//----------------------------------------------------------------- PUBLIC


public:
  ListTrajet * head=nullptr;
  void Ajouter( Trajet * unTrajet);
  void Afficher() const;
  char* concatDepart() ;
  char* concatArrivee() ;
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //

//-------------------------------------------- Constructeurs - destructeur
    TrajetComposee ( const Collection & uneCollection );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    TrajetComposee ( unsigned int max,unsigned int act,Trajet * pointeur);
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~TrajetComposee ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

protected:
//----------------------------------------------------- Méthodes protégées
//----------------------------------------------------- Attributs protégés

};

//-------------------------------- Autres définitions dépendantes de <TrajetComposee>

#endif // TRAJETCOMPOSEE_H
