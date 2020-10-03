/*************************************************************************
                           Appli  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $ANNEE$ par $AUTEUR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation du module <Appli> (fichier Appli.cpp) ---------------

/////////////////////////////////////////////////////////////////  INCLUDE
//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
//------------------------------------------------------ Include personnel
#include "Appli.h"

///////////////////////////////////////////////////////////////////  PRIVE
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//---------------------------------------------------- Variables statiques

//------------------------------------------------------ Fonctions privées
static void test ( void )
// Mode d'emploi :
//
// Contrat :
//
// Algorithme :
//
{
  // Le fameux Catalogue
  // Catalogue * catalogue = new Catalogue(3);

  // Ajout de Trajets Simples
  TrajetSimple * TS1 = new TrajetSimple("Lyon","Bordeaux","Train") ;
  TrajetSimple * TS3 = new TrajetSimple("Lyon","Paris","Auto") ;
  TrajetSimple * TS2_1 = new TrajetSimple("Lyon","Marseille","Bateau");
  TrajetSimple * TS2_2 = new TrajetSimple("Marseille","Paris","Avion");

  // Affichage test
  TS1->Afficher(); cout << "\r\n" ;
  TS3->Afficher(); cout << "\r\n" ;

  // Ajout des collections associées
  Collection * CS1 = new Collection(1,1,TS1);
  Collection * CS3 = new Collection(1,1,TS3);

  // Création du trajet composée
  // On ajoute les trajets simples à l'envers (désolé c'était un oubli)
  TrajetComposee * TS2 = new TrajetComposee(2,2,TS2_2);
  TS2->Ajouter(TS2_1);
  TS2->Afficher();cout << "" << "\r\n";

  // Libération de la mémoire
  delete CS3;
  delete TS3;
  delete TS2_2;
  delete TS2_1;
  delete TS2;
  delete CS1;
  delete TS1;
} //----- fin de nom

//////////////////////////////////////////////////////////////////  PUBLIC
//---------------------------------------------------- Fonctions publiques
int main ( void )
// Algorithme :
//
{
  test();
  return 0;
} //----- fin de Nom
