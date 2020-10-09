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
  Catalogue * catalogue = new Catalogue(3);

  //catalogue->Afficher();

  // Ajout de Trajets Simples
  TrajetSimple * TS1 = new TrajetSimple("Lyon","Bordeaux","Train") ;
  TrajetSimple * TS3 = new TrajetSimple("Lyon","Paris","Auto") ;
  TrajetSimple * TS2_1 = new TrajetSimple("Lyon","Marseille","Bateau");
  TrajetSimple * TS2_2 = new TrajetSimple("Marseille","Paris","Avion");

  // Affichage test de Trajet Simple
  //TS1->Afficher(); cout << "\r\n" ;
  //TS3->Afficher(); cout << "\r\n" ;

  // Ajout des collections associées
  //Collection * CS1 = new Collection(1,1,TS1);
  //Collection * CS3 = new Collection(1,1,TS3);

  // Création du trajet composée
  // On ajoute les trajets simples dans l'ordre
  TrajetCompose * TS2 = new TrajetCompose(1,1,TS2_1);
  TS2->Ajouter(TS2_2);

  //TS2->Afficher();cout << " " << "\r\n";


  // Remplissage du catalogue
  catalogue->Ajouter(TS1);
  catalogue->Ajouter(TS2);
  catalogue->Ajouter(TS3);

  catalogue->Afficher();

  //catalogue->RechercherTrajetSimple("Lyon","Paris");


  // Libération de la mémoire
  //delete CS3;
  //delete CS1;
  delete TS3;
  delete TS2_2;
  delete TS2_1;
  delete TS2;
  delete TS1;
  delete catalogue;
} //----- fin de nom

/*
static void test2 (void)
{
  Catalogue * catalogue = new Catalogue(4);

  Trajet * TS1 = new TrajetSimple("A","B","MT1");
  Trajet * TC1_1 = new TrajetSimple("B","Y","MT3");
  Trajet * TC1_2 = new TrajetSimple("Y","C","MT2");
  Trajet * TS2 = new TrajetSimple("B","C","MT1");
  Trajet * TC2_1 = new TrajetSimple("A","Z","MT2");
  Trajet * TC2_2 = new TrajetSimple("Z","C","MT1");

  TrajetCompose * TC1 = new TrajetCompose(1,1,TC1_1);
  TC1->Ajouter(TC1_2);
  TrajetCompose * TC2 = new TrajetCompose(1,1,TC2_1);
  TC2->Ajouter(TC2_2);


  catalogue->Ajouter(TS1);
  catalogue->Ajouter(TC1);
  catalogue->Ajouter(TS2);
  catalogue->Ajouter(TC2);

  //catalogue->Afficher();

  //catalogue->RechercherTrajetSimple("A","C");
  catalogue->RechercherTrajetAvancee("A","C");


  delete TC2_2;
  delete TC2_1;
  delete TC2;

  delete TS2;

  delete TC1_2;
  delete TC1_1;
  delete TC1;

  delete TS1;

  delete catalogue;

  return;
}
*/

//////////////////////////////////////////////////////////////////  PUBLIC
//---------------------------------------------------- Fonctions publiques
int main ( void )
{
  /*
  char lecture[100];
  char depart [100];
  char arrivee [100];
  Catalogue * catalogue = new Catalogue(3);

  cout<<"Bienvenue dans le catalogue de trajet : "<<endl;
  cout<<endl<<"--------------------------------------------------------------------------"<<endl;
  cout<<"Ecrivez ""test"" pour charger le test de l'application"<<endl;
  cout<<"Ecrivez ""ajout"" pour ajouter un trajet simple ou composé au catalogue"<<endl;
  cout<<"Ecrivez ""affichage"" pour afficher le contenu du catalogue"<<endl;
  cout<<"Ecrivez ""recherche"" pour rechercher un trajet dans le catalogue"<<endl;
  cout<<"Ecrivez ""bye"" pour quitter l'application"<<endl;
  cout<<"--------------------------------------------------------------------------"<<endl<<endl;

  fscanf(stdin,"%99s",lecture);
  while (strcmp(lecture,"bye")!=0) {
    if (strcmp(lecture,"test")==0) {
      test();
    } else if (strcmp(lecture,"ajout")==0) {
      //add a route
      cout<<"Ecrivez ""simple"" pour créer un tout nouveau trajet"<<endl;
      cout<<"Ecrivez ""composé"" pour créer un trajet composé d'autres trajets"<<endl;
      fscanf(stdin,"%99s",lecture);
      if (strcmp(lecture,"simple")==0) {
        cout << endl <<"Ville de Départ : ";
        fscanf(stdin,"%99s",lecture);
        strcpy(depart,lecture);
        cout << endl <<"Ville d'Arrivée : ";
        fscanf(stdin,"%99s",lecture);
        strcpy(arrivee,lecture);
        cout << endl <<"Moyen de transport : ";
        fscanf(stdin,"%99s",lecture);
        Trajet * TS = new TrajetSimple(depart,arrivee, lecture) ;
        catalogue->Ajouter(TS);
      }else if (strcmp(lecture,"composé")){
        //
      }
    } else if (strcmp(lecture,"affichage")==0) {
      //affichage
      catalogue->Afficher();
    } else if (strcmp(lecture,"recherche")==0) {
      //research
      cout << endl <<"Ville de Départ : ";
      fscanf(stdin,"%99s",lecture);
      cout << endl <<"Ville d'Arrivée : ";
      fscanf(stdin,"%99s",lecture);
    }
    cout<<endl<<"--------------------------------------------------------------------------"<<endl;
    cout<<"Ecrivez ""test"" pour charger le test de l'application"<<endl;
    cout<<"Ecrivez ""ajout"" pour ajouter un trajet simple ou composé au catalogue"<<endl;
    cout<<"Ecrivez ""affichage"" pour afficher le contenu du catalogue"<<endl;
    cout<<"Ecrivez ""recherche"" pour rechercher un trajet dans le catalogue"<<endl;
    cout<<"Ecrivez ""bye"" pour quitter l'application"<<endl;
    cout<<"--------------------------------------------------------------------------"<<endl<<endl;

    fscanf(stdin,"%99s",lecture);
  }
  */
  test();
  return 0;
} //----- fin du main
