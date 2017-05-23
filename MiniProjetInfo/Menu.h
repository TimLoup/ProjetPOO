#include <iostream>
#include <string>
#include <vector>
using namespace std;


#ifndef _OPTION_
#define _OPTION_

class Option {
	string nom_;
	vector<Option*> menuSuivant_;
public:
	Option::Option(string nom, vector<Option*> menu) { nom_ = nom; menuSuivant_ = menu; }
	Option::Option();
	void setNom(string nom) { nom_ = nom; }
	void setMenuSuivant(vector<Option*> menu) { menuSuivant_ = menu; };
	string getNom() { return nom_; }
	vector<Option*> getMenuSuivant() { return menuSuivant_; }
};

#endif