/*************************************************************************
                           Catalogue  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $ANNEE$ par $AUTEUR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <Catalogue> (fichier Catalogue.h) ----------------
#if ! defined ( CATALOGUE_H )
#define CATALOGUE_H

//--------------------------------------------------- Interfaces utilisées
#include "Collection.h"
#include "TrajetCompose.h"
#include "Trajet.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Catalogue>
//
//
//------------------------------------------------------------------------

class Catalogue
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    /*
    Catalogue  Combiner(void);
    // Cette méthode parcours le catalogue et crée si possible des binômes
    // de trajets qui se suivent c'est-à-dire villeArriveeGlobal de l'un est
    // égal à villeDepartGlobal de l'autre
    // Dans l'utilisation, on fait des appels récursifs pour lister toutes les
    // Possibilités de combinaisons

    void RechercherTrajetAvancee(const char * depart,const char * arrivee);
    // La méthode parcours le catalogue et affiche les trajets valides
    // Possibilité de combiner plusieurs trajets
    */
    void RechercherTrajetSimple(const char * depart,const char * arrivee);
    // La méthode parcours le catalogue et affiche les trajets valides
    // On vérifie si depart se trouve dans la pile de departs
    // puis si arrivee se trouve dans la pile d'arrivée

    void Afficher() const;
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //
    void Ajouter( Trajet * unTrajet);
//-------------------------------------------- Constructeurs - destructeur
    Catalogue ( const Catalogue & unCatalogue );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    Catalogue (unsigned int taille );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Catalogue ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées
TrajetCompose * tableau = nullptr ;
unsigned int tailleAct;
unsigned int tailleMax;
//----------------------------------------------------- Attributs protégés

};

//-------------------------------- Autres définitions dépendantes de <Catalogue>

#endif // CATALOGUE_H
