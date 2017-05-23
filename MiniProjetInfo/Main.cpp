#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Eleve.h"
#include "Groupe.h"
#include "Menu.h"
#include "CImg.h"
using namespace std;
using namespace cimg_library;
//najjar@emse.fr


int main() {
	// On crée les groupes A,B,C,D et E
	
	Groupe* GrpA =new(Groupe);
	GrpA->setNom("Groupe A");
	Groupe* GrpB =new(Groupe);
	GrpB->setNom("Groupe B");
	Groupe* GrpC =new(Groupe);
	GrpC->setNom("Groupe C");
	Groupe* GrpD =new(Groupe);
	GrpD->setNom("Groupe D");
	Groupe* GrpE =new(Groupe);
	GrpE->setNom("Groupe E");

	// On initialise les groupes et les élèves
	//initialisation(GrpA, GrpB, GrpC, GrpD, GrpE);

	//On crée les différentes options
	Option optPrincipale;
	optPrincipale.setNom("Principale");
	vector<Option*> vec;
	Option* appel = new(Option);
	appel->setNom("Appel");
	vec.push_back(appel);
	Option* creerGrp = new(Option);
	creerGrp->setNom("Créer Groupe");
	vec.push_back(creerGrp);
	Option* quitter = new(Option);
	quitter->setNom("Quitter");
	vec.push_back(quitter);
	optPrincipale.setMenuSuivant(vec);
	vector<Option*> vec2;
	Option* retour = new(Option);
	retour->setNom("Retour");
	vec2.push_back(retour);
	Option* faireAppel = new(Option);
	faireAppel->setNom("Faire l'Appel");
	vec2.push_back(faireAppel);
	Option* choixGrp = new(Option);
	choixGrp->setNom("Choix du Groupe");
	vec2.push_back(choixGrp);
	appel->setMenuSuivant(vec2);
	

	// Appel du Menu
	// + Navigation dans le Menu

	// Affichage des fenetres (Menu, Trombi, etc.)
	

	return 0;
}

void initialisation(Groupe* GrpA, Groupe* GrpB, Groupe* GrpC, Groupe* GrpD, Groupe* GrpE) {
	ifstream flux("Fise1.txt");// Lire le fichier avec les noms et les groupes
	vector<string> liste2;//On segmente la liste suivant les .ppm

	if (!flux.is_open()) { cout << "Erreur d'ouverture" << endl; }
	else {
		string personne;
		for (int i = 0; i < 108; i++) {
			//getline(flux, personne,".ppm");
			liste2.push_back(personne);
		}
		if (!flux.good()) cout << "Erreur de lecture" << endl;
		else cout << "Lecture treminée" << endl;


		for (vector<string>::iterator it = liste2.begin(); it != liste2.end(); it++) {
			//...(*it)On segmente le string suivant les ; pour recuperer le nom, prenom, groupe et nom de photo
			unsigned n, m, o;
			n = it->find(";", 0);
			string nom((*it), 0, n);
			m = it->find(";", n);
			string prenom((*it), n, m - n);
			o = it->find(";", m);
			string groupe((*it), m, o - m);
			string photo((*it), o, size(*it));

			Eleve* eleve = new(Eleve);// On crée l'élève en pointeur pour pouvoir les conserver en dehors de la fonction
			eleve->setNom(nom);
			eleve->setPrenom(prenom);
			eleve->setPhoto(photo + ".ppm");

			// On ajoute l'élève dans son groupe suivant l'extraction
			if (groupe == "A") {
				vector<Eleve*> A = GrpA->getListe();
				A.push_back(eleve);
				GrpA->setListeEleve(A);
			}
			if (groupe == "B") {
				vector<Eleve*> B = GrpB->getListe();
				B.push_back(eleve);
				GrpB->setListeEleve(B);
			}
			if (groupe == "C") {
				vector<Eleve*> C = GrpC->getListe();
				C.push_back(eleve);
				GrpC->setListeEleve(C);
			}
			if (groupe == "D") {
				vector<Eleve*> D = GrpD->getListe();
				D.push_back(eleve);
				GrpD->setListeEleve(D);
			}
			if (groupe == "E") {
				vector<Eleve*> E = GrpE->getListe();
				E.push_back(eleve);
				GrpE->setListeEleve(E);
			}
		}
	}
}





void affichageFenetre(string nom, int haut, int larg) {//string nom = "", int haut = 0, int larg = 0
	if (nom=="trombi"){//peut etre utiliser une fonction de comparaison des chaines de caractères
		//On fait un trombino avec des dimensions standards


		cout<<"Affichage Trombinoscope"<<endl;
	} if (nom=="menu"){
		//dimensions du menu


		cout<<"Affichage Menu"<<endl;
	} else {//On fait avec les dimensions données
		

	}
	
}

void affichageOption (Option opt) {
	// on a besoin d'un nom et de ce qu'il y a à l'intérieur de l'option genre affichage, retour, etc.
	// On va afficher un bouton avec le nom de l'option dessus

}

void affichageTrmobi() {// Affichage du trombino avec validation au clic pour faire l'appel

}

void affichageValid() {// Affichage du message de confirmation de l'appel

}

void affichageRecap() {//On affiche le récaputulatif de l'appel (un tableau avec 2 colonnes : présents et absents)

}



//void split(const string &chaine, char delimiteur, vector &elements)
//{
//	stringstream ss(chaine);
//	string sousChaine;
//	while (getline(ss, sousChaine, delimiteur))
//	{
//		elements.push_back(sousChaine);
//	}
//}