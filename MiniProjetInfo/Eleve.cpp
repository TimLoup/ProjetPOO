#include "Eleve.h"

Eleve::Eleve(string nom, string prenom, string photo)
{
	nom_ = nom;
	prenom_ = prenom;
	photo_ = photo;
}

Eleve::Eleve()
{

}

void Eleve::setNom(string nom)
{
	nom_ = nom;
}

void Eleve::setPrenom(string prenom)
{
	prenom_ = prenom;
}

void Eleve::setPhoto(string photo)
{
	photo_ = photo;
}
