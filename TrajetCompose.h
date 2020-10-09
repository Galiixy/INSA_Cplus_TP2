/*************************************************************************
                           TrajetCompose  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $ANNEE$ par $AUTEUR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <TrajetCompose> (fichier TrajetCompose.h) -
#if ! defined ( TRAJETCOMPOSEE_H )
#define TRAJETCOMPOSEE_H

//--------------------------------------------------- Interfaces utilisées
#include "Trajet.h"
#include "Collection.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <TrajetCompose>
//
// La classe TrajetCompose stocke une collection hétérogènes de trajets
// c'est-à-dire qu'un trajet composé peut contenir un ou plusieurs trajets
// simples et / ou  un ou plusieurs trajets composés
//------------------------------------------------------------------------

class TrajetCompose : public Trajet, public Collection
{
//----------------------------------------------------------------- PUBLIC


public:
  ListTrajet * head=nullptr;
  // Pour faciliter le parcours et la manipulation du contenu de trajet
  // On utilise la liste chainée ListTrajet

  void Ajouter( Trajet * unTrajet);
  // Cette méthode prend en paramètre un pointeur sur trajet
  // Et ajoute ce Trajet dans la liste chainée de TrajetCompose et donc
  // dans TrajetCompose
  // L'ajout se fait en queue de liste pour respecter l'ordre d'ajout

  void Afficher() const;
  // Cette fonction parcours la liste chainée et affiche les sous trajets
  // La fonction Afficher() est appelé  de manière récursive
  // l'affichage ne se réalise que quand l'objet est un trajet simple

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
  
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //

//-------------------------------------------- Constructeurs - destructeur
    TrajetCompose (  );
    // Constructeur par défaut de TrajetCompose

    TrajetCompose ( const Collection & uneCollection );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    TrajetCompose ( unsigned int max,unsigned int act,Trajet * pointeur);
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~TrajetCompose ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

protected:
//----------------------------------------------------- Méthodes protégées
//----------------------------------------------------- Attributs protégés

};

//-------------------------------- Autres définitions dépendantes de <TrajetCompose>

#endif // TRAJETCOMPOSEE_H
