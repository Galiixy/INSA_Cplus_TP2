/*************************************************************************
                           Trajet  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $ANNEE$ par $AUTEUR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <Trajet> (fichier Trajet.h) ----------------
#if ! defined ( TRAJET_H )
#define TRAJET_H

//--------------------------------------------------- Interfaces utilisées
#include <iostream>
#include <cstring>

//------------------------------------------------------------- Constantes
const int buffer =  1000 ;
// Cette constante définit le nombre de caractères pouvant être stocké

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Trajet>
//
//
//------------------------------------------------------------------------

class Trajet
{
//----------------------------------------------------------------- PUBLIC
public:

struct ListTrajet
{
  ListTrajet * next;
  Trajet * pointeur;
};
// C'est la liste chainée qui va stocker les pointeurs sur les trajets
// Elle est utilisée surtout dans TrajetCompose pour stocker la collection
// de Trajets et pour la parcourir efficacement

char  pileDepart[buffer];
char  pileArrivee[buffer];
char villeDepartGlobal [buffer];
char villeArriveeGlobal [buffer];

//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //
    // Ces méthodes virtuelles pures vont être redéfinis dans les classes filles
    virtual void Ajouter( Trajet * unTrajet)=0;
    virtual char* concatDepart() = 0 ;
    virtual char* concatArrivee() = 0 ;
    virtual char* globalDepart() = 0 ;
    virtual char* globalArrivee() = 0 ;

    virtual void Afficher() const = 0;
    // La méthode virtuelle pure
//-------------------------------------------- Constructeurs - destructeur
    Trajet ( const Trajet & unTrajet );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //
    Trajet(const char * depart,const char * arrivee,const char * transport);
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    Trajet ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Trajet ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE


//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
char  villeDepart[buffer];
char  villeArrivee[buffer];
char  moyenTransport[buffer];
};

//-------------------------------- Autres définitions dépendantes de <Trajet>

#endif // TRAJET_H
