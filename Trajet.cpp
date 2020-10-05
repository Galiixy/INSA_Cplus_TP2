/*************************************************************************
                           Trajet  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $ANNEE$ par $AUTEUR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <Trajet> (fichier Trajet.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Trajet.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type Trajet::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

//-------------------------------------------- Constructeurs - destructeur
Trajet::Trajet ( const Trajet & unTrajet )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Trajet>" << endl;
#endif
    strcpy(villeDepart,unTrajet.villeDepart);
    strcpy(villeArrivee,unTrajet.villeArrivee);
    strcpy(moyenTransport,unTrajet.moyenTransport);
} //----- Fin de Trajet (constructeur de copie)


Trajet::Trajet ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Trajet>" << endl;
#endif
    strcpy(villeDepart,"Aucune");
    strcpy(villeArrivee,"Aucune");
    strcpy(moyenTransport,"Aucun");
    strcpy(pileDepart,"");
    strcpy(pileArrivee,"");
} //----- Fin de Trajet

Trajet::Trajet(const char * depart,const char * arrivee,const char * transport)
{
  #ifdef MAP
      cout << "Appel au constructeur de <Trajet>" << endl;
  #endif
  strcpy(villeDepart,depart);
  strcpy(villeArrivee,arrivee);
  strcpy(moyenTransport,transport);
  strcpy(pileDepart,"");
  strcpy(pileArrivee,"");
}
// Ce constructeur permet de donner des valeurs aux attributs d'instances
// dès la création de la classe (dès l'instanciation)

Trajet::~Trajet ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Trajet>" << endl;
#endif
} //----- Fin de ~Trajet


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
