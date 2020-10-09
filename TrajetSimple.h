/*************************************************************************
                           TrajetSimple  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $ANNEE$ par $AUTEUR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <TrajetSimple> (fichier TrajetSimple.h) ----------------
#if ! defined ( TRAJETSIMPLE_H )
#define TRAJETSIMPLE_H


//--------------------------------------------------- Interfaces utilisées
#include "Trajet.h"
#include "Collection.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <TrajetSimple>
//
// Cette Classe existe surtout pour la compréhension globale
// Elle permet de stocker un unique trajet "villeDepart-villeArrivee"
// C'est le plus petit TrajetCompose possible 
//------------------------------------------------------------------------

class TrajetSimple : public Trajet,public Collection
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //
     ListTrajet * head=nullptr;
     // Pour faciliter le parcours et la manipulation du contenu de trajet
     // On utilise la liste chainée ListTrajet

     void Ajouter( Trajet * unTrajet);
     /*********************************************************************/
     // Les quatres fonctions suivantes servent surtout à l'Algorithme de
     // recherche (simple comme avancée)
     char* concatDepart() ;
     // cette fonction parcours le trajet et concatène les villes de départ dans
     //la chaîne de caractères appelé pileDepart
     char* concatArrivee() ;
     // cette fonction parcours le trajet et concatène les villes d'arrivee dans
     // la chaînes de caractères appelé pileArrivee
     char* globalDepart() ;
     // cette fonction parcours le trajet et copie la ville de départ global à
     // l'ensemble du trajet dans la chaîne de caractères appelé villeDepartGlobal
     char* globalArrivee() ;
     // cette fonction parcours le trajet et copie la ville d'arrivée global à
     // l'ensemble du trajet dans la chaîne de caractères appelé villeArriveeGlobal

    virtual void Afficher() const;
    // La méthode affiche simplement les infos de bases

//-------------------------------------------- Constructeurs - destructeur
    TrajetSimple ( const TrajetSimple & unTrajetSimple ,const Collection & uneCollection );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    TrajetSimple ( const char * depart,const char * arrivee,const char * transport );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~TrajetSimple ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

};

//-------------------------------- Autres définitions dépendantes de <TrajetSimple>

#endif // TRAJETSIMPLE_H
