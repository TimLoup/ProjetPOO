#include <iostream>
#include <string>
#include <vector>
using namespace std;

#ifndef _ELEVE_
#define _ELEVE_

class Eleve {
	string nom_;
	string prenom_;
	string photo_;
	bool present_;
public :
	Eleve::Eleve(string nom, string prenom, string photo);
	Eleve::Eleve();
	//string getNom{ return nom_ };
	//string getPrenom{ return prenom_ };
	//bool getPresent{ return present_ };
	void setNom(string nom);
	void setPrenom(string prenom);
	void setPhoto(string photo);
	string getNom() { return nom_; }
	string getPrenom() { return prenom_; }
	string getPhoto() { return photo_; }
};






#endif
