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
const int buffer = 255 ;
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
// La liste chainée qui va stocker les pointeurs
struct ListTrajet
{
  ListTrajet * next;
  Trajet * pointeur;
};

char  pileDepart[buffer];
char  pileArrivee[buffer];

//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //
    virtual char* concatDepart() = 0 ;
    virtual char* concatArrivee() = 0 ;
    // Concatenation des villes de départ
    // Concatenation des villes d'arrivee

    virtual void Afficher() const = 0;
    // La méthode virtuelle pure qui rend la classe abstraite
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

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
char  villeDepart[buffer];
char  villeArrivee[buffer];
char  moyenTransport[buffer];
};

//-------------------------------- Autres définitions dépendantes de <Trajet>

#endif // TRAJET_H
