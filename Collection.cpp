/*************************************************************************
                           Collection  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $ANNEE$ par $AUTEUR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <Collection> (fichier Collection.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Collection.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type Collection::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode



//-------------------------------------------- Constructeurs - destructeur
Collection::Collection ( const Collection & uneCollection )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Collection>" << endl;
#endif
    tailleAct=uneCollection.tailleAct;
    tailleMax=uneCollection.tailleMax;
    pointeurSurTrajet=uneCollection.pointeurSurTrajet;
} //----- Fin de Collection (constructeur de copie)


Collection::Collection (unsigned int max,unsigned int act,Trajet * pointeur):tailleMax(max),tailleAct(act),pointeurSurTrajet(pointeur)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Collection>" << endl;
#endif
} //----- Fin de Collection


Collection::~Collection ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Collection>" << endl;
#endif
} //----- Fin de ~Collection


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
