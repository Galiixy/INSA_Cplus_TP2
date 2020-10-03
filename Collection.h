/*************************************************************************
                           Collection  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $ANNEE$ par $AUTEUR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <Collection> (fichier Collection.h) ----------------
#if ! defined ( COLLECTION_H )
#define COLLECTION_H

//--------------------------------------------------- Interfaces utilisées
#include "Trajet.h"

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Collection>
//
//
//------------------------------------------------------------------------


class Collection
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    Collection (unsigned int max,unsigned int act,Trajet * pointeur);
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    Collection ( const Collection & uneCollection );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    Collection ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Collection ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
unsigned int tailleMax;
unsigned int tailleAct;
Trajet * pointeurSurTrajet;
};

//-------------------------------- Autres définitions dépendantes de <Collection>

#endif // COLLECTION_H
