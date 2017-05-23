#include <iostream>
#include <string>
#include <vector>
#include "Eleve.h"


#ifndef _GROUPE_
#define _GROUPE_

class Groupe {
	string nom_;
	vector<Eleve*> listeEleve_;

public:
	Groupe::Groupe(string nom, vector<Eleve*> listeEleve) { nom_ = nom; listeEleve_ = listeEleve; }
	Groupe::Groupe();
	void setNom(string nom) { nom_ = nom; }
	void setListeEleve(vector<Eleve*> listeEleve) { listeEleve_ = listeEleve; }
	string getNom() { return nom_; }
	vector<Eleve*> getListe() { return listeEleve_; }
};






#endif
